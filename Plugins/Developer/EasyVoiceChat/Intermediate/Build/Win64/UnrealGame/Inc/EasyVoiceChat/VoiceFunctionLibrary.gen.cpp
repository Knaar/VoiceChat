// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyVoiceChat/Public/VoiceFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceFunctionLibrary() {}
// Cross Module References
	EASYVOICECHAT_API UClass* Z_Construct_UClass_UVoiceFunctionLibrary_NoRegister();
	EASYVOICECHAT_API UClass* Z_Construct_UClass_UVoiceFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EasyVoiceChat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoiceFunctionLibrary::execGetAllPawnsFromState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APawn,Z_Param_CurrentPlayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APawn*>*)Z_Param__Result=UVoiceFunctionLibrary::GetAllPawnsFromState(Z_Param_WorldContextObject,Z_Param_CurrentPlayer,Z_Param_Distance);
		P_NATIVE_END;
	}
	void UVoiceFunctionLibrary::StaticRegisterNativesUVoiceFunctionLibrary()
	{
		UClass* Class = UVoiceFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllPawnsFromState", &UVoiceFunctionLibrary::execGetAllPawnsFromState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics
	{
		struct VoiceFunctionLibrary_eventGetAllPawnsFromState_Parms
		{
			UObject* WorldContextObject;
			APawn* CurrentPlayer;
			float Distance;
			TArray<APawn*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPlayer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceFunctionLibrary_eventGetAllPawnsFromState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_CurrentPlayer = { "CurrentPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceFunctionLibrary_eventGetAllPawnsFromState_Parms, CurrentPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceFunctionLibrary_eventGetAllPawnsFromState_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceFunctionLibrary_eventGetAllPawnsFromState_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_CurrentPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "Comment", "/* Get player pawns from the game state. Optionally filter by a distance from the current player */" },
		{ "CPP_Default_Distance", "0.000000" },
		{ "ModuleRelativePath", "Public/VoiceFunctionLibrary.h" },
		{ "ToolTip", "Get player pawns from the game state. Optionally filter by a distance from the current player" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceFunctionLibrary, nullptr, "GetAllPawnsFromState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::VoiceFunctionLibrary_eventGetAllPawnsFromState_Parms), Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceFunctionLibrary);
	UClass* Z_Construct_UClass_UVoiceFunctionLibrary_NoRegister()
	{
		return UVoiceFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyVoiceChat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoiceFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoiceFunctionLibrary_GetAllPawnsFromState, "GetAllPawnsFromState" }, // 4125955903
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoiceFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VoiceFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceFunctionLibrary_Statics::ClassParams = {
		&UVoiceFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVoiceFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVoiceFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceFunctionLibrary.OuterSingleton;
	}
	template<> EASYVOICECHAT_API UClass* StaticClass<UVoiceFunctionLibrary>()
	{
		return UVoiceFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceFunctionLibrary, UVoiceFunctionLibrary::StaticClass, TEXT("UVoiceFunctionLibrary"), &Z_Registration_Info_UClass_UVoiceFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceFunctionLibrary), 134434810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_2717457269(TEXT("/Script/EasyVoiceChat"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
