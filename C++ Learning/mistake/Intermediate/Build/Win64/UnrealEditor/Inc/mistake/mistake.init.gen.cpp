// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemistake_init() {}
	MISTAKE_API UFunction* Z_Construct_UDelegateFunction_mistake_OnPickUp__DelegateSignature();
	MISTAKE_API UFunction* Z_Construct_UDelegateFunction_mistake_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_mistake;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_mistake()
	{
		if (!Z_Registration_Info_UPackage__Script_mistake.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_mistake_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_mistake_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/mistake",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE7DA7883,
				0xF792F014,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_mistake.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_mistake.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_mistake(Z_Construct_UPackage__Script_mistake, TEXT("/Script/mistake"), Z_Registration_Info_UPackage__Script_mistake, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE7DA7883, 0xF792F014));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
