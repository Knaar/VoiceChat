// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef EASYVOICECHAT_VoipManagerComponent_generated_h
#error "VoipManagerComponent.generated.h already included, missing '#pragma once' in VoipManagerComponent.h"
#endif
#define EASYVOICECHAT_VoipManagerComponent_generated_h

#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_11_DELEGATE \
struct _Script_EasyVoiceChat_eventVoiceGenerated_Parms \
{ \
	TArray<uint8> VoiceData; \
	float MicLevel; \
}; \
static inline void FVoiceGenerated_DelegateWrapper(const FMulticastScriptDelegate& VoiceGenerated, TArray<uint8> const& VoiceData, const float MicLevel) \
{ \
	_Script_EasyVoiceChat_eventVoiceGenerated_Parms Parms; \
	Parms.VoiceData=VoiceData; \
	Parms.MicLevel=MicLevel; \
	VoiceGenerated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_12_DELEGATE \
static inline void FPlayerStartTalking_DelegateWrapper(const FMulticastScriptDelegate& PlayerStartTalking) \
{ \
	PlayerStartTalking.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_13_DELEGATE \
static inline void FPlayerStopTalking_DelegateWrapper(const FMulticastScriptDelegate& PlayerStopTalking) \
{ \
	PlayerStopTalking.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_SPARSE_DATA
#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeAudioCaptureDevice); \
	DECLARE_FUNCTION(execGetCaptureDevices); \
	DECLARE_FUNCTION(execInitVoice);


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeAudioCaptureDevice); \
	DECLARE_FUNCTION(execGetCaptureDevices); \
	DECLARE_FUNCTION(execInitVoice);


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_EVENT_PARMS \
	struct VoipManagerComponent_eventOnVoiceGeneratedBP_Parms \
	{ \
		TArray<uint8> VoiceBuffer; \
		float MicLevel; \
	};


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_CALLBACK_WRAPPERS
#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoipManagerComponent(); \
	friend struct Z_Construct_UClass_UVoipManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoipManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoipManagerComponent)


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVoipManagerComponent(); \
	friend struct Z_Construct_UClass_UVoipManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoipManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoipManagerComponent)


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoipManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoipManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoipManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoipManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoipManagerComponent(UVoipManagerComponent&&); \
	NO_API UVoipManagerComponent(const UVoipManagerComponent&); \
public:


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoipManagerComponent(UVoipManagerComponent&&); \
	NO_API UVoipManagerComponent(const UVoipManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoipManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoipManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoipManagerComponent)


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_21_PROLOG \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_EVENT_PARMS


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_SPARSE_DATA \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_RPC_WRAPPERS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_CALLBACK_WRAPPERS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_INCLASS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_SPARSE_DATA \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_CALLBACK_WRAPPERS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYVOICECHAT_API UClass* StaticClass<class UVoipManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoipManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
