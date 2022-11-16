// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyVoiceChat/Public/VoipAudioComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoipAudioComponent() {}
// Cross Module References
	EASYVOICECHAT_API UClass* Z_Construct_UClass_UVoipAudioComponent_NoRegister();
	EASYVOICECHAT_API UClass* Z_Construct_UClass_UVoipAudioComponent();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UVoipListenerSynthComponent();
	UPackage* Z_Construct_UPackage__Script_EasyVoiceChat();
// End Cross Module References
	DEFINE_FUNCTION(UVoipAudioComponent::execPlayVoiceData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedVoiceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVoiceData(Z_Param_Out_CompressedVoiceData);
		P_NATIVE_END;
	}
	void UVoipAudioComponent::StaticRegisterNativesUVoipAudioComponent()
	{
		UClass* Class = UVoipAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayVoiceData", &UVoipAudioComponent::execPlayVoiceData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics
	{
		struct VoipAudioComponent_eventPlayVoiceData_Parms
		{
			TArray<uint8> CompressedVoiceData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedVoiceData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedVoiceData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompressedVoiceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::NewProp_CompressedVoiceData_Inner = { "CompressedVoiceData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::NewProp_CompressedVoiceData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::NewProp_CompressedVoiceData = { "CompressedVoiceData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoipAudioComponent_eventPlayVoiceData_Parms, CompressedVoiceData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::NewProp_CompressedVoiceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::NewProp_CompressedVoiceData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::NewProp_CompressedVoiceData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::NewProp_CompressedVoiceData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voip Audio" },
		{ "Comment", "/* Plays compressed voice data */" },
		{ "ModuleRelativePath", "Public/VoipAudioComponent.h" },
		{ "ToolTip", "Plays compressed voice data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoipAudioComponent, nullptr, "PlayVoiceData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::VoipAudioComponent_eventPlayVoiceData_Parms), Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoipAudioComponent);
	UClass* Z_Construct_UClass_UVoipAudioComponent_NoRegister()
	{
		return UVoipAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoipAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoipAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoipListenerSynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyVoiceChat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoipAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoipAudioComponent_PlayVoiceData, "PlayVoiceData" }, // 2840929205
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoipAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n  Decodes and plays compressed voice data passed over the network\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "VoipAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoipAudioComponent.h" },
		{ "ToolTip", "Decodes and plays compressed voice data passed over the network" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoipAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoipAudioComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoipAudioComponent_Statics::ClassParams = {
		&UVoipAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoipAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoipAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoipAudioComponent()
	{
		if (!Z_Registration_Info_UClass_UVoipAudioComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoipAudioComponent.OuterSingleton, Z_Construct_UClass_UVoipAudioComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoipAudioComponent.OuterSingleton;
	}
	template<> EASYVOICECHAT_API UClass* StaticClass<UVoipAudioComponent>()
	{
		return UVoipAudioComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoipAudioComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipAudioComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipAudioComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoipAudioComponent, UVoipAudioComponent::StaticClass, TEXT("UVoipAudioComponent"), &Z_Registration_Info_UClass_UVoipAudioComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoipAudioComponent), 2297647423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipAudioComponent_h_3297448318(TEXT("/Script/EasyVoiceChat"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipAudioComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipAudioComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
