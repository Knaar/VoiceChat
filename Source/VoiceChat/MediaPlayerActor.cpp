// Fill out your copyright notice in the Description page of Project Settings.


#include "MediaPlayerActor.h"

#include "DesktopPlatformModule.h"
#include "FileMediaSource.h"
#include "IDesktopPlatform.h"
#include "MediaPlayer.h"
#include "ImgMediaSource.h"

#include "MediaSoundComponent.h"

// Sets default values
AMediaPlayerActor::AMediaPlayerActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMediaPlayerActor::BeginPlay()
{
	Super::BeginPlay();
	//MakeVideoPlayer();

}

// Called every frame
void AMediaPlayerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMediaPlayerActor::MakeVideoPlayer()
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
				Path = OutFiles[0];
			}
		}
		UImgMediaSource* ImgMediaSource = NewObject<UImgMediaSource>();
		
		//ImgMediaSource->IsPathRelativeToProjectRoot = true;
		ImgMediaSource->SetSequencePath(Path);
		
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

void AMediaPlayerActor::SetPlay()
{
	MediaPlayer->Play();
}

void AMediaPlayerActor::SetPause()
{
	
	MediaPlayer->Pause();
}

void AMediaPlayerActor::SetReverse()
{
	MediaPlayer->Rewind();
	FrameIterator=0;
	GetWorldTimerManager().SetTimer(TimerHandle,this,&ThisClass::SetPause,FrameRate,false,FrameRate);
}

void AMediaPlayerActor::NextSlide()
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

