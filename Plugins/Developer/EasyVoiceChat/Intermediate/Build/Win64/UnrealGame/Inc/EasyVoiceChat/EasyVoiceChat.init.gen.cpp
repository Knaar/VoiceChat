// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyVoiceChat_init() {}
	EASYVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EasyVoiceChat_PlayerStartTalking__DelegateSignature();
	EASYVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EasyVoiceChat_PlayerStopTalking__DelegateSignature();
	EASYVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EasyVoiceChat_VoiceGenerated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EasyVoiceChat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EasyVoiceChat()
	{
		if (!Z_Registration_Info_UPackage__Script_EasyVoiceChat.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyVoiceChat_PlayerStartTalking__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyVoiceChat_PlayerStopTalking__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyVoiceChat_VoiceGenerated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyVoiceChat",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x27FF9628,
				0xCF27B9FC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EasyVoiceChat.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EasyVoiceChat.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EasyVoiceChat(Z_Construct_UPackage__Script_EasyVoiceChat, TEXT("/Script/EasyVoiceChat"), Z_Registration_Info_UPackage__Script_EasyVoiceChat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x27FF9628, 0xCF27B9FC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
