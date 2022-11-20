// Fill out your copyright notice in the Description page of Project Settings.


#include "TeacherCharacter.h"

#include "DesktopPlatformModule.h"
#include "ImgMediaSource.h"
#include "MediaPlayer.h"
#include "NiagaraFunctionLibrary.h"

class IDesktopPlatform;
class UImgMediaSource;

ATeacherCharacter::ATeacherCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATeacherCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void ATeacherCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(Indexing)
	{
		FVector CameraLocation;
		FRotator CameraRotation;
		if(Controller)
		{
			Controller->GetPlayerViewPoint(CameraLocation,CameraRotation);
		}
		

		const FTransform SocketTransform = GetMesh()->GetSocketTransform(SocketName);
		const FVector StartTrace = CameraLocation;
		const FVector TraceDirection=CameraRotation.Vector();
		const FVector TraceEnd = StartTrace + TraceDirection * TraceLenght;

		//Задаём нараметры коллизии
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(GetOwner());
		CollisionParams.bReturnPhysicalMaterial=true;

		FHitResult HitResult;
		GetWorld()->LineTraceSingleByChannel(HitResult,StartTrace,TraceEnd,ECollisionChannel::ECC_Visibility,CollisionParams);

		FVector EndTraceVfx=TraceEnd;
		if (HitResult.bBlockingHit)
		{
			EndTraceVfx=HitResult.ImpactPoint;
		}
		SpawnTraceVFX(GetMesh()->GetSocketTransform(SocketName).GetLocation(),EndTraceVfx);
		SpawnSphereVFX(EndTraceVfx);
	}
	
}


void ATeacherCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATeacherCharacter::MakeVideoPlayer()
{
	if (MediaPlayer)
	{
		//FString Path;

		IDesktopPlatform* Platform = FDesktopPlatformModule::Get();
		if (Platform)
		{
			auto* ParentHandle = FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr);

			const FString FileTypes = "All Files (*.PNG, *.JPG, *.MP4)|*.PNG;*.JPG;*.MP4|"
				"Video Files (*.MP4)|*.MP4|"
				"Image Files (*.PNG, *.JPG)|*.PNG;*.JPG";

			TArray<FString> OutFiles;

			Platform->OpenFileDialog(ParentHandle, "Choose media", "", "", FileTypes, 1, OutFiles);

			if (OutFiles.Num() > 0)
			{
				AdressPath = OutFiles[0];
			}
		}
		UImgMediaSource* ImgMediaSource = NewObject<UImgMediaSource>();
		
		//ImgMediaSource->IsPathRelativeToProjectRoot = true;
		ImgMediaSource->SetSequencePath(AdressPath);
		
		//ImgMediaSource->FrameRateOverride.Numerator=1000;
		ImgMediaSource->bFillGapsInSequence=false;
		
		MediaPlayer->SetLooping(true);
		MediaPlayer->OpenSource(ImgMediaSource);
		
		//MediaPlayer->Play();
		

		//UFileMediaSource* MediaSource = NewObject<UFileMediaSource>();
		//MediaSource->FilePath=Path;
		//MediaPlayer->OpenSource(MediaSource);

		//UMediaSoundComponent* Sound = NewObject<UMediaSoundComponent>();
		//Sound->SetMediaPlayer(MediaPlayer);
		//Sound->RegisterComponent();
	}
}

void ATeacherCharacter::SetPlay()
{
	MediaPlayer->Play();
}

void ATeacherCharacter::SetPause()
{
	MediaPlayer->Pause();
}

void ATeacherCharacter::SetReverse()
{
	MediaPlayer->Rewind();
	FrameIterator=0;
	GetWorldTimerManager().SetTimer(TimerHandle,this,&ThisClass::SetPause,FrameRate,false,FrameRate);
}

void ATeacherCharacter::NextSlide()
{
	UE_LOG(LogTemp,Warning,TEXT("NextSlide"));
	
	MediaPlayer->Play();
	
	
	if(FrameIterator==3)
	{
		FrameIterator=0;
		GetWorldTimerManager().SetTimer(TimerHandle,this,&ThisClass::SetPause,FrameRate*2,false,FrameRate*2);
		
	}
	else
	{
		FrameIterator++;
		GetWorldTimerManager().SetTimer(TimerHandle,this,&ThisClass::SetPause,FrameRate,false,FrameRate);
	}
}

void ATeacherCharacter::SpawnTraceVFX(const FVector& StartTrace, const FVector& EndTrace)
{
	const auto TraceVFXComponent=UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(),TraceVFX,StartTrace);
	if(TraceVFXComponent)
	{
		TraceVFXComponent->SetNiagaraVariableVec3(TraceTargetName,EndTrace);
	}
}

void ATeacherCharacter::SpawnSphereVFX(const FVector& PlaceToSphere)
{
	const auto SphereVFXComponent=UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(),SphereVFX,PlaceToSphere);
}

