// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DeskWidget.generated.h"

class UImage;
/**
 * 
 */
UCLASS()
class VOICECHAT_API UDeskWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void Build();

	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	UImage* Image;
};
