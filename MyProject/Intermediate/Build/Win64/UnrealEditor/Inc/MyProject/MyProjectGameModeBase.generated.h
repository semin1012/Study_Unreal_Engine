// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectGameModeBase_generated_h
#error "MyProjectGameModeBase.generated.h already included, missing '#pragma once' in MyProjectGameModeBase.h"
#endif
#define MYPROJECT_MyProjectGameModeBase_generated_h

#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_SPARSE_DATA
#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_RPC_WRAPPERS
#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AMyProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectGameModeBase)


#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AMyProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectGameModeBase)


#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectGameModeBase(AMyProjectGameModeBase&&); \
	NO_API AMyProjectGameModeBase(const AMyProjectGameModeBase&); \
public:


#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectGameModeBase(AMyProjectGameModeBase&&); \
	NO_API AMyProjectGameModeBase(const AMyProjectGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectGameModeBase)


#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_12_PROLOG
#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_SPARSE_DATA \
	FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_INCLASS \
	FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_SPARSE_DATA \
	FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MyProjectGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_MyProjectGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
