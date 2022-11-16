// Copyright 2019-2022 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Misc/MediaBlueprintFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "VoipManagerComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVoiceGenerated, const TArray<uint8>&, VoiceData, const float, MicLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerStartTalking);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerStopTalking);

class AController;


/*
 Generates voice data and sends it to blueprints for processing
*/
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EASYVOICECHAT_API UVoipManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UVoipManagerComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/* Call this to start the voice capture. Ensures voice only starts on a local player machine 
	   @return true if capture started successfully
	*/
	UFUNCTION(BlueprintCallable, Category = "Voip Manager")
		bool InitVoice(AController* Controller);

	/* Returns a list of available audio capture devices */
	UFUNCTION(BlueprintPure, Category = "Voip Manager")
		TArray<FString> GetCaptureDevices();

	/* Changes the audio capture device to the one provided. Leave blank to change to the platform default.
	*  @return true if the capture device was changed successfully
	*/
	UFUNCTION(BlueprintCallable, Category = "Voip Manager")
		bool ChangeAudioCaptureDevice(FString NewDeviceName);

	/* Called when voice data is generated, passes an array of compressed voice data to blueprints. Use on inherited components */
	UFUNCTION(BlueprintImplementableEvent, Category = "Voip Manager")
		void OnVoiceGeneratedBP(const TArray<uint8> &VoiceBuffer, const float MicLevel);

	/* Called on the client when the player starts talking */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic, Category = "Voip Manager")
		void OnPlayerStartTalking();

	/* Called on the client when the player stops talking */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic, Category = "Voip Manager")
		void OnPlayerStopTalking();

	/* Delegate called when voice is generated */
	UPROPERTY(BlueprintAssignable, Category = "VOIP")
		FVoiceGenerated VoiceGenerated;

	/* Called when the player starts talking */
	UPROPERTY(BlueprintAssignable, Category = "VOIP")
		FPlayerStartTalking PlayerTalking;

	/* Called when the player stops talking */
	UPROPERTY(BlueprintAssignable, Category = "VOIP")
		FPlayerStopTalking PlayerStopTalking;


private:

	/* Capture interfaces */
	TSharedPtr<class IVoiceCapture> VoiceCapture;
	TSharedPtr<class IVoiceEncoder> VoiceEncoder;
	TSharedPtr<class IVoiceDecoder> VoiceDecoder;

	/* Voice buffers */
	TArray<uint8> DecompressedVoiceBuffer;
	TArray<uint8> CompressedVoiceBuffer;

	/* Internally used buffer which is adjusted to the size of the encoded, and is passed to blueprints */
	TArray<uint8> OutCompressedVoiceBuffer;

	/* Used internally for recieving voice data */
	TArray<uint8> DecodedVoiceBuffer;

	/* Remainder of voice data carried over if the encode buffer has leftovers */
	TArray<uint8> VoiceRemainder;

	/* The size of the remaining voice buffer */
	uint32 VoiceRemainderSize;

	/* The size of the compressed voice buffer */
	uint32 CompressedBytesAvailable;

	/* The time in seconds this voip was last transmitted */
	float LastSeen = 0.0f;

	/* The threshold in which Stop Talking event will be called after transmission to compensate for buffering */
	UPROPERTY(EditDefaultsOnly, Category="VOIP")
		float StopTalkingThreshold = 1.0f;

	/* Whether to automatically set the below console variables. Disable if you want to change these variables globally, instead of per component */
	UPROPERTY(EditDefaultsOnly, Category = "VOIP")
		bool bAutoSetConsoleVariables = true;
	
	/* Transmits silence when below this threshold. When set to the same value as Noise Gate Threshold it has no effect */
	UPROPERTY(EditDefaultsOnly, Category = "VOIP", meta = (ClampMin = 0, ClampMax = 1))
		float SilenceDetectionThreshold = 0.01f;

	/* Stops transmitting audio when it falls below this value. Decrease if the voice cuts in and out */
	UPROPERTY(EditDefaultsOnly, Category = "VOIP", meta = (ClampMin = 0, ClampMax = 1))
		float NoiseGateThreshold = 0.01f;

	/* The amount of time that the voice playback components have to buffer the audio being played back
	Decrease if you want to reduce latency 
	Increase if you experience underruns (audio stuttering or cutting out prematurely) */
	UPROPERTY(EditDefaultsOnly, Category = "VOIP")
		float VoiceBufferDelay = 0.5f;

	/* Set to true whenever the player is talking */
	bool bVoiceActive;
};
