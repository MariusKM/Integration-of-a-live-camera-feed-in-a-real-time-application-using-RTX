// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KinectV2/Classes/KinectAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectAnimInstance() {}
// Cross Module References
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment();
	UPackage* Z_Construct_UPackage__Script_KinectV2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectAnimInstance_NoRegister();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBody();
// End Cross Module References
class UScriptStruct* FKinectBoneRetargetAdjustment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment, Z_Construct_UPackage__Script_KinectV2(), TEXT("KinectBoneRetargetAdjustment"), sizeof(FKinectBoneRetargetAdjustment), Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Hash());
	}
	return Singleton;
}
template<> KINECTV2_API UScriptStruct* StaticStruct<FKinectBoneRetargetAdjustment>()
{
	return FKinectBoneRetargetAdjustment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKinectBoneRetargetAdjustment(FKinectBoneRetargetAdjustment::StaticStruct, TEXT("/Script/KinectV2"), TEXT("KinectBoneRetargetAdjustment"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFKinectBoneRetargetAdjustment
{
	FScriptStruct_KinectV2_StaticRegisterNativesFKinectBoneRetargetAdjustment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KinectBoneRetargetAdjustment")),new UScriptStruct::TCppStructOps<FKinectBoneRetargetAdjustment>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFKinectBoneRetargetAdjustment;
	struct Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDirAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneDirAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNormalAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneNormalAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertDir_MetaData[];
#endif
		static void NewProp_bInvertDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertNormal_MetaData[];
#endif
		static void NewProp_bInvertNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDirAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneDirAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNormalAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneNormalAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneBinormalAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneBinormalAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugDraw_MetaData[];
#endif
		static void NewProp_bDebugDraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinectBoneRetargetAdjustment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAdjustment_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAdjustment = { "BoneDirAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneDirAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAdjustment_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAdjustment = { "BoneNormalAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneNormalAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertDir_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertDir_SetBit(void* Obj)
	{
		((FKinectBoneRetargetAdjustment*)Obj)->bInvertDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertDir = { "bInvertDir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKinectBoneRetargetAdjustment), &Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertDir_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertNormal_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertNormal_SetBit(void* Obj)
	{
		((FKinectBoneRetargetAdjustment*)Obj)->bInvertNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertNormal = { "bInvertNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKinectBoneRetargetAdjustment), &Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertNormal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAxis_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAxis = { "BoneDirAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneDirAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAxis_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAxis = { "BoneNormalAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneNormalAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneBinormalAxis_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneBinormalAxis = { "BoneBinormalAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBoneRetargetAdjustment, BoneBinormalAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneBinormalAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneBinormalAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bDebugDraw_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
	{
		((FKinectBoneRetargetAdjustment*)Obj)->bDebugDraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKinectBoneRetargetAdjustment), &Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bDebugDraw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bInvertNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneDirAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneNormalAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_BoneBinormalAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::NewProp_bDebugDraw,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
		nullptr,
		&NewStructOps,
		"KinectBoneRetargetAdjustment",
		sizeof(FKinectBoneRetargetAdjustment),
		alignof(FKinectBoneRetargetAdjustment),
		Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KinectBoneRetargetAdjustment"), sizeof(FKinectBoneRetargetAdjustment), Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Hash() { return 646144521U; }
	DEFINE_FUNCTION(UKinectAnimInstance::execRemoveBoneOverrideByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBoneOverrideByName(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectAnimInstance::execResetOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectAnimInstance::execSetOverrideEnabled)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverrideEnabled(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectAnimInstance::execOverrideBoneRotationByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FRotator,Z_Param_BoneBoneRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideBoneRotationByName(Z_Param_BoneName,Z_Param_BoneBoneRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectAnimInstance::execOnKinectBodyEvent)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_KinectPlayer);
		P_GET_STRUCT_REF(FBody,Z_Param_Out_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKinectBodyEvent(EAutoReceiveInput::Type(Z_Param_KinectPlayer),Z_Param_Out_Skeleton);
		P_NATIVE_END;
	}
	void UKinectAnimInstance::StaticRegisterNativesUKinectAnimInstance()
	{
		UClass* Class = UKinectAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKinectBodyEvent", &UKinectAnimInstance::execOnKinectBodyEvent },
			{ "OverrideBoneRotationByName", &UKinectAnimInstance::execOverrideBoneRotationByName },
			{ "RemoveBoneOverrideByName", &UKinectAnimInstance::execRemoveBoneOverrideByName },
			{ "ResetOverride", &UKinectAnimInstance::execResetOverride },
			{ "SetOverrideEnabled", &UKinectAnimInstance::execSetOverrideEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics
	{
		struct KinectAnimInstance_eventOnKinectBodyEvent_Parms
		{
			TEnumAsByte<EAutoReceiveInput::Type> KinectPlayer;
			FBody Skeleton;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::NewProp_KinectPlayer = { "KinectPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectAnimInstance_eventOnKinectBodyEvent_Parms, KinectPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::NewProp_Skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectAnimInstance_eventOnKinectBodyEvent_Parms, Skeleton), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::NewProp_KinectPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::NewProp_Skeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Executes the kinect body event action.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09KinectPlayer\x09The kinect player.\n\x09\x09 * @param\x09Skeleton\x09\x09The skeleton.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "Executes the kinect body event action.\n\n@author      Leon Rosengarten\n\n@param       KinectPlayer    The kinect player.\n@param       Skeleton                The skeleton." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, nullptr, "OnKinectBodyEvent", nullptr, nullptr, sizeof(KinectAnimInstance_eventOnKinectBodyEvent_Parms), Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics
	{
		struct KinectAnimInstance_eventOverrideBoneRotationByName_Parms
		{
			FName BoneName;
			FRotator BoneBoneRotation;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneBoneRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectAnimInstance_eventOverrideBoneRotationByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::NewProp_BoneBoneRotation = { "BoneBoneRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectAnimInstance_eventOverrideBoneRotationByName_Parms, BoneBoneRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::NewProp_BoneBoneRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Override bone rotation by name.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09""BoneName\x09\x09\x09Name of the bone.\n\x09\x09 * @param\x09""BoneBoneRotation\x09The bone rotation.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "Override bone rotation by name.\n\n@author      Leon Rosengarten\n\n@param       BoneName                        Name of the bone.\n@param       BoneBoneRotation        The bone rotation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, nullptr, "OverrideBoneRotationByName", nullptr, nullptr, sizeof(KinectAnimInstance_eventOverrideBoneRotationByName_Parms), Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics
	{
		struct KinectAnimInstance_eventRemoveBoneOverrideByName_Parms
		{
			FName BoneName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectAnimInstance_eventRemoveBoneOverrideByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Removes the bone override by name described by BoneName.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09""BoneName\x09Name of the bone.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "Removes the bone override by name described by BoneName.\n\n@author      Leon Rosengarten\n\n@param       BoneName        Name of the bone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, nullptr, "RemoveBoneOverrideByName", nullptr, nullptr, sizeof(KinectAnimInstance_eventRemoveBoneOverrideByName_Parms), Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectAnimInstance_ResetOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_ResetOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Resets the override.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "Resets the override.\n\n@author      Leon Rosengarten" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectAnimInstance_ResetOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, nullptr, "ResetOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_ResetOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_ResetOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_ResetOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectAnimInstance_ResetOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics
	{
		struct KinectAnimInstance_eventSetOverrideEnabled_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((KinectAnimInstance_eventSetOverrideEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KinectAnimInstance_eventSetOverrideEnabled_Parms), &Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Sets override enabled.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09""Enable\x09true to enable, false to disable.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "Sets override enabled.\n\n@author      Leon Rosengarten\n\n@param       Enable  true to enable, false to disable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, nullptr, "SetOverrideEnabled", nullptr, nullptr, sizeof(KinectAnimInstance_eventSetOverrideEnabled_Parms), Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectAnimInstance_NoRegister()
	{
		return UKinectAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKinectAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BonesToRetarget_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRetarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRetarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KinectBoneRotators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectBoneRotators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KinectBoneRotators;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneAdjustments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneAdjustments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneAdjustments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveInputFromPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReceiveInputFromPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectOverrideEnabled_MetaData[];
#endif
		static void NewProp_KinectOverrideEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KinectOverrideEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluateAnimationGraph_MetaData[];
#endif
		static void NewProp_EvaluateAnimationGraph_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EvaluateAnimationGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKinectAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKinectAnimInstance_OnKinectBodyEvent, "OnKinectBodyEvent" }, // 3797513399
		{ &Z_Construct_UFunction_UKinectAnimInstance_OverrideBoneRotationByName, "OverrideBoneRotationByName" }, // 901986742
		{ &Z_Construct_UFunction_UKinectAnimInstance_RemoveBoneOverrideByName, "RemoveBoneOverrideByName" }, // 1079654865
		{ &Z_Construct_UFunction_UKinectAnimInstance_ResetOverride, "ResetOverride" }, // 249230769
		{ &Z_Construct_UFunction_UKinectAnimInstance_SetOverrideEnabled, "SetOverrideEnabled" }, // 4040379469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "KinectAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BonesToRetarget_Inner = { "BonesToRetarget", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BonesToRetarget_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BonesToRetarget = { "BonesToRetarget", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectAnimInstance, BonesToRetarget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BonesToRetarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BonesToRetarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectBoneRotators_Inner = { "KinectBoneRotators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectBoneRotators_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectBoneRotators = { "KinectBoneRotators", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectAnimInstance, KinectBoneRotators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectBoneRotators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectBoneRotators_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BoneAdjustments_Inner = { "BoneAdjustments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BoneAdjustments_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/** New translation of bone to apply. */" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "New translation of bone to apply." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BoneAdjustments = { "BoneAdjustments", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectAnimInstance, BoneAdjustments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BoneAdjustments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BoneAdjustments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_ReceiveInputFromPlayer_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "//*************************************************************************\n// Properties\n//*************************************************************************\n" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_ReceiveInputFromPlayer = { "ReceiveInputFromPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectAnimInstance, ReceiveInputFromPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_ReceiveInputFromPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_ReceiveInputFromPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectOverrideEnabled_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The receive input from player\n" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "< The receive input from player" },
	};
#endif
	void Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectOverrideEnabled_SetBit(void* Obj)
	{
		((UKinectAnimInstance*)Obj)->KinectOverrideEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectOverrideEnabled = { "KinectOverrideEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKinectAnimInstance), &Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectOverrideEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectOverrideEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectOverrideEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_EvaluateAnimationGraph_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< true to enable, false to disable the kinect override\n" },
		{ "ModuleRelativePath", "Classes/KinectAnimInstance.h" },
		{ "ToolTip", "< true to enable, false to disable the kinect override" },
	};
#endif
	void Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_EvaluateAnimationGraph_SetBit(void* Obj)
	{
		((UKinectAnimInstance*)Obj)->EvaluateAnimationGraph = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_EvaluateAnimationGraph = { "EvaluateAnimationGraph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKinectAnimInstance), &Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_EvaluateAnimationGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_EvaluateAnimationGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_EvaluateAnimationGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKinectAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BonesToRetarget_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BonesToRetarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectBoneRotators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectBoneRotators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BoneAdjustments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_BoneAdjustments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_ReceiveInputFromPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_KinectOverrideEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_EvaluateAnimationGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectAnimInstance_Statics::ClassParams = {
		&UKinectAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKinectAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::PropPointers),
		0,
		0x008800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectAnimInstance, 2626309246);
	template<> KINECTV2_API UClass* StaticClass<UKinectAnimInstance>()
	{
		return UKinectAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectAnimInstance(Z_Construct_UClass_UKinectAnimInstance, &UKinectAnimInstance::StaticClass, TEXT("/Script/KinectV2"), TEXT("UKinectAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
