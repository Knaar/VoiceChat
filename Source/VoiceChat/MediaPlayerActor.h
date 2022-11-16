// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MediaPlayerActor.generated.h"
class UMediaPlayer;

UCLASS()
class VOICECHAT_API AMediaPlayerActor : public AActor
{
	GENERATED_BODY()

public:

	AMediaPlayerActor();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UMediaPlayer* MediaPlayer;

	void MakeVideoPlayer();


};
