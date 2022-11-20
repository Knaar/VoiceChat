// Fill out your copyright notice in the Description page of Project Settings.


#include "DeskWidget.h"

#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#include "Components/Image.h"

void UDeskWidget::Build()
{
	FString Path;

	IDesktopPlatform* Platform = FDesktopPlatformModule::Get();
	if (Platform)
	{
		auto* ParentHandle = FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr);

		const FString FileTypes = "All Files (*.PNG, *.JPG, *.MP4)|*.PNG;*.JPG;*.MP4|"
			"Video Files (*.MP4)|*.MP4|"
			"Image Files (*.PNG, *.JPG)|*.PNG;*.JPG";

		TArray<FString> OutFiles;

		Platform->OpenFileDialog(ParentHandle, "Choose media", "", "", FileTypes, 0, OutFiles);

		if (OutFiles.Num() > 0)
		{
			Path = OutFiles[0];
		}
		//Image->SetBrush()
	}
}
