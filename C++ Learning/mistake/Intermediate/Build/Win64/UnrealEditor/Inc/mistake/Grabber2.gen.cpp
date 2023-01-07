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
	DEFINE_FUNCTION(UGrabber2::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrabber2::execGrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Grab();
		P_NATIVE_END;
	}
	void UGrabber2::StaticRegisterNativesUGrabber2()
	{
		UClass* Class = UGrabber2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Grab", &UGrabber2::execGrab },
			{ "Release", &UGrabber2::execRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabber2_Grab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber2_Grab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grabber2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber2_Grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabber2, nullptr, "Grab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabber2_Grab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber2_Grab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabber2_Grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrabber2_Grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabber2_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber2_Release_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grabber2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber2_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabber2, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabber2_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber2_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabber2_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrabber2_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabber2);
	UClass* Z_Construct_UClass_UGrabber2_NoRegister()
	{
		return UGrabber2::StaticClass();
	}
	struct Z_Construct_UClass_UGrabber2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrabDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGrabDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabber2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_mistake,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabber2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabber2_Grab, "Grab" }, // 1494966998
		{ &Z_Construct_UFunction_UGrabber2_Release, "Release" }, // 2415822413
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber2_Statics::NewProp_MaxGrabDistance_MetaData[] = {
		{ "Category", "Grabber2" },
		{ "ModuleRelativePath", "Grabber2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber2_Statics::NewProp_MaxGrabDistance = { "MaxGrabDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber2, MaxGrabDistance), METADATA_PARAMS(Z_Construct_UClass_UGrabber2_Statics::NewProp_MaxGrabDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::NewProp_MaxGrabDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber2_Statics::NewProp_GrabRadius_MetaData[] = {
		{ "Category", "Grabber2" },
		{ "ModuleRelativePath", "Grabber2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber2_Statics::NewProp_GrabRadius = { "GrabRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber2, GrabRadius), METADATA_PARAMS(Z_Construct_UClass_UGrabber2_Statics::NewProp_GrabRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::NewProp_GrabRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber2_Statics::NewProp_HoldDistance_MetaData[] = {
		{ "Category", "Grabber2" },
		{ "ModuleRelativePath", "Grabber2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber2_Statics::NewProp_HoldDistance = { "HoldDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber2, HoldDistance), METADATA_PARAMS(Z_Construct_UClass_UGrabber2_Statics::NewProp_HoldDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::NewProp_HoldDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber2_Statics::NewProp_MaxGrabDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber2_Statics::NewProp_GrabRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber2_Statics::NewProp_HoldDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabber2_Statics::ClassParams = {
		&UGrabber2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrabber2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::PropPointers),
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
		{ Z_Construct_UClass_UGrabber2, UGrabber2::StaticClass, TEXT("UGrabber2"), &Z_Registration_Info_UClass_UGrabber2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabber2), 1586658101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mistake_Source_mistake_Grabber2_h_2907973247(TEXT("/Script/mistake"),
		Z_CompiledInDeferFile_FID_mistake_Source_mistake_Grabber2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mistake_Source_mistake_Grabber2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
