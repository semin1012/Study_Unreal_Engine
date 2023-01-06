// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MISTAKE_mistakeProjectile_generated_h
#error "mistakeProjectile.generated.h already included, missing '#pragma once' in mistakeProjectile.h"
#endif
#define MISTAKE_mistakeProjectile_generated_h

#define FID_mistake_Source_mistake_mistakeProjectile_h_15_SPARSE_DATA
#define FID_mistake_Source_mistake_mistakeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_mistake_Source_mistake_mistakeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_mistake_Source_mistake_mistakeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmistakeProjectile(); \
	friend struct Z_Construct_UClass_AmistakeProjectile_Statics; \
public: \
	DECLARE_CLASS(AmistakeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/mistake"), NO_API) \
	DECLARE_SERIALIZER(AmistakeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_mistake_Source_mistake_mistakeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAmistakeProjectile(); \
	friend struct Z_Construct_UClass_AmistakeProjectile_Statics; \
public: \
	DECLARE_CLASS(AmistakeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/mistake"), NO_API) \
	DECLARE_SERIALIZER(AmistakeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_mistake_Source_mistake_mistakeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmistakeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmistakeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmistakeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmistakeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmistakeProjectile(AmistakeProjectile&&); \
	NO_API AmistakeProjectile(const AmistakeProjectile&); \
public:


#define FID_mistake_Source_mistake_mistakeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmistakeProjectile(AmistakeProjectile&&); \
	NO_API AmistakeProjectile(const AmistakeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmistakeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmistakeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmistakeProjectile)


#define FID_mistake_Source_mistake_mistakeProjectile_h_12_PROLOG
#define FID_mistake_Source_mistake_mistakeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mistake_Source_mistake_mistakeProjectile_h_15_SPARSE_DATA \
	FID_mistake_Source_mistake_mistakeProjectile_h_15_RPC_WRAPPERS \
	FID_mistake_Source_mistake_mistakeProjectile_h_15_INCLASS \
	FID_mistake_Source_mistake_mistakeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_mistake_Source_mistake_mistakeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mistake_Source_mistake_mistakeProjectile_h_15_SPARSE_DATA \
	FID_mistake_Source_mistake_mistakeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_mistake_Source_mistake_mistakeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_mistake_Source_mistake_mistakeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MISTAKE_API UClass* StaticClass<class AmistakeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mistake_Source_mistake_mistakeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
