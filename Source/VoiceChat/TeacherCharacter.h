// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "TeacherCharacter.generated.h"

class UMediaPlayer;
//class UNiagaraComponent;
//class UNiagaraSystem;
//class UNiagaraFunctionLibrary;

UCLASS()
class VOICECHAT_API ATeacherCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATeacherCharacter();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	UMediaPlayer* MediaPlayer;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	FString AdressPath;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	float FrameRate=0.03f;

	int32 FrameIterator=0;

	UFUNCTION(BlueprintCallable)
	void MakeVideoPlayer();

	UFUNCTION(BlueprintCallable)
	void SetPlay();
	
	UFUNCTION(BlueprintCallable)
	void SetPause();

	UFUNCTION(BlueprintCallable)
	void SetReverse();

	UFUNCTION(BlueprintCallable)
	void NextSlide();

	FTimerHandle TimerHandle;

	//VFX

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="TraceVFX")
	bool Indexing=false;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="TraceVFX")
	UNiagaraSystem* TraceVFX;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="TraceVFX")
	UNiagaraSystem* SphereVFX;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="TraceVFX")
	FName SocketName="RightIndexSocket";

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="TraceVFX")
	float TraceLenght=5000.0f;

	UPROPERTY(VisibleDefaultsOnly,Category="TraceVFX")
	FString TraceTargetName="TraceTarget";

	void SpawnTraceVFX(const FVector &StartTrace, const FVector &EndTrace);
	
	void SpawnSphereVFX(const FVector &PlaceToSphere);
	
};
