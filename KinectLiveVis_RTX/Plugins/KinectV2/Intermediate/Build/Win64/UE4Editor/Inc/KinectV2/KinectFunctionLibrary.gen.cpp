// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KinectV2/Classes/KinectFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectFunctionLibrary() {}
// Cross Module References
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_EKinectStreamType();
	UPackage* Z_Construct_UPackage__Script_KinectV2();
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_EHandState();
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_ETrackingState();
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_EJoint();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBodyFrame();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBody();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FKinectBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectFunctionLibrary_NoRegister();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectEventManager_NoRegister();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter();
// End Cross Module References
	static UEnum* EKinectStreamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_EKinectStreamType, Z_Construct_UPackage__Script_KinectV2(), TEXT("EKinectStreamType"));
		}
		return Singleton;
	}
	template<> KINECTV2_API UEnum* StaticEnum<EKinectStreamType>()
	{
		return EKinectStreamType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKinectStreamType(EKinectStreamType_StaticEnum, TEXT("/Script/KinectV2"), TEXT("EKinectStreamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_EKinectStreamType_Hash() { return 222470224U; }
	UEnum* Z_Construct_UEnum_KinectV2_EKinectStreamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKinectStreamType"), 0, Get_Z_Construct_UEnum_KinectV2_EKinectStreamType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKinectStreamType::KST_Color", (int64)EKinectStreamType::KST_Color },
				{ "EKinectStreamType::KST_Depth", (int64)EKinectStreamType::KST_Depth },
				{ "EKinectStreamType::KST_IR", (int64)EKinectStreamType::KST_IR },
				{ "EKinectStreamType::KST_BodyIndex", (int64)EKinectStreamType::KST_BodyIndex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "KST_BodyIndex.DisplayName", "Body Index Stream" },
				{ "KST_BodyIndex.Name", "EKinectStreamType::KST_BodyIndex" },
				{ "KST_Color.DisplayName", "Color Stream" },
				{ "KST_Color.Name", "EKinectStreamType::KST_Color" },
				{ "KST_Depth.DisplayName", "Depth Stream" },
				{ "KST_Depth.Name", "EKinectStreamType::KST_Depth" },
				{ "KST_IR.DisplayName", "IR Stream" },
				{ "KST_IR.Name", "EKinectStreamType::KST_IR" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				"EKinectStreamType",
				"EKinectStreamType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_EHandState, Z_Construct_UPackage__Script_KinectV2(), TEXT("EHandState"));
		}
		return Singleton;
	}
	template<> KINECTV2_API UEnum* StaticEnum<EHandState::Type>()
	{
		return EHandState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandState(EHandState_StaticEnum, TEXT("/Script/KinectV2"), TEXT("EHandState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_EHandState_Hash() { return 3056125013U; }
	UEnum* Z_Construct_UEnum_KinectV2_EHandState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandState"), 0, Get_Z_Construct_UEnum_KinectV2_EHandState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandState::HandState_Unknown", (int64)EHandState::HandState_Unknown },
				{ "EHandState::HandState_NotTracked", (int64)EHandState::HandState_NotTracked },
				{ "EHandState::HandState_Open", (int64)EHandState::HandState_Open },
				{ "EHandState::HandState_Closed", (int64)EHandState::HandState_Closed },
				{ "EHandState::HandState_Lasso", (int64)EHandState::HandState_Lasso },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HandState_Closed.DisplayName", "HandState_Closed" },
				{ "HandState_Closed.Name", "EHandState::HandState_Closed" },
				{ "HandState_Lasso.DisplayName", "HandState_Lasso" },
				{ "HandState_Lasso.Name", "EHandState::HandState_Lasso" },
				{ "HandState_NotTracked.DisplayName", "HandState_NotTracked" },
				{ "HandState_NotTracked.Name", "EHandState::HandState_NotTracked" },
				{ "HandState_Open.DisplayName", "HandState_Open" },
				{ "HandState_Open.Name", "EHandState::HandState_Open" },
				{ "HandState_Unknown.DisplayName", "HandState_Unknown" },
				{ "HandState_Unknown.Name", "EHandState::HandState_Unknown" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				"EHandState",
				"EHandState::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETrackingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_ETrackingState, Z_Construct_UPackage__Script_KinectV2(), TEXT("ETrackingState"));
		}
		return Singleton;
	}
	template<> KINECTV2_API UEnum* StaticEnum<ETrackingState::Type>()
	{
		return ETrackingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackingState(ETrackingState_StaticEnum, TEXT("/Script/KinectV2"), TEXT("ETrackingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_ETrackingState_Hash() { return 3315334250U; }
	UEnum* Z_Construct_UEnum_KinectV2_ETrackingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackingState"), 0, Get_Z_Construct_UEnum_KinectV2_ETrackingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrackingState::TrackingState_NotTracked", (int64)ETrackingState::TrackingState_NotTracked },
				{ "ETrackingState::TrackingState_Inferred", (int64)ETrackingState::TrackingState_Inferred },
				{ "ETrackingState::TrackingState_Tracked", (int64)ETrackingState::TrackingState_Tracked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
				{ "TrackingState_Inferred.DisplayName", "TrackingState_Inferred" },
				{ "TrackingState_Inferred.Name", "ETrackingState::TrackingState_Inferred" },
				{ "TrackingState_NotTracked.DisplayName", "TrackingState_NotTracked" },
				{ "TrackingState_NotTracked.Name", "ETrackingState::TrackingState_NotTracked" },
				{ "TrackingState_Tracked.DisplayName", "TrackingState_Tracked" },
				{ "TrackingState_Tracked.Name", "ETrackingState::TrackingState_Tracked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				"ETrackingState",
				"ETrackingState::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_EJoint, Z_Construct_UPackage__Script_KinectV2(), TEXT("EJoint"));
		}
		return Singleton;
	}
	template<> KINECTV2_API UEnum* StaticEnum<EJoint::Type>()
	{
		return EJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJoint(EJoint_StaticEnum, TEXT("/Script/KinectV2"), TEXT("EJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_EJoint_Hash() { return 4206199969U; }
	UEnum* Z_Construct_UEnum_KinectV2_EJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJoint"), 0, Get_Z_Construct_UEnum_KinectV2_EJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJoint::JointType_SpineBase", (int64)EJoint::JointType_SpineBase },
				{ "EJoint::JointType_SpineMid", (int64)EJoint::JointType_SpineMid },
				{ "EJoint::JointType_Neck", (int64)EJoint::JointType_Neck },
				{ "EJoint::JointType_Head", (int64)EJoint::JointType_Head },
				{ "EJoint::JointType_ShoulderLeft", (int64)EJoint::JointType_ShoulderLeft },
				{ "EJoint::JointType_ElbowLeft", (int64)EJoint::JointType_ElbowLeft },
				{ "EJoint::JointType_WristLeft", (int64)EJoint::JointType_WristLeft },
				{ "EJoint::JointType_HandLeft", (int64)EJoint::JointType_HandLeft },
				{ "EJoint::JointType_ShoulderRight", (int64)EJoint::JointType_ShoulderRight },
				{ "EJoint::JointType_ElbowRight", (int64)EJoint::JointType_ElbowRight },
				{ "EJoint::JointType_WristRight", (int64)EJoint::JointType_WristRight },
				{ "EJoint::JointType_HandRight", (int64)EJoint::JointType_HandRight },
				{ "EJoint::JointType_HipLeft", (int64)EJoint::JointType_HipLeft },
				{ "EJoint::JointType_KneeLeft", (int64)EJoint::JointType_KneeLeft },
				{ "EJoint::JointType_AnkleLeft", (int64)EJoint::JointType_AnkleLeft },
				{ "EJoint::JointType_FootLeft", (int64)EJoint::JointType_FootLeft },
				{ "EJoint::JointType_HipRight", (int64)EJoint::JointType_HipRight },
				{ "EJoint::JointType_KneeRight", (int64)EJoint::JointType_KneeRight },
				{ "EJoint::JointType_AnkleRight", (int64)EJoint::JointType_AnkleRight },
				{ "EJoint::JointType_FootRight", (int64)EJoint::JointType_FootRight },
				{ "EJoint::JointType_SpineShoulder", (int64)EJoint::JointType_SpineShoulder },
				{ "EJoint::JointType_HandTipLeft", (int64)EJoint::JointType_HandTipLeft },
				{ "EJoint::JointType_ThumbLeft", (int64)EJoint::JointType_ThumbLeft },
				{ "EJoint::JointType_HandTipRight", (int64)EJoint::JointType_HandTipRight },
				{ "EJoint::JointType_ThumbRight", (int64)EJoint::JointType_ThumbRight },
				{ "EJoint::JointType_Count", (int64)EJoint::JointType_Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "JointType_AnkleLeft.DisplayName", "JointType_AnkleLeft" },
				{ "JointType_AnkleLeft.Name", "EJoint::JointType_AnkleLeft" },
				{ "JointType_AnkleRight.DisplayName", "JointType_AnkleRight" },
				{ "JointType_AnkleRight.Name", "EJoint::JointType_AnkleRight" },
				{ "JointType_Count.DisplayName", "JointType_Count" },
				{ "JointType_Count.Hidden", "" },
				{ "JointType_Count.Name", "EJoint::JointType_Count" },
				{ "JointType_ElbowLeft.DisplayName", "JointType_ElbowLeft" },
				{ "JointType_ElbowLeft.Name", "EJoint::JointType_ElbowLeft" },
				{ "JointType_ElbowRight.DisplayName", "JointType_ElbowRight" },
				{ "JointType_ElbowRight.Name", "EJoint::JointType_ElbowRight" },
				{ "JointType_FootLeft.DisplayName", "JointType_FootLeft" },
				{ "JointType_FootLeft.Name", "EJoint::JointType_FootLeft" },
				{ "JointType_FootRight.DisplayName", "JointType_FootRight" },
				{ "JointType_FootRight.Name", "EJoint::JointType_FootRight" },
				{ "JointType_HandLeft.DisplayName", "JointType_HandLeft" },
				{ "JointType_HandLeft.Name", "EJoint::JointType_HandLeft" },
				{ "JointType_HandRight.DisplayName", "JointType_HandRight" },
				{ "JointType_HandRight.Name", "EJoint::JointType_HandRight" },
				{ "JointType_HandTipLeft.DisplayName", "JointType_HandTipLeft" },
				{ "JointType_HandTipLeft.Name", "EJoint::JointType_HandTipLeft" },
				{ "JointType_HandTipRight.DisplayName", "JointType_HandTipRight" },
				{ "JointType_HandTipRight.Name", "EJoint::JointType_HandTipRight" },
				{ "JointType_Head.DisplayName", "JointType_Head" },
				{ "JointType_Head.Name", "EJoint::JointType_Head" },
				{ "JointType_HipLeft.DisplayName", "JointType_HipLeft" },
				{ "JointType_HipLeft.Name", "EJoint::JointType_HipLeft" },
				{ "JointType_HipRight.DisplayName", "JointType_HipRight" },
				{ "JointType_HipRight.Name", "EJoint::JointType_HipRight" },
				{ "JointType_KneeLeft.DisplayName", "JointType_KneeLeft" },
				{ "JointType_KneeLeft.Name", "EJoint::JointType_KneeLeft" },
				{ "JointType_KneeRight.DisplayName", "JointType_KneeRight" },
				{ "JointType_KneeRight.Name", "EJoint::JointType_KneeRight" },
				{ "JointType_Neck.DisplayName", "JointType_Neck" },
				{ "JointType_Neck.Name", "EJoint::JointType_Neck" },
				{ "JointType_ShoulderLeft.DisplayName", "JointType_ShoulderLeft" },
				{ "JointType_ShoulderLeft.Name", "EJoint::JointType_ShoulderLeft" },
				{ "JointType_ShoulderRight.DisplayName", "JointType_ShoulderRight" },
				{ "JointType_ShoulderRight.Name", "EJoint::JointType_ShoulderRight" },
				{ "JointType_SpineBase.DisplayName", "JointType_SpineBase" },
				{ "JointType_SpineBase.Name", "EJoint::JointType_SpineBase" },
				{ "JointType_SpineMid.DisplayName", "JointType_SpineMid" },
				{ "JointType_SpineMid.Name", "EJoint::JointType_SpineMid" },
				{ "JointType_SpineShoulder.DisplayName", "JointType_SpineShoulder" },
				{ "JointType_SpineShoulder.Name", "EJoint::JointType_SpineShoulder" },
				{ "JointType_ThumbLeft.DisplayName", "JointType_ThumbLeft" },
				{ "JointType_ThumbLeft.Name", "EJoint::JointType_ThumbLeft" },
				{ "JointType_ThumbRight.DisplayName", "JointType_ThumbRight" },
				{ "JointType_ThumbRight.Name", "EJoint::JointType_ThumbRight" },
				{ "JointType_WristLeft.DisplayName", "JointType_WristLeft" },
				{ "JointType_WristLeft.Name", "EJoint::JointType_WristLeft" },
				{ "JointType_WristRight.DisplayName", "JointType_WristRight" },
				{ "JointType_WristRight.Name", "EJoint::JointType_WristRight" },
				{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				"EJoint",
				"EJoint::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBodyFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FBodyFrame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyFrame, Z_Construct_UPackage__Script_KinectV2(), TEXT("BodyFrame"), sizeof(FBodyFrame), Get_Z_Construct_UScriptStruct_FBodyFrame_Hash());
	}
	return Singleton;
}
template<> KINECTV2_API UScriptStruct* StaticStruct<FBodyFrame>()
{
	return FBodyFrame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyFrame(FBodyFrame::StaticStruct, TEXT("/Script/KinectV2"), TEXT("BodyFrame"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFBodyFrame
{
	FScriptStruct_KinectV2_StaticRegisterNativesFBodyFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyFrame")),new UScriptStruct::TCppStructOps<FBodyFrame>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFBodyFrame;
	struct Z_Construct_UScriptStruct_FBodyFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bodies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bodies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bodies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyFrame>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_Bodies_Inner = { "Bodies", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_Bodies_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_Bodies = { "Bodies", nullptr, (EPropertyFlags)0x0010000000020055, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyFrame, Bodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_Bodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_Bodies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_FloorPlane_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The bodies\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< The bodies" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_FloorPlane = { "FloorPlane", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyFrame, FloorPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_FloorPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_FloorPlane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_Bodies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_Bodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyFrame_Statics::NewProp_FloorPlane,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
		nullptr,
		&NewStructOps,
		"BodyFrame",
		sizeof(FBodyFrame),
		alignof(FBodyFrame),
		Z_Construct_UScriptStruct_FBodyFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyFrame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyFrame"), sizeof(FBodyFrame), Get_Z_Construct_UScriptStruct_FBodyFrame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyFrame_Hash() { return 2246618136U; }
class UScriptStruct* FBody::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FBody_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBody, Z_Construct_UPackage__Script_KinectV2(), TEXT("Body"), sizeof(FBody), Get_Z_Construct_UScriptStruct_FBody_Hash());
	}
	return Singleton;
}
template<> KINECTV2_API UScriptStruct* StaticStruct<FBody>()
{
	return FBody::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBody(FBody::StaticStruct, TEXT("/Script/KinectV2"), TEXT("Body"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFBody
{
	FScriptStruct_KinectV2_StaticRegisterNativesFBody()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Body")),new UScriptStruct::TCppStructOps<FBody>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFBody;
	struct Z_Construct_UScriptStruct_FBody_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KinectBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KinectBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyTrackingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyTrackingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftHandState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightHandState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_TrackingId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTracked_MetaData[];
#endif
		static void NewProp_bIsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTracked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBody>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_KinectBones_Inner = { "KinectBones", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKinectBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_KinectBones_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_KinectBones = { "KinectBones", nullptr, (EPropertyFlags)0x0010000000020055, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, KinectBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_KinectBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_KinectBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyTrackingState_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The kinect bones\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< The kinect bones" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyTrackingState = { "BodyTrackingState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, BodyTrackingState), Z_Construct_UEnum_KinectV2_ETrackingState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyTrackingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyTrackingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_LeftHandState_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< State of the body tracking\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< State of the body tracking" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_LeftHandState = { "LeftHandState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, LeftHandState), Z_Construct_UEnum_KinectV2_EHandState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_LeftHandState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_LeftHandState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_RightHandState_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< State of the left hand\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< State of the left hand" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_RightHandState = { "RightHandState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, RightHandState), Z_Construct_UEnum_KinectV2_EHandState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_RightHandState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_RightHandState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_Lean_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< State of the right hand\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< State of the right hand" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, Lean), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_Lean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_TrackingId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_TrackingId = { "TrackingId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, TrackingId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_TrackingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_TrackingId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_bIsTracked_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< Identifier for the tracking\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< Identifier for the tracking" },
	};
#endif
	void Z_Construct_UScriptStruct_FBody_Statics::NewProp_bIsTracked_SetBit(void* Obj)
	{
		((FBody*)Obj)->bIsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_bIsTracked = { "bIsTracked", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBody), &Z_Construct_UScriptStruct_FBody_Statics::NewProp_bIsTracked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_bIsTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_bIsTracked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_KinectBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_KinectBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyTrackingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_LeftHandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_RightHandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_Lean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_TrackingId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_bIsTracked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
		nullptr,
		&NewStructOps,
		"Body",
		sizeof(FBody),
		alignof(FBody),
		Z_Construct_UScriptStruct_FBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBody()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBody_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Body"), sizeof(FBody), Get_Z_Construct_UScriptStruct_FBody_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBody_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBody_Hash() { return 996613168U; }
class UScriptStruct* FKinectBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECTV2_API uint32 Get_Z_Construct_UScriptStruct_FKinectBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinectBone, Z_Construct_UPackage__Script_KinectV2(), TEXT("KinectBone"), sizeof(FKinectBone), Get_Z_Construct_UScriptStruct_FKinectBone_Hash());
	}
	return Singleton;
}
template<> KINECTV2_API UScriptStruct* StaticStruct<FKinectBone>()
{
	return FKinectBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKinectBone(FKinectBone::StaticStruct, TEXT("/Script/KinectV2"), TEXT("KinectBone"), false, nullptr, nullptr);
static struct FScriptStruct_KinectV2_StaticRegisterNativesFKinectBone
{
	FScriptStruct_KinectV2_StaticRegisterNativesFKinectBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KinectBone")),new UScriptStruct::TCppStructOps<FKinectBone>);
	}
} ScriptStruct_KinectV2_StaticRegisterNativesFKinectBone;
	struct Z_Construct_UScriptStruct_FKinectBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTypeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTypeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTypeEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTypeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpacePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSpacePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirroredJointTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MirroredJointTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKinectBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinectBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeStart_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeStart = { "JointTypeStart", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, JointTypeStart), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeEnd_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The joint type start\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< The joint type start" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeEnd = { "JointTypeEnd", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, JointTypeEnd), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The joint type end\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< The joint type end" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_CameraSpacePoint_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The orientation\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< The orientation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_CameraSpacePoint = { "CameraSpacePoint", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, CameraSpacePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_CameraSpacePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_CameraSpacePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_TrackingState_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The camera space point\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< The camera space point" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, TrackingState), Z_Construct_UEnum_KinectV2_ETrackingState, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_TrackingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_TrackingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTransform_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< State of the tracking\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< State of the tracking" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTransform = { "JointTransform", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, JointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_MirroredJointTransform_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The joint transform\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< The joint transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_MirroredJointTransform = { "MirroredJointTransform", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, MirroredJointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_MirroredJointTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_MirroredJointTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Kinect" },
		{ "Comment", "///< The joint transform\n" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "< The joint transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Normal_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKinectBone, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKinectBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTypeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_CameraSpacePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_TrackingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_JointTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_MirroredJointTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBone_Statics::NewProp_Children,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKinectBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
		nullptr,
		&NewStructOps,
		"KinectBone",
		sizeof(FKinectBone),
		alignof(FKinectBone),
		Z_Construct_UScriptStruct_FKinectBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKinectBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKinectBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KinectBone"), sizeof(FKinectBone), Get_Z_Construct_UScriptStruct_FKinectBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKinectBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKinectBone_Hash() { return 843862443U; }
	DEFINE_FUNCTION(UKinectFunctionLibrary::execMapColorFrameToDepthSpace)
	{
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_InTexture);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_DepthTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UKinectFunctionLibrary::MapColorFrameToDepthSpace(Z_Param_Out_InTexture,Z_Param_Out_DepthTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execCreateStreamTexture)
	{
		P_GET_ENUM(EKinectStreamType,Z_Param_StreamType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UKinectFunctionLibrary::CreateStreamTexture(EKinectStreamType(Z_Param_StreamType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execGetSmoothedJoint)
	{
		P_GET_STRUCT_REF(FBoneOrientationDoubleExponentialFilter,Z_Param_Out_InFilter);
		P_GET_STRUCT_REF(FBody,Z_Param_Out_InBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBody*)Z_Param__Result=UKinectFunctionLibrary::GetSmoothedJoint(Z_Param_Out_InFilter,Z_Param_Out_InBody);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execShutdownSensor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::ShutdownSensor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execStartSensor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::StartSensor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execGetKinectEventManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UKinectEventManager**)Z_Param__Result=UKinectFunctionLibrary::GetKinectEventManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execMirrorKinectSkeleton)
	{
		P_GET_STRUCT_REF(FBody,Z_Param_Out_BodyToMirror);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PosLocScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UKinectFunctionLibrary::MirrorKinectSkeleton(Z_Param_Out_BodyToMirror,Z_Param_PosLocScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execGetBoneFTransformRelToBone)
	{
		P_GET_STRUCT(FBody,Z_Param_TheBody);
		P_GET_PROPERTY(FByteProperty,Z_Param_TheJointType);
		P_GET_PROPERTY(FByteProperty,Z_Param_ComparedToJoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::GetBoneFTransformRelToBone(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType),EJoint::Type(Z_Param_ComparedToJoint));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execConvertBodyPointToScreenPoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BodyPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_ScreenSizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_ScreenSizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UKinectFunctionLibrary::ConvertBodyPointToScreenPoint(Z_Param_Out_BodyPoint,Z_Param_ScreenSizeX,Z_Param_ScreenSizeY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execEnableBodyJoystick)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::EnableBodyJoystick(Z_Param_Out_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execInverseQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::InverseQuat(Z_Param_Out_InQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execConvertRotatorToLocal)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_WorldRotator);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::ConvertRotatorToLocal(Z_Param_Out_WorldRotator,Z_Param_Out_ParentTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execInverseTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::InverseTransform(Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execGetBoneParent)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_InBone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EJoint::Type>*)Z_Param__Result=UKinectFunctionLibrary::GetBoneParent((TEnumAsByte<EJoint::Type>&)(Z_Param_Out_InBone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execRadiansToDegrees)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InRadians);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKinectFunctionLibrary::RadiansToDegrees(Z_Param_Out_InRadians);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execDegreesToRadians)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKinectFunctionLibrary::DegreesToRadians(Z_Param_Out_InDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execQuatToAxisOutAngle)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAxis);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::QuatToAxisOutAngle(Z_Param_Out_InQuat,Z_Param_Out_OutAxis,Z_Param_Out_OutAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execMultiplyQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::MultiplyQuat(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execBreakKinectBone)
	{
		P_GET_STRUCT_REF(FKinectBone,Z_Param_Out_InKinectBone);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_JointTypeStart);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_JointTypeEnd);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraSpacePoint);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_TrackingState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::BreakKinectBone(Z_Param_Out_InKinectBone,(TEnumAsByte<EJoint::Type>&)(Z_Param_Out_JointTypeStart),(TEnumAsByte<EJoint::Type>&)(Z_Param_Out_JointTypeEnd),Z_Param_Out_Orientation,Z_Param_Out_CameraSpacePoint,(TEnumAsByte<ETrackingState::Type>&)(Z_Param_Out_TrackingState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execBreakBody)
	{
		P_GET_STRUCT_REF(FBody,Z_Param_Out_InBody);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_BoneTransforms);
		P_GET_UBOOL_REF(Z_Param_Out_IsTracked);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::BreakBody(Z_Param_Out_InBody,Z_Param_Out_BoneTransforms,Z_Param_Out_IsTracked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execMakeVector4)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_X);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Y);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Z);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_W);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=UKinectFunctionLibrary::MakeVector4(Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,Z_Param_Out_W);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execBreakVector4)
	{
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVector);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_X);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Y);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Z);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_W);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::BreakVector4(Z_Param_Out_InVector,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,Z_Param_Out_W);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execGetBone)
	{
		P_GET_STRUCT(FBody,Z_Param_TheBody);
		P_GET_PROPERTY(FByteProperty,Z_Param_TheJointType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKinectBone*)Z_Param__Result=UKinectFunctionLibrary::GetBone(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execGetBoneFTransform)
	{
		P_GET_STRUCT(FBody,Z_Param_TheBody);
		P_GET_PROPERTY(FByteProperty,Z_Param_TheJointType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UKinectFunctionLibrary::GetBoneFTransform(Z_Param_TheBody,EJoint::Type(Z_Param_TheJointType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execBreakBodyFrame)
	{
		P_GET_STRUCT_REF(FBodyFrame,Z_Param_Out_InBodyFrame);
		P_GET_TARRAY_REF(FBody,Z_Param_Out_Bodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::BreakBodyFrame(Z_Param_Out_InBodyFrame,Z_Param_Out_Bodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execRotatorToQuat)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TheRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::RotatorToQuat(Z_Param_Out_TheRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execVec4QuatToRotator)
	{
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_TheVec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::Vec4QuatToRotator(Z_Param_Out_TheVec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execConv_Vector4ToQuat)
	{
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InVec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::Conv_Vector4ToQuat(Z_Param_Out_InVec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execConv_QuatToRotator)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UKinectFunctionLibrary::Conv_QuatToRotator(Z_Param_Out_InQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execBreakQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InQuat);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_x);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_y);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_z);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_w);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKinectFunctionLibrary::BreakQuat(Z_Param_Out_InQuat,Z_Param_Out_x,Z_Param_Out_y,Z_Param_Out_z,Z_Param_Out_w);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectFunctionLibrary::execMakeQuat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_w);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UKinectFunctionLibrary::MakeQuat(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w);
		P_NATIVE_END;
	}
	void UKinectFunctionLibrary::StaticRegisterNativesUKinectFunctionLibrary()
	{
		UClass* Class = UKinectFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakBody", &UKinectFunctionLibrary::execBreakBody },
			{ "BreakBodyFrame", &UKinectFunctionLibrary::execBreakBodyFrame },
			{ "BreakKinectBone", &UKinectFunctionLibrary::execBreakKinectBone },
			{ "BreakQuat", &UKinectFunctionLibrary::execBreakQuat },
			{ "BreakVector4", &UKinectFunctionLibrary::execBreakVector4 },
			{ "Conv_QuatToRotator", &UKinectFunctionLibrary::execConv_QuatToRotator },
			{ "Conv_Vector4ToQuat", &UKinectFunctionLibrary::execConv_Vector4ToQuat },
			{ "ConvertBodyPointToScreenPoint", &UKinectFunctionLibrary::execConvertBodyPointToScreenPoint },
			{ "ConvertRotatorToLocal", &UKinectFunctionLibrary::execConvertRotatorToLocal },
			{ "CreateStreamTexture", &UKinectFunctionLibrary::execCreateStreamTexture },
			{ "DegreesToRadians", &UKinectFunctionLibrary::execDegreesToRadians },
			{ "EnableBodyJoystick", &UKinectFunctionLibrary::execEnableBodyJoystick },
			{ "GetBone", &UKinectFunctionLibrary::execGetBone },
			{ "GetBoneFTransform", &UKinectFunctionLibrary::execGetBoneFTransform },
			{ "GetBoneFTransformRelToBone", &UKinectFunctionLibrary::execGetBoneFTransformRelToBone },
			{ "GetBoneParent", &UKinectFunctionLibrary::execGetBoneParent },
			{ "GetKinectEventManager", &UKinectFunctionLibrary::execGetKinectEventManager },
			{ "GetSmoothedJoint", &UKinectFunctionLibrary::execGetSmoothedJoint },
			{ "InverseQuat", &UKinectFunctionLibrary::execInverseQuat },
			{ "InverseTransform", &UKinectFunctionLibrary::execInverseTransform },
			{ "MakeQuat", &UKinectFunctionLibrary::execMakeQuat },
			{ "MakeVector4", &UKinectFunctionLibrary::execMakeVector4 },
			{ "MapColorFrameToDepthSpace", &UKinectFunctionLibrary::execMapColorFrameToDepthSpace },
			{ "MirrorKinectSkeleton", &UKinectFunctionLibrary::execMirrorKinectSkeleton },
			{ "MultiplyQuat", &UKinectFunctionLibrary::execMultiplyQuat },
			{ "QuatToAxisOutAngle", &UKinectFunctionLibrary::execQuatToAxisOutAngle },
			{ "RadiansToDegrees", &UKinectFunctionLibrary::execRadiansToDegrees },
			{ "RotatorToQuat", &UKinectFunctionLibrary::execRotatorToQuat },
			{ "ShutdownSensor", &UKinectFunctionLibrary::execShutdownSensor },
			{ "StartSensor", &UKinectFunctionLibrary::execStartSensor },
			{ "Vec4QuatToRotator", &UKinectFunctionLibrary::execVec4QuatToRotator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics
	{
		struct KinectFunctionLibrary_eventBreakBody_Parms
		{
			FBody InBody;
			TArray<FTransform> BoneTransforms;
			bool IsTracked;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBody;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTransforms_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTransforms;
		static void NewProp_IsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTracked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_InBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_InBody = { "InBody", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakBody_Parms, InBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_InBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_InBody_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_BoneTransforms_Inner = { "BoneTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_BoneTransforms = { "BoneTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakBody_Parms, BoneTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_IsTracked_SetBit(void* Obj)
	{
		((KinectFunctionLibrary_eventBreakBody_Parms*)Obj)->IsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_IsTracked = { "IsTracked", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KinectFunctionLibrary_eventBreakBody_Parms), &Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_IsTracked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_InBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_BoneTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_BoneTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::NewProp_IsTracked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Break body.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09InBody\x09\x09\x09\x09  \x09The in body.\n\x09\x09 * @param [in,out]\x09""BoneTransforms\x09The bone transforms.\n\x09\x09 * @param [in,out]\x09IsTracked\x09  \x09The is tracked.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Break body.\n\n@author      Leon Rosengarten\n\n@param       InBody                                  The in body.\n@param [in,out]      BoneTransforms  The bone transforms.\n@param [in,out]      IsTracked               The is tracked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "BreakBody", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventBreakBody_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics
	{
		struct KinectFunctionLibrary_eventBreakBodyFrame_Parms
		{
			FBodyFrame InBodyFrame;
			TArray<FBody> Bodies;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBodyFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBodyFrame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bodies_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bodies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_InBodyFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_InBodyFrame = { "InBodyFrame", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakBodyFrame_Parms, InBodyFrame), Z_Construct_UScriptStruct_FBodyFrame, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_InBodyFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_InBodyFrame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_Bodies_Inner = { "Bodies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_Bodies = { "Bodies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakBodyFrame_Parms, Bodies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_InBodyFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_Bodies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::NewProp_Bodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Break body frame.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09InBodyFrame   \x09The in body frame.\n\x09\x09 * @param [in,out]\x09""Bodies\x09The bodies.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Break body frame.\n\n@author      Leon Rosengarten\n\n@param       InBodyFrame     The in body frame.\n@param [in,out]      Bodies  The bodies." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "BreakBodyFrame", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventBreakBodyFrame_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics
	{
		struct KinectFunctionLibrary_eventBreakKinectBone_Parms
		{
			FKinectBone InKinectBone;
			TEnumAsByte<EJoint::Type> JointTypeStart;
			TEnumAsByte<EJoint::Type> JointTypeEnd;
			FQuat Orientation;
			FVector CameraSpacePoint;
			TEnumAsByte<ETrackingState::Type> TrackingState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKinectBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKinectBone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTypeStart;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTypeEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSpacePoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_InKinectBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_InKinectBone = { "InKinectBone", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, InKinectBone), Z_Construct_UScriptStruct_FKinectBone, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_InKinectBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_InKinectBone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_JointTypeStart = { "JointTypeStart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, JointTypeStart), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_JointTypeEnd = { "JointTypeEnd", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, JointTypeEnd), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_CameraSpacePoint = { "CameraSpacePoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, CameraSpacePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakKinectBone_Parms, TrackingState), Z_Construct_UEnum_KinectV2_ETrackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_InKinectBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_JointTypeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_JointTypeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_CameraSpacePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::NewProp_TrackingState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Break kinect bone.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09InKinectBone\x09\x09\x09\x09The in kinect bone.\n\x09\x09 * @param [in,out]\x09JointTypeStart  \x09The joint type start.\n\x09\x09 * @param [in,out]\x09JointTypeEnd\x09\x09The joint type end.\n\x09\x09 * @param [in,out]\x09Orientation\x09\x09\x09The orientation.\n\x09\x09 * @param [in,out]\x09""CameraSpacePoint\x09The camera space point.\n\x09\x09 * @param [in,out]\x09TrackingState   \x09State of the tracking.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Break kinect bone.\n\n@author      Leon Rosengarten\n\n@param       InKinectBone                            The in kinect bone.\n@param [in,out]      JointTypeStart          The joint type start.\n@param [in,out]      JointTypeEnd            The joint type end.\n@param [in,out]      Orientation                     The orientation.\n@param [in,out]      CameraSpacePoint        The camera space point.\n@param [in,out]      TrackingState           State of the tracking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "BreakKinectBone", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventBreakKinectBone_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics
	{
		struct KinectFunctionLibrary_eventBreakQuat_Parms
		{
			FQuat InQuat;
			float x;
			float y;
			float z;
			float w;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakQuat_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::NewProp_w,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static void UKinectFunctionLibrary::BreakQuat(const FQuat&amp; InQuat, float&amp; x,\n\x09\x09 * float&amp; y, float&amp; z, float&amp; w);\n\x09\x09 *\n\x09\x09 * \\brief\x09""Break quaternion.\n\x09\x09 *\n\x09\x09 * \\param\x09InQuat   \x09The in quaternion. \\param [in,out]\x09x\x09The float&amp; to process. \\param [in,\n\x09\x09 * out]\x09y\x09The float&amp; to process. \\param [in,out]\x09z\x09The float&amp; to process. \\param [in,out]\n\x09\x09 * w\x09The float&amp; to process.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09InQuat   \x09The in quaternion.\n\x09\x09 * @param [in,out]\x09x\x09The float&amp; to process.\n\x09\x09 * @param [in,out]\x09y\x09The float&amp; to process.\n\x09\x09 * @param [in,out]\x09z\x09The float&amp; to process.\n\x09\x09 * @param [in,out]\x09w\x09The float&amp; to process.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "\\fn  static void UKinectFunctionLibrary::BreakQuat(const FQuat&amp; InQuat, float&amp; x,\nfloat&amp; y, float&amp; z, float&amp; w);\n\n\\brief       Break quaternion.\n\n\\param       InQuat          The in quaternion. \\param [in,out]      x       The float&amp; to process. \\param [in,\nout] y       The float&amp; to process. \\param [in,out]      z       The float&amp; to process. \\param [in,out]\nw    The float&amp; to process.\n\n@author      Leon Rosengarten\n@param       InQuat          The in quaternion.\n@param [in,out]      x       The float&amp; to process.\n@param [in,out]      y       The float&amp; to process.\n@param [in,out]      z       The float&amp; to process.\n@param [in,out]      w       The float&amp; to process." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "BreakQuat", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventBreakQuat_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics
	{
		struct KinectFunctionLibrary_eventBreakVector4_Parms
		{
			FVector4 InVector;
			float X;
			float Y;
			float Z;
			float W;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_W;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, InVector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventBreakVector4_Parms, W), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_InVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::NewProp_W,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Break vector 4.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09InVector\x09 \x09The in vector.\n\x09\x09 * @param [in,out]\x09X\x09The float&amp; to process.\n\x09\x09 * @param [in,out]\x09Y\x09The float&amp; to process.\n\x09\x09 * @param [in,out]\x09Z\x09The float&amp; to process.\n\x09\x09 * @param [in,out]\x09W\x09The float&amp; to process.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Break vector 4.\n\n@author      Leon Rosengarten\n\n@param       InVector                The in vector.\n@param [in,out]      X       The float&amp; to process.\n@param [in,out]      Y       The float&amp; to process.\n@param [in,out]      Z       The float&amp; to process.\n@param [in,out]      W       The float&amp; to process." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "BreakVector4", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventBreakVector4_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics
	{
		struct KinectFunctionLibrary_eventConv_QuatToRotator_Parms
		{
			FQuat InQuat;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConv_QuatToRotator_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConv_QuatToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Convert quaternion to rotator.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09InQuat\x09The in quaternion.\n\x09\x09 *\n\x09\x09 * @return\x09The quaternion converted to rotator.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Convert quaternion to rotator.\n\n@author      Leon Rosengarten\n@param       InQuat  The in quaternion.\n\n@return      The quaternion converted to rotator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "Conv_QuatToRotator", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventConv_QuatToRotator_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics
	{
		struct KinectFunctionLibrary_eventConv_Vector4ToQuat_Parms
		{
			FVector4 InVec;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::NewProp_InVec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::NewProp_InVec = { "InVec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConv_Vector4ToQuat_Parms, InVec), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::NewProp_InVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::NewProp_InVec_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConv_Vector4ToQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::NewProp_InVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static FQuat UKinectFunctionLibrary::Conv_Vector4ToQuat(const FVector4&amp; InVec);\n\x09\x09 *\n\x09\x09 * \\brief\x09""Convert vector 4 to quaternion.\n\x09\x09 *\n\x09\x09 * \\param\x09InVec\x09The in vector.\n\x09\x09 *\n\x09\x09 * \\return\x09The vector converted 4 to quaternion.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09InVec\x09The in vector.\n\x09\x09 *\n\x09\x09 * @return\x09The vector converted 4 to quaternion.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "\\fn  static FQuat UKinectFunctionLibrary::Conv_Vector4ToQuat(const FVector4&amp; InVec);\n\n\\brief       Convert vector 4 to quaternion.\n\n\\param       InVec   The in vector.\n\n\\return      The vector converted 4 to quaternion.\n\n@author      Leon Rosengarten\n@param       InVec   The in vector.\n\n@return      The vector converted 4 to quaternion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "Conv_Vector4ToQuat", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventConv_Vector4ToQuat_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics
	{
		struct KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms
		{
			FVector BodyPoint;
			int32 ScreenSizeX;
			int32 ScreenSizeY;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSizeX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSizeY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_BodyPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_BodyPoint = { "BodyPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms, BodyPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_BodyPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_BodyPoint_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_ScreenSizeX = { "ScreenSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms, ScreenSizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_ScreenSizeY = { "ScreenSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms, ScreenSizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_BodyPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_ScreenSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_ScreenSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|CoordianteMapper" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Convert body point to screen point.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09""BodyPoint  \x09The body point.\n\x09\x09 * @param\x09ScreenSizeX\x09The screen size x coordinate.\n\x09\x09 * @param\x09ScreenSizeY\x09The screen size y coordinate.\n\x09\x09 *\n\x09\x09 * @return\x09The body converted point to screen point.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Convert body point to screen point.\n\n@author      Leon Rosengarten\n\n@param       BodyPoint       The body point.\n@param       ScreenSizeX     The screen size x coordinate.\n@param       ScreenSizeY     The screen size y coordinate.\n\n@return      The body converted point to screen point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "ConvertBodyPointToScreenPoint", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventConvertBodyPointToScreenPoint_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics
	{
		struct KinectFunctionLibrary_eventConvertRotatorToLocal_Parms
		{
			FRotator WorldRotator;
			FTransform ParentTransform;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_WorldRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_WorldRotator = { "WorldRotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertRotatorToLocal_Parms, WorldRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_WorldRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_WorldRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_ParentTransform = { "ParentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertRotatorToLocal_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_ParentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_ParentTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventConvertRotatorToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_WorldRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_ParentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "ConvertRotatorToLocal", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventConvertRotatorToLocal_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics
	{
		struct KinectFunctionLibrary_eventCreateStreamTexture_Parms
		{
			EKinectStreamType StreamType;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StreamType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StreamType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::NewProp_StreamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventCreateStreamTexture_Parms, StreamType), Z_Construct_UEnum_KinectV2_EKinectStreamType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventCreateStreamTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::NewProp_StreamType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::NewProp_StreamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "CreateStreamTexture", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventCreateStreamTexture_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics
	{
		struct KinectFunctionLibrary_eventDegreesToRadians_Parms
		{
			float InDegrees;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDegrees;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::NewProp_InDegrees_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::NewProp_InDegrees = { "InDegrees", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventDegreesToRadians_Parms, InDegrees), METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::NewProp_InDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::NewProp_InDegrees_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventDegreesToRadians_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::NewProp_InDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static float UKinectFunctionLibrary::DegreesToRadians(const float &amp;InDegrees);\n\x09\x09 *\n\x09\x09 * \\brief\x09""Degrees to radians.\n\x09\x09 *\n\x09\x09 * \\param\x09InDegrees\x09The in in degrees.\n\x09\x09 *\n\x09\x09 * \\return\x09""A float.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09InDegrees\x09The in in degrees.\n\x09\x09 *\n\x09\x09 * @return\x09""A float.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "\\fn  static float UKinectFunctionLibrary::DegreesToRadians(const float &amp;InDegrees);\n\n\\brief       Degrees to radians.\n\n\\param       InDegrees       The in in degrees.\n\n\\return      A float.\n\n@author      Leon Rosengarten\n@param       InDegrees       The in in degrees.\n\n@return      A float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "DegreesToRadians", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventDegreesToRadians_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics
	{
		struct KinectFunctionLibrary_eventEnableBodyJoystick_Parms
		{
			bool Enable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::NewProp_Enable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((KinectFunctionLibrary_eventEnableBodyJoystick_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KinectFunctionLibrary_eventEnableBodyJoystick_Parms), &Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Enables the body joystick.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09""Enable\x09The enable.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Enables the body joystick.\n\n@author      Leon Rosengarten\n@param       Enable  The enable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "EnableBodyJoystick", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventEnableBodyJoystick_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics
	{
		struct KinectFunctionLibrary_eventGetBone_Parms
		{
			FBody TheBody;
			TEnumAsByte<EJoint::Type> TheJointType;
			FKinectBone ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheBody;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TheJointType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_TheBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_TheBody = { "TheBody", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBone_Parms, TheBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_TheBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_TheBody_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_TheJointType = { "TheJointType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBone_Parms, TheJointType), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBone_Parms, ReturnValue), Z_Construct_UScriptStruct_FKinectBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_TheBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_TheJointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body" },
		{ "Comment", "/**************************************************************************************************\nGetBone Ref\n\x09\x09**************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "GetBone Ref" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "GetBone", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventGetBone_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_GetBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics
	{
		struct KinectFunctionLibrary_eventGetBoneFTransform_Parms
		{
			FBody TheBody;
			TEnumAsByte<EJoint::Type> TheJointType;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheBody;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TheJointType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_TheBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_TheBody = { "TheBody", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransform_Parms, TheBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_TheBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_TheBody_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_TheJointType = { "TheJointType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransform_Parms, TheJointType), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_TheBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_TheJointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09GetBone Ref\n\x09\x09**************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "GetBone Ref" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "GetBoneFTransform", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventGetBoneFTransform_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics
	{
		struct KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms
		{
			FBody TheBody;
			TEnumAsByte<EJoint::Type> TheJointType;
			TEnumAsByte<EJoint::Type> ComparedToJoint;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheJointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TheJointType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparedToJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComparedToJoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheBody = { "TheBody", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms, TheBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheJointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheJointType = { "TheJointType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms, TheJointType), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheJointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheJointType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_ComparedToJoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_ComparedToJoint = { "ComparedToJoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms, ComparedToJoint), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_ComparedToJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_ComparedToJoint_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_TheJointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_ComparedToJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "GetBoneFTransformRelToBone", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventGetBoneFTransformRelToBone_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics
	{
		struct KinectFunctionLibrary_eventGetBoneParent_Parms
		{
			TEnumAsByte<EJoint::Type> InBone;
			TEnumAsByte<EJoint::Type> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::NewProp_InBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::NewProp_InBone = { "InBone", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneParent_Parms, InBone), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::NewProp_InBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::NewProp_InBone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetBoneParent_Parms, ReturnValue), Z_Construct_UEnum_KinectV2_EJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::NewProp_InBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Gets the parent of this item.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09InBone\x09The in bone.\n\x09\x09 *\n\x09\x09 * @return\x09The bone parent.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Gets the parent of this item.\n\n@author      Leon Rosengarten\n\n@param       InBone  The in bone.\n\n@return      The bone parent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "GetBoneParent", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventGetBoneParent_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics
	{
		struct KinectFunctionLibrary_eventGetKinectEventManager_Parms
		{
			UKinectEventManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetKinectEventManager_Parms, ReturnValue), Z_Construct_UClass_UKinectEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * A kinect event manager*.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "A kinect event manager*.\n\n@author      Leon Rosengarten" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "GetKinectEventManager", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventGetKinectEventManager_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics
	{
		struct KinectFunctionLibrary_eventGetSmoothedJoint_Parms
		{
			FBoneOrientationDoubleExponentialFilter InFilter;
			FBody InBody;
			FBody ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBody;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_InFilter = { "InFilter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetSmoothedJoint_Parms, InFilter), Z_Construct_UScriptStruct_FBoneOrientationDoubleExponentialFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_InBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_InBody = { "InBody", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetSmoothedJoint_Parms, InBody), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_InBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_InBody_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventGetSmoothedJoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_InFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_InBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Filters" },
		{ "Comment", "/**\n\x09\x09 * Gets smoothed joint.\n\x09\x09 *\n\x09\x09 * @author\x09Leon\n\x09\x09 * @date\x09""26-Aug-15\n\x09\x09 *\n\x09\x09 * @param [in,out]\x09InFilter\x09""A filter specifying the in.\n\x09\x09 * @param\x09InBody\x09\x09\x09\x09The in body.\n\x09\x09 *\n\x09\x09 * @return\x09The smoothed joint.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Gets smoothed joint.\n\n@author      Leon\n@date        26-Aug-15\n\n@param [in,out]      InFilter        A filter specifying the in.\n@param       InBody                          The in body.\n\n@return      The smoothed joint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "GetSmoothedJoint", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventGetSmoothedJoint_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics
	{
		struct KinectFunctionLibrary_eventInverseQuat_Parms
		{
			FQuat InQuat;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventInverseQuat_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventInverseQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Inverse quaternion.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09InQuat\x09The in quaternion.\n\x09\x09 *\n\x09\x09 * @return\x09""A FQuat.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Inverse quaternion.\n\n@author      Leon Rosengarten\n@param       InQuat  The in quaternion.\n\n@return      A FQuat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "InverseQuat", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventInverseQuat_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics
	{
		struct KinectFunctionLibrary_eventInverseTransform_Parms
		{
			FTransform InTransform;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventInverseTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventInverseTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Inverse transform.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09InTransform\x09The in transform.\n\x09\x09 *\n\x09\x09 * @return\x09""A FTransform.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Inverse transform.\n\n@author      Leon Rosengarten\n@param       InTransform     The in transform.\n\n@return      A FTransform." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "InverseTransform", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventInverseTransform_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics
	{
		struct KinectFunctionLibrary_eventMakeQuat_Parms
		{
			float x;
			float y;
			float z;
			float w;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static FQuat UKinectFunctionLibrary::MakeQuat(float x, float y, float z, float w);\n\x09\x09 *\n\x09\x09 * \\brief\x09Makes a quaternion.\n\x09\x09 *\n\x09\x09 * \\param\x09x\x09The x coordinate. \\param\x09y\x09The y coordinate. \\param\x09z\x09The z coordinate. \\param\x09w\x09The\n\x09\x09 * scalar.\n\x09\x09 *\n\x09\x09 * \\return\x09""A FQuat.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09x\x09The x coordinate.\n\x09\x09 * @param\x09y\x09The y coordinate.\n\x09\x09 * @param\x09z\x09The z coordinate.\n\x09\x09 * @param\x09w\x09The width.\n\x09\x09 *\n\x09\x09 * @return\x09""A FQuat.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "\\fn  static FQuat UKinectFunctionLibrary::MakeQuat(float x, float y, float z, float w);\n\n\\brief       Makes a quaternion.\n\n\\param       x       The x coordinate. \\param        y       The y coordinate. \\param        z       The z coordinate. \\param        w       The\nscalar.\n\n\\return      A FQuat.\n\n@author      Leon Rosengarten\n@param       x       The x coordinate.\n@param       y       The y coordinate.\n@param       z       The z coordinate.\n@param       w       The width.\n\n@return      A FQuat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "MakeQuat", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventMakeQuat_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics
	{
		struct KinectFunctionLibrary_eventMakeVector4_Parms
		{
			float X;
			float Y;
			float Z;
			float W;
			FVector4 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_W;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, X), METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, Y), METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, Z), METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_W_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, W), METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_W_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_W_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMakeVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_W,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Makes vector 4.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09X\x09The X coordinate.\n\x09\x09 * @param\x09Y\x09The Y coordinate.\n\x09\x09 * @param\x09Z\x09The Z coordinate.\n\x09\x09 * @param\x09W\x09The width.\n\x09\x09 *\n\x09\x09 * @return\x09""A FVector4.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes vector 4.\n\n@author      Leon Rosengarten\n\n@param       X       The X coordinate.\n@param       Y       The Y coordinate.\n@param       Z       The Z coordinate.\n@param       W       The width.\n\n@return      A FVector4." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "MakeVector4", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventMakeVector4_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics
	{
		struct KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms
		{
			UTexture2D* InTexture;
			UTexture2D* DepthTexture;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DepthTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::NewProp_DepthTexture = { "DepthTexture", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms, DepthTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::NewProp_InTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::NewProp_DepthTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "MapColorFrameToDepthSpace", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventMapColorFrameToDepthSpace_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics
	{
		struct KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms
		{
			FBody BodyToMirror;
			float PosLocScale;
			TArray<FTransform> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyToMirror_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyToMirror;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosLocScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_BodyToMirror_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_BodyToMirror = { "BodyToMirror", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms, BodyToMirror), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_BodyToMirror_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_BodyToMirror_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_PosLocScale = { "PosLocScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms, PosLocScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_BodyToMirror,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_PosLocScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|CoordianteMapper" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Mirror kinect skeleton.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 *\n\x09\x09 * @param\x09""BodyToMirror\x09The body to mirror.\n\x09\x09 *\n\x09\x09 * @return\x09""A TArray&lt;FTransform&gt;\n\x09\x09 **************************************************************************************************/" },
		{ "CPP_Default_PosLocScale", "1.000000" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Mirror kinect skeleton.\n\n@author      Leon Rosengarten\n\n@param       BodyToMirror    The body to mirror.\n\n@return      A TArray&lt;FTransform&gt;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "MirrorKinectSkeleton", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventMirrorKinectSkeleton_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics
	{
		struct KinectFunctionLibrary_eventMultiplyQuat_Parms
		{
			FQuat A;
			FQuat B;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMultiplyQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMultiplyQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventMultiplyQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static FQuat UKinectFunctionLibrary::MultiplyQuat(const FQuat&amp; A, const FQuat&amp;\n\x09\x09 * B);\n\x09\x09 *\n\x09\x09 * \\brief\x09Multiply quaternion.\n\x09\x09 *\n\x09\x09 * \\param\x09""A\x09The const FQuat&amp; to process. \\param\x09""B\x09The const FQuat&amp; to process.\n\x09\x09 *\n\x09\x09 * \\return\x09""A FQuat.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09""A\x09The const FQuat&amp; to process.\n\x09\x09 * @param\x09""B\x09The const FQuat&amp; to process.\n\x09\x09 *\n\x09\x09 * @return\x09""A FQuat.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "\\fn  static FQuat UKinectFunctionLibrary::MultiplyQuat(const FQuat&amp; A, const FQuat&amp;\nB);\n\n\\brief       Multiply quaternion.\n\n\\param       A       The const FQuat&amp; to process. \\param B       The const FQuat&amp; to process.\n\n\\return      A FQuat.\n\n@author      Leon Rosengarten\n@param       A       The const FQuat&amp; to process.\n@param       B       The const FQuat&amp; to process.\n\n@return      A FQuat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "MultiplyQuat", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventMultiplyQuat_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics
	{
		struct KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms
		{
			FQuat InQuat;
			FVector OutAxis;
			float OutAngle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_InQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_InQuat = { "InQuat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms, InQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_InQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_InQuat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_OutAxis = { "OutAxis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms, OutAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_OutAngle = { "OutAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms, OutAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_InQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_OutAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::NewProp_OutAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static void UKinectFunctionLibrary::QuatToAxisOutAngle(const FQuat&amp; InQuat,\n\x09\x09 * FVector&amp; OutAxis, float &amp;OutAngle);\n\x09\x09 *\n\x09\x09 * \\brief\x09Quaternion to axis out angle.\n\x09\x09 *\n\x09\x09 * \\param\x09InQuat\x09\x09\x09\x09The in quaternion. \\param [in,out]\x09OutAxis \x09The out axis. \\param [in,out]\n\x09\x09 * OutAngle\x09The out angle.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09InQuat\x09\x09\x09\x09The in quaternion.\n\x09\x09 * @param [in,out]\x09OutAxis \x09The out axis.\n\x09\x09 * @param [in,out]\x09OutAngle\x09The out angle.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "\\fn  static void UKinectFunctionLibrary::QuatToAxisOutAngle(const FQuat&amp; InQuat,\nFVector&amp; OutAxis, float &amp;OutAngle);\n\n\\brief       Quaternion to axis out angle.\n\n\\param       InQuat                          The in quaternion. \\param [in,out]      OutAxis         The out axis. \\param [in,out]\nOutAngle     The out angle.\n\n@author      Leon Rosengarten\n@param       InQuat                          The in quaternion.\n@param [in,out]      OutAxis         The out axis.\n@param [in,out]      OutAngle        The out angle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "QuatToAxisOutAngle", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventQuatToAxisOutAngle_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics
	{
		struct KinectFunctionLibrary_eventRadiansToDegrees_Parms
		{
			float InRadians;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRadians_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRadians;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::NewProp_InRadians_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::NewProp_InRadians = { "InRadians", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventRadiansToDegrees_Parms, InRadians), METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::NewProp_InRadians_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::NewProp_InRadians_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventRadiansToDegrees_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::NewProp_InRadians,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static float UKinectFunctionLibrary::RadiansToDegrees(const float &amp;InRadians);\n\x09\x09 *\n\x09\x09 * \\brief\x09Radians to degrees.\n\x09\x09 *\n\x09\x09 * \\param\x09InRadians\x09The in in radians.\n\x09\x09 *\n\x09\x09 * \\return\x09""A float.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09InRadians\x09The in in radians.\n\x09\x09 *\n\x09\x09 * @return\x09""A float.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "\\fn  static float UKinectFunctionLibrary::RadiansToDegrees(const float &amp;InRadians);\n\n\\brief       Radians to degrees.\n\n\\param       InRadians       The in in radians.\n\n\\return      A float.\n\n@author      Leon Rosengarten\n@param       InRadians       The in in radians.\n\n@return      A float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "RadiansToDegrees", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventRadiansToDegrees_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics
	{
		struct KinectFunctionLibrary_eventRotatorToQuat_Parms
		{
			FRotator TheRotator;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheRotator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::NewProp_TheRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::NewProp_TheRotator = { "TheRotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventRotatorToQuat_Parms, TheRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::NewProp_TheRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::NewProp_TheRotator_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventRotatorToQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::NewProp_TheRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static FQuat UKinectFunctionLibrary::RotatorToQuat(const FRotator&amp; TheRotator);\n\x09\x09 *\n\x09\x09 * \\brief\x09Rotator to quaternion.\n\x09\x09 *\n\x09\x09 * \\param\x09TheRotator\x09the rotator.\n\x09\x09 *\n\x09\x09 * \\return\x09""A FQuat.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09TheRotator\x09the rotator.\n\x09\x09 *\n\x09\x09 * @return\x09""A FQuat.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "\\fn  static FQuat UKinectFunctionLibrary::RotatorToQuat(const FRotator&amp; TheRotator);\n\n\\brief       Rotator to quaternion.\n\n\\param       TheRotator      the rotator.\n\n\\return      A FQuat.\n\n@author      Leon Rosengarten\n@param       TheRotator      the rotator.\n\n@return      A FQuat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "RotatorToQuat", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventRotatorToQuat_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**\n\x09\x09 * Shutdown sensor.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @date\x09""26-13-2015\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Shutdown sensor.\n\n@author      Leon Rosengarten\n@date        26-13-2015" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "ShutdownSensor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**\n\x09\x09 * Starts a sensor.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @date\x09""26-13-2015\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "Starts a sensor.\n\n@author      Leon Rosengarten\n@date        26-13-2015" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "StartSensor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics
	{
		struct KinectFunctionLibrary_eventVec4QuatToRotator_Parms
		{
			FVector4 TheVec;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheVec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::NewProp_TheVec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::NewProp_TheVec = { "TheVec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventVec4QuatToRotator_Parms, TheVec), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::NewProp_TheVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::NewProp_TheVec_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectFunctionLibrary_eventVec4QuatToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::NewProp_TheVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Math" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * \\fn\x09static FRotator UKinectFunctionLibrary::Vec4QuatToRotator(const FVector4&amp; TheVec);\n\x09\x09 *\n\x09\x09 * \\brief\x09Vector 4 quaternion to rotator.\n\x09\x09 *\n\x09\x09 * \\param\x09TheVec\x09the vector.\n\x09\x09 *\n\x09\x09 * \\return\x09""A FRotator.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09TheVec\x09the vector.\n\x09\x09 *\n\x09\x09 * @return\x09""A FRotator.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
		{ "ToolTip", "\\fn  static FRotator UKinectFunctionLibrary::Vec4QuatToRotator(const FVector4&amp; TheVec);\n\n\\brief       Vector 4 quaternion to rotator.\n\n\\param       TheVec  the vector.\n\n\\return      A FRotator.\n\n@author      Leon Rosengarten\n@param       TheVec  the vector.\n\n@return      A FRotator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectFunctionLibrary, nullptr, "Vec4QuatToRotator", nullptr, nullptr, sizeof(KinectFunctionLibrary_eventVec4QuatToRotator_Parms), Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectFunctionLibrary_NoRegister()
	{
		return UKinectFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKinectFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKinectFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakBody, "BreakBody" }, // 667727545
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakBodyFrame, "BreakBodyFrame" }, // 1621671628
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakKinectBone, "BreakKinectBone" }, // 3395790143
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakQuat, "BreakQuat" }, // 1828608012
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_BreakVector4, "BreakVector4" }, // 2436539943
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_Conv_QuatToRotator, "Conv_QuatToRotator" }, // 2938779169
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_Conv_Vector4ToQuat, "Conv_Vector4ToQuat" }, // 1028890565
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_ConvertBodyPointToScreenPoint, "ConvertBodyPointToScreenPoint" }, // 4205695814
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_ConvertRotatorToLocal, "ConvertRotatorToLocal" }, // 417146868
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_CreateStreamTexture, "CreateStreamTexture" }, // 1522168619
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_DegreesToRadians, "DegreesToRadians" }, // 3546992602
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_EnableBodyJoystick, "EnableBodyJoystick" }, // 67230954
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetBone, "GetBone" }, // 2214656726
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransform, "GetBoneFTransform" }, // 804603349
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneFTransformRelToBone, "GetBoneFTransformRelToBone" }, // 2787615380
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetBoneParent, "GetBoneParent" }, // 4060958254
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetKinectEventManager, "GetKinectEventManager" }, // 765040098
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_GetSmoothedJoint, "GetSmoothedJoint" }, // 4257268794
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_InverseQuat, "InverseQuat" }, // 2083294860
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_InverseTransform, "InverseTransform" }, // 2279299353
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_MakeQuat, "MakeQuat" }, // 1080563107
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_MakeVector4, "MakeVector4" }, // 551301636
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_MapColorFrameToDepthSpace, "MapColorFrameToDepthSpace" }, // 4085797435
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_MirrorKinectSkeleton, "MirrorKinectSkeleton" }, // 451154955
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_MultiplyQuat, "MultiplyQuat" }, // 821213031
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_QuatToAxisOutAngle, "QuatToAxisOutAngle" }, // 1162600718
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_RadiansToDegrees, "RadiansToDegrees" }, // 3757990853
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_RotatorToQuat, "RotatorToQuat" }, // 1144615632
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_ShutdownSensor, "ShutdownSensor" }, // 2045718206
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_StartSensor, "StartSensor" }, // 1293373125
		{ &Z_Construct_UFunction_UKinectFunctionLibrary_Vec4QuatToRotator, "Vec4QuatToRotator" }, // 3946440385
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KinectFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/KinectFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectFunctionLibrary_Statics::ClassParams = {
		&UKinectFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKinectFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectFunctionLibrary, 1243386748);
	template<> KINECTV2_API UClass* StaticClass<UKinectFunctionLibrary>()
	{
		return UKinectFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectFunctionLibrary(Z_Construct_UClass_UKinectFunctionLibrary, &UKinectFunctionLibrary::StaticClass, TEXT("/Script/KinectV2"), TEXT("UKinectFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
