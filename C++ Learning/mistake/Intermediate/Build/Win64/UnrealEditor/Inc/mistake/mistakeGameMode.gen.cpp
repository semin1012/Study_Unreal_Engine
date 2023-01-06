// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mistake/mistakeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemistakeGameMode() {}
// Cross Module References
	MISTAKE_API UClass* Z_Construct_UClass_AmistakeGameMode_NoRegister();
	MISTAKE_API UClass* Z_Construct_UClass_AmistakeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_mistake();
// End Cross Module References
	void AmistakeGameMode::StaticRegisterNativesAmistakeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmistakeGameMode);
	UClass* Z_Construct_UClass_AmistakeGameMode_NoRegister()
	{
		return AmistakeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AmistakeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmistakeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_mistake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmistakeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "mistakeGameMode.h" },
		{ "ModuleRelativePath", "mistakeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmistakeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmistakeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AmistakeGameMode_Statics::ClassParams = {
		&AmistakeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AmistakeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AmistakeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmistakeGameMode()
	{
		if (!Z_Registration_Info_UClass_AmistakeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmistakeGameMode.OuterSingleton, Z_Construct_UClass_AmistakeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AmistakeGameMode.OuterSingleton;
	}
	template<> MISTAKE_API UClass* StaticClass<AmistakeGameMode>()
	{
		return AmistakeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmistakeGameMode);
	struct Z_CompiledInDeferFile_FID_mistake_Source_mistake_mistakeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mistake_Source_mistake_mistakeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AmistakeGameMode, AmistakeGameMode::StaticClass, TEXT("AmistakeGameMode"), &Z_Registration_Info_UClass_AmistakeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmistakeGameMode), 204846321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mistake_Source_mistake_mistakeGameMode_h_2757030762(TEXT("/Script/mistake"),
		Z_CompiledInDeferFile_FID_mistake_Source_mistake_mistakeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mistake_Source_mistake_mistakeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
