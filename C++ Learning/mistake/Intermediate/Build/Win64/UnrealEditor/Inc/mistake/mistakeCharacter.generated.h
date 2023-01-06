// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MISTAKE_mistakeCharacter_generated_h
#error "mistakeCharacter.generated.h already included, missing '#pragma once' in mistakeCharacter.h"
#endif
#define MISTAKE_mistakeCharacter_generated_h

#define FID_mistake_Source_mistake_mistakeCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_mistake_Source_mistake_mistakeCharacter_h_23_SPARSE_DATA
#define FID_mistake_Source_mistake_mistakeCharacter_h_23_RPC_WRAPPERS
#define FID_mistake_Source_mistake_mistakeCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_mistake_Source_mistake_mistakeCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmistakeCharacter(); \
	friend struct Z_Construct_UClass_AmistakeCharacter_Statics; \
public: \
	DECLARE_CLASS(AmistakeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/mistake"), NO_API) \
	DECLARE_SERIALIZER(AmistakeCharacter)


#define FID_mistake_Source_mistake_mistakeCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAmistakeCharacter(); \
	friend struct Z_Construct_UClass_AmistakeCharacter_Statics; \
public: \
	DECLARE_CLASS(AmistakeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/mistake"), NO_API) \
	DECLARE_SERIALIZER(AmistakeCharacter)


#define FID_mistake_Source_mistake_mistakeCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmistakeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmistakeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmistakeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmistakeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmistakeCharacter(AmistakeCharacter&&); \
	NO_API AmistakeCharacter(const AmistakeCharacter&); \
public:


#define FID_mistake_Source_mistake_mistakeCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmistakeCharacter(AmistakeCharacter&&); \
	NO_API AmistakeCharacter(const AmistakeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmistakeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmistakeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmistakeCharacter)


#define FID_mistake_Source_mistake_mistakeCharacter_h_20_PROLOG
#define FID_mistake_Source_mistake_mistakeCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mistake_Source_mistake_mistakeCharacter_h_23_SPARSE_DATA \
	FID_mistake_Source_mistake_mistakeCharacter_h_23_RPC_WRAPPERS \
	FID_mistake_Source_mistake_mistakeCharacter_h_23_INCLASS \
	FID_mistake_Source_mistake_mistakeCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_mistake_Source_mistake_mistakeCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mistake_Source_mistake_mistakeCharacter_h_23_SPARSE_DATA \
	FID_mistake_Source_mistake_mistakeCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_mistake_Source_mistake_mistakeCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_mistake_Source_mistake_mistakeCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MISTAKE_API UClass* StaticClass<class AmistakeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mistake_Source_mistake_mistakeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
