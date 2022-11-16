// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APawn;
#ifdef EASYVOICECHAT_VoiceFunctionLibrary_generated_h
#error "VoiceFunctionLibrary.generated.h already included, missing '#pragma once' in VoiceFunctionLibrary.h"
#endif
#define EASYVOICECHAT_VoiceFunctionLibrary_generated_h

#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_SPARSE_DATA
#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllPawnsFromState);


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllPawnsFromState);


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVoiceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoiceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoiceFunctionLibrary)


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVoiceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoiceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyVoiceChat"), NO_API) \
	DECLARE_SERIALIZER(UVoiceFunctionLibrary)


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceFunctionLibrary(UVoiceFunctionLibrary&&); \
	NO_API UVoiceFunctionLibrary(const UVoiceFunctionLibrary&); \
public:


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceFunctionLibrary(UVoiceFunctionLibrary&&); \
	NO_API UVoiceFunctionLibrary(const UVoiceFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceFunctionLibrary)


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_9_PROLOG
#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_SPARSE_DATA \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_RPC_WRAPPERS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_INCLASS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_SPARSE_DATA \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYVOICECHAT_API UClass* StaticClass<class UVoiceFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoiceChat_Plugins_Developer_EasyVoiceChat_Source_EasyVoiceChat_Public_VoiceFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
