// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ShooterCharacter2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter2() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter2_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter2();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void AShooterCharacter2::StaticRegisterNativesAShooterCharacter2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterCharacter2);
	UClass* Z_Construct_UClass_AShooterCharacter2_NoRegister()
	{
		return AShooterCharacter2::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter2_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter2.h" },
		{ "ModuleRelativePath", "ShooterCharacter2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter2_Statics::ClassParams = {
		&AShooterCharacter2::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterCharacter2()
	{
		if (!Z_Registration_Info_UClass_AShooterCharacter2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter2.OuterSingleton, Z_Construct_UClass_AShooterCharacter2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterCharacter2.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AShooterCharacter2>()
	{
		return AShooterCharacter2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter2);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter2, AShooterCharacter2::StaticClass, TEXT("AShooterCharacter2"), &Z_Registration_Info_UClass_AShooterCharacter2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter2), 3463387752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter2_h_2884902348(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
