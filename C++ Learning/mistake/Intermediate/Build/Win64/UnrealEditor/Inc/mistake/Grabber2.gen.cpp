// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mistake/Grabber2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber2() {}
// Cross Module References
	MISTAKE_API UClass* Z_Construct_UClass_UGrabber2_NoRegister();
	MISTAKE_API UClass* Z_Construct_UClass_UGrabber2();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_mistake();
// End Cross Module References
	void UGrabber2::StaticRegisterNativesUGrabber2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabber2);
	UClass* Z_Construct_UClass_UGrabber2_NoRegister()
	{
		return UGrabber2::StaticClass();
	}
	struct Z_Construct_UClass_UGrabber2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabber2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_mistake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grabber2.h" },
		{ "ModuleRelativePath", "Grabber2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabber2_Statics::ClassParams = {
		&UGrabber2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabber2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabber2()
	{
		if (!Z_Registration_Info_UClass_UGrabber2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabber2.OuterSingleton, Z_Construct_UClass_UGrabber2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrabber2.OuterSingleton;
	}
	template<> MISTAKE_API UClass* StaticClass<UGrabber2>()
	{
		return UGrabber2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber2);
	struct Z_CompiledInDeferFile_FID_mistake_Source_mistake_Grabber2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mistake_Source_mistake_Grabber2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrabber2, UGrabber2::StaticClass, TEXT("UGrabber2"), &Z_Registration_Info_UClass_UGrabber2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabber2), 2254892913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mistake_Source_mistake_Grabber2_h_3716918155(TEXT("/Script/mistake"),
		Z_CompiledInDeferFile_FID_mistake_Source_mistake_Grabber2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mistake_Source_mistake_Grabber2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
