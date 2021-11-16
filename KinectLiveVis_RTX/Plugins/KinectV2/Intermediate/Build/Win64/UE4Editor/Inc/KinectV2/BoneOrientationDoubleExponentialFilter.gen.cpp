// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KinectV2/Classes/BoneOrientationDoubleExponentialFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneOrientationDoubleExponentialFilter() {}
// Cross Module References
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter();
	UPackage* Z_Construct_UPackage__Script_KinectV2();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FTransformSmoothParameters();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FFilterDoubleExponentialData();
// End Cross Module References
class UScriptStruct* FBoneOrientationDoubleExponentialFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter, Z_Construct_UPackage__Script_KinectV2(), TEXT("BoneOrientationDoubleExponentialFilter"), sizeof(FBoneOrientationDoubleExponentialFilter), Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Hash());
	}
	return Singleton;
}
template<> KINECTV2_API UScriptStruct* StaticStruct<FBoneOrientationDoubleExponentialFilter>()
{
	return FBoneOrientationDoubleExponentialFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneOrientationDoubleExponentialFilter(FBoneOrientationDoubleExponentialFilter::StaticStruct, TEXT("/Script/KinectV2"), TEXT("BoneOrientationDoubleExponentialFilter"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFBoneOrientationDoubleExponentialFilter
{
	FScriptStruct_KinectV2_StaticRegisterNativesFBoneOrientationDoubleExponentialFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneOrientationDoubleExponentialFilter")),new UScriptStruct::TCppStructOps<FBoneOrientationDoubleExponentialFilter>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFBoneOrientationDoubleExponentialFilter;
	struct Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneOrientationDoubleExponentialFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::NewProp_SmoothParameters_MetaData[] = {
		{ "Category", "Filter|Parameters" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::NewProp_SmoothParameters = { "SmoothParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneOrientationDoubleExponentialFilter, SmoothParameters), Z_Construct_UScriptStruct_FTransformSmoothParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::NewProp_SmoothParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::NewProp_SmoothParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::NewProp_SmoothParameters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
		nullptr,
		&NewStructOps,
		"BoneOrientationDoubleExponentialFilter",
		sizeof(FBoneOrientationDoubleExponentialFilter),
		alignof(FBoneOrientationDoubleExponentialFilter),
		Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneOrientationDoubleExponentialFilter"), sizeof(FBoneOrientationDoubleExponentialFilter), Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter_Hash() { return 1580744242U; }
class UScriptStruct* FTransformSmoothParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformSmoothParameters, Z_Construct_UPackage__Script_KinectV2(), TEXT("TransformSmoothParameters"), sizeof(FTransformSmoothParameters), Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_Hash());
	}
	return Singleton;
}
template<> KINECTV2_API UScriptStruct* StaticStruct<FTransformSmoothParameters>()
{
	return FTransformSmoothParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformSmoothParameters(FTransformSmoothParameters::StaticStruct, TEXT("/Script/KinectV2"), TEXT("TransformSmoothParameters"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFTransformSmoothParameters
{
	FScriptStruct_KinectV2_StaticRegisterNativesFTransformSmoothParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformSmoothParameters")),new UScriptStruct::TCppStructOps<FTransformSmoothParameters>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFTransformSmoothParameters;
	struct Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Correction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Correction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JitterRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JitterRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prediction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Prediction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Smoothing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Smoothing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformSmoothParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Correction_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Correction = { "Correction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformSmoothParameters, Correction), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Correction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Correction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_JitterRadius_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// How much to correct back from prediction.  Can make things springy\n" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
		{ "ToolTip", "How much to correct back from prediction.  Can make things springy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_JitterRadius = { "JitterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformSmoothParameters, JitterRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_JitterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_JitterRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_MaxDeviationRadius_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Size of the radius where jitter is removed. Can do too much smoothing when too high\n" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
		{ "ToolTip", "Size of the radius where jitter is removed. Can do too much smoothing when too high" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_MaxDeviationRadius = { "MaxDeviationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformSmoothParameters, MaxDeviationRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_MaxDeviationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_MaxDeviationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Prediction_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Size of the max prediction radius Can snap back to noisy data when too high\n" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
		{ "ToolTip", "Size of the max prediction radius Can snap back to noisy data when too high" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Prediction = { "Prediction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformSmoothParameters, Prediction), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Prediction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Prediction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Smoothing_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Amount of prediction into the future to use. Can over shoot when too high\n" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
		{ "ToolTip", "Amount of prediction into the future to use. Can over shoot when too high" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformSmoothParameters, Smoothing), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Smoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Smoothing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Correction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_JitterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_MaxDeviationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Prediction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::NewProp_Smoothing,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
		nullptr,
		&NewStructOps,
		"TransformSmoothParameters",
		sizeof(FTransformSmoothParameters),
		alignof(FTransformSmoothParameters),
		Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformSmoothParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformSmoothParameters"), sizeof(FTransformSmoothParameters), Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformSmoothParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformSmoothParameters_Hash() { return 3089732792U; }
class UScriptStruct* FFilterDoubleExponentialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterDoubleExponentialData, Z_Construct_UPackage__Script_KinectV2(), TEXT("FilterDoubleExponentialData"), sizeof(FFilterDoubleExponentialData), Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Hash());
	}
	return Singleton;
}
template<> KINECTV2_API UScriptStruct* StaticStruct<FFilterDoubleExponentialData>()
{
	return FFilterDoubleExponentialData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFilterDoubleExponentialData(FFilterDoubleExponentialData::StaticStruct, TEXT("/Script/KinectV2"), TEXT("FilterDoubleExponentialData"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFFilterDoubleExponentialData
{
	FScriptStruct_KinectV2_StaticRegisterNativesFFilterDoubleExponentialData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FilterDoubleExponentialData")),new UScriptStruct::TCppStructOps<FFilterDoubleExponentialData>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFFilterDoubleExponentialData;
	struct Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BoneOrientationDoubleExponentialFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterDoubleExponentialData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
		nullptr,
		&NewStructOps,
		"FilterDoubleExponentialData",
		sizeof(FFilterDoubleExponentialData),
		alignof(FFilterDoubleExponentialData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilterDoubleExponentialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FilterDoubleExponentialData"), sizeof(FFilterDoubleExponentialData), Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFilterDoubleExponentialData_Hash() { return 1937861266U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
