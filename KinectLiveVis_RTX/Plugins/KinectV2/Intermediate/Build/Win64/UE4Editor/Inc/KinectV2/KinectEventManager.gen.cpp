// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KinectV2/Classes/KinectEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectEventManager() {}
// Cross Module References
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_KinectV2();
	KINECTV2_API UEnum* Z_Construct_UEnum_KinectV2_EKinectPlayer();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBodyFrame();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
	KINECTV2_API UScriptStruct* Z_Construct_UScriptStruct_FBody();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature();
	KINECTV2_API UFunction* Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectEventManager_NoRegister();
	KINECTV2_API UClass* Z_Construct_UClass_UKinectEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventKinSkeletonEvent_Parms
		{
			TEnumAsByte<EKinectPlayer::Type> KinectPlayer;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::NewProp_KinectPlayer = { "KinectPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventKinSkeletonEvent_Parms, KinectPlayer), Z_Construct_UEnum_KinectV2_EKinectPlayer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::NewProp_KinectPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "KinSkeletonEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventKinSkeletonEvent_Parms), Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_KinSkeletonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventKinectRawBodyFrameEvent_Parms
		{
			FBodyFrame BodyFrame;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::NewProp_BodyFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::NewProp_BodyFrame = { "BodyFrame", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventKinectRawBodyFrameEvent_Parms, BodyFrame), Z_Construct_UScriptStruct_FBodyFrame, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::NewProp_BodyFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::NewProp_BodyFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::NewProp_BodyFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "KinectRawBodyFrameEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventKinectRawBodyFrameEvent_Parms), Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventKinectBodyEventSigneture_Parms
		{
			TEnumAsByte<EAutoReceiveInput::Type> KinectPlayer;
			FBody Skeleton;
			int32 SkeletonIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_KinectPlayer = { "KinectPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventKinectBodyEventSigneture_Parms, KinectPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_Skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventKinectBodyEventSigneture_Parms, Skeleton), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_SkeletonIndex = { "SkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventKinectBodyEventSigneture_Parms, SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_KinectPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_Skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::NewProp_SkeletonIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "KinectBodyEventSigneture__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventKinectBodyEventSigneture_Parms), Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventNewKinectBodyIndexFrameEvent_Parms
		{
			const UTexture2D* BodyIndexFrameTexture;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyIndexFrameTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyIndexFrameTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::NewProp_BodyIndexFrameTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::NewProp_BodyIndexFrameTexture = { "BodyIndexFrameTexture", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventNewKinectBodyIndexFrameEvent_Parms, BodyIndexFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::NewProp_BodyIndexFrameTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::NewProp_BodyIndexFrameTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::NewProp_BodyIndexFrameTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "NewKinectBodyIndexFrameEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventNewKinectBodyIndexFrameEvent_Parms), Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventNewKinectInfraredFrameEvent_Parms
		{
			const UTexture2D* InfraredFrameTexture;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfraredFrameTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfraredFrameTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::NewProp_InfraredFrameTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::NewProp_InfraredFrameTexture = { "InfraredFrameTexture", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventNewKinectInfraredFrameEvent_Parms, InfraredFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::NewProp_InfraredFrameTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::NewProp_InfraredFrameTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::NewProp_InfraredFrameTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "NewKinectInfraredFrameEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventNewKinectInfraredFrameEvent_Parms), Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventNewKinectDepthFrameEvent_Parms
		{
			const UTexture2D* DepthFrameTexture;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthFrameTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DepthFrameTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::NewProp_DepthFrameTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::NewProp_DepthFrameTexture = { "DepthFrameTexture", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventNewKinectDepthFrameEvent_Parms, DepthFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::NewProp_DepthFrameTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::NewProp_DepthFrameTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::NewProp_DepthFrameTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "NewKinectDepthFrameEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventNewKinectDepthFrameEvent_Parms), Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventNewKinectColorFrameEvent_Parms
		{
			const UTexture2D* ColorFrameTexture;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorFrameTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorFrameTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::NewProp_ColorFrameTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::NewProp_ColorFrameTexture = { "ColorFrameTexture", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventNewKinectColorFrameEvent_Parms, ColorFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::NewProp_ColorFrameTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::NewProp_ColorFrameTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::NewProp_ColorFrameTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "NewKinectColorFrameEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventNewKinectColorFrameEvent_Parms), Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventSkeletonLostEvent_Parms
		{
			TEnumAsByte<EAutoReceiveInput::Type> KinectPlayerLost;
			int32 SkeletonIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayerLost;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::NewProp_KinectPlayerLost = { "KinectPlayerLost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventSkeletonLostEvent_Parms, KinectPlayerLost), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::NewProp_SkeletonIndex = { "SkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventSkeletonLostEvent_Parms, SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::NewProp_KinectPlayerLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::NewProp_SkeletonIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "SkeletonLostEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventSkeletonLostEvent_Parms), Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics
	{
		struct _Script_KinectV2_eventNewSkeletonDetectedEvent_Parms
		{
			FBody NewSkeleton;
			int32 SkeletonIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSkeleton;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::NewProp_NewSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::NewProp_NewSkeleton = { "NewSkeleton", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventNewSkeletonDetectedEvent_Parms, NewSkeleton), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::NewProp_NewSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::NewProp_NewSkeleton_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::NewProp_SkeletonIndex = { "SkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_KinectV2_eventNewSkeletonDetectedEvent_Parms, SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::NewProp_NewSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::NewProp_SkeletonIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KinectV2, nullptr, "NewSkeletonDetectedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_KinectV2_eventNewSkeletonDetectedEvent_Parms), Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EKinectPlayer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KinectV2_EKinectPlayer, Z_Construct_UPackage__Script_KinectV2(), TEXT("EKinectPlayer"));
		}
		return Singleton;
	}
	template<> KINECTV2_API UEnum* StaticEnum<EKinectPlayer::Type>()
	{
		return EKinectPlayer_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKinectPlayer(EKinectPlayer_StaticEnum, TEXT("/Script/KinectV2"), TEXT("EKinectPlayer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KinectV2_EKinectPlayer_Hash() { return 2245312084U; }
	UEnum* Z_Construct_UEnum_KinectV2_EKinectPlayer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KinectV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKinectPlayer"), 0, Get_Z_Construct_UEnum_KinectV2_EKinectPlayer_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKinectPlayer::Player0", (int64)EKinectPlayer::Player0 },
				{ "EKinectPlayer::Player1", (int64)EKinectPlayer::Player1 },
				{ "EKinectPlayer::Player2", (int64)EKinectPlayer::Player2 },
				{ "EKinectPlayer::Player3", (int64)EKinectPlayer::Player3 },
				{ "EKinectPlayer::Player4", (int64)EKinectPlayer::Player4 },
				{ "EKinectPlayer::Player5", (int64)EKinectPlayer::Player5 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//#include \"KinectBodyFrameListenerInterface.h\"\n" },
				{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
				{ "Player0.Name", "EKinectPlayer::Player0" },
				{ "Player1.Name", "EKinectPlayer::Player1" },
				{ "Player2.Name", "EKinectPlayer::Player2" },
				{ "Player3.Name", "EKinectPlayer::Player3" },
				{ "Player4.Name", "EKinectPlayer::Player4" },
				{ "Player5.Name", "EKinectPlayer::Player5" },
				{ "ToolTip", "#include \"KinectBodyFrameListenerInterface.h\"" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KinectV2,
				nullptr,
				"EKinectPlayer",
				"EKinectPlayer::Type",
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
	DEFINE_FUNCTION(UKinectEventManager::execEnableMouseControl)
	{
		P_GET_UBOOL(Z_Param_MouseControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableMouseControl(Z_Param_MouseControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKinectEventManager::execAssigneSkeletonToPlayer)
	{
		P_GET_STRUCT_REF(FBody,Z_Param_Out_Body);
		P_GET_PROPERTY(FByteProperty,Z_Param_Player);
		P_GET_UBOOL(Z_Param_SetAsMouseController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssigneSkeletonToPlayer(Z_Param_Out_Body,EAutoReceiveInput::Type(Z_Param_Player),Z_Param_SetAsMouseController);
		P_NATIVE_END;
	}
	static FName NAME_UKinectEventManager_NewSkeletonDetected = FName(TEXT("NewSkeletonDetected"));
	void UKinectEventManager::NewSkeletonDetected(FBody const& Skeleton)
	{
		KinectEventManager_eventNewSkeletonDetected_Parms Parms;
		Parms.Skeleton=Skeleton;
		ProcessEvent(FindFunctionChecked(NAME_UKinectEventManager_NewSkeletonDetected),&Parms);
	}
	static FName NAME_UKinectEventManager_SkeletonLost = FName(TEXT("SkeletonLost"));
	void UKinectEventManager::SkeletonLost(EAutoReceiveInput::Type KinectPlayer, int32 SkeletonIndex)
	{
		KinectEventManager_eventSkeletonLost_Parms Parms;
		Parms.KinectPlayer=KinectPlayer;
		Parms.SkeletonIndex=SkeletonIndex;
		ProcessEvent(FindFunctionChecked(NAME_UKinectEventManager_SkeletonLost),&Parms);
	}
	void UKinectEventManager::StaticRegisterNativesUKinectEventManager()
	{
		UClass* Class = UKinectEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssigneSkeletonToPlayer", &UKinectEventManager::execAssigneSkeletonToPlayer },
			{ "EnableMouseControl", &UKinectEventManager::execEnableMouseControl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics
	{
		struct KinectEventManager_eventAssigneSkeletonToPlayer_Parms
		{
			FBody Body;
			TEnumAsByte<EAutoReceiveInput::Type> Player;
			bool SetAsMouseController;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Player;
		static void NewProp_SetAsMouseController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetAsMouseController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectEventManager_eventAssigneSkeletonToPlayer_Parms, Body), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectEventManager_eventAssigneSkeletonToPlayer_Parms, Player), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_SetAsMouseController_SetBit(void* Obj)
	{
		((KinectEventManager_eventAssigneSkeletonToPlayer_Parms*)Obj)->SetAsMouseController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_SetAsMouseController = { "SetAsMouseController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KinectEventManager_eventAssigneSkeletonToPlayer_Parms), &Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_SetAsMouseController_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::NewProp_SetAsMouseController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Assign skeleton to player.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09""Body\x09\x09\x09\x09\x09The body.\n\x09\x09 * @param\x09Player\x09\x09\x09\x09\x09The player.\n\x09\x09 * @param\x09SetAsMouseController\x09true to set as mouse controller.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "Assign skeleton to player.\n\n@author      Leon Rosengarten\n@param       Body                                    The body.\n@param       Player                                  The player.\n@param       SetAsMouseController    true to set as mouse controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectEventManager, nullptr, "AssigneSkeletonToPlayer", nullptr, nullptr, sizeof(KinectEventManager_eventAssigneSkeletonToPlayer_Parms), Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics
	{
		struct KinectEventManager_eventEnableMouseControl_Parms
		{
			bool MouseControl;
		};
		static void NewProp_MouseControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MouseControl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::NewProp_MouseControl_SetBit(void* Obj)
	{
		((KinectEventManager_eventEnableMouseControl_Parms*)Obj)->MouseControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::NewProp_MouseControl = { "MouseControl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KinectEventManager_eventEnableMouseControl_Parms), &Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::NewProp_MouseControl_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::NewProp_MouseControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect" },
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Enables the mouse control.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09MouseControl\x09true to mouse control.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "Enables the mouse control.\n\n@author      Leon Rosengarten\n@param       MouseControl    true to mouse control." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectEventManager, nullptr, "EnableMouseControl", nullptr, nullptr, sizeof(KinectEventManager_eventEnableMouseControl_Parms), Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectEventManager_EnableMouseControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectEventManager_EnableMouseControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::NewProp_Skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectEventManager_eventNewSkeletonDetected_Parms, Skeleton), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::NewProp_Skeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Creates a new skeleton detected.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09Skeleton\x09The skeleton.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "Creates a new skeleton detected.\n\n@author      Leon Rosengarten\n@param       Skeleton        The skeleton." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectEventManager, nullptr, "NewSkeletonDetected", nullptr, nullptr, sizeof(KinectEventManager_eventNewSkeletonDetected_Parms), Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::NewProp_KinectPlayer = { "KinectPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectEventManager_eventSkeletonLost_Parms, KinectPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::NewProp_SkeletonIndex = { "SkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KinectEventManager_eventSkeletonLost_Parms, SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::NewProp_KinectPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::NewProp_SkeletonIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**************************************************************************************************\n\x09\x09 * Skeleton lost.\n\x09\x09 *\n\x09\x09 * @author\x09Leon Rosengarten\n\x09\x09 * @param\x09KinectPlayer\x09The kinect player.\n\x09\x09 **************************************************************************************************/" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "Skeleton lost.\n\n@author      Leon Rosengarten\n@param       KinectPlayer    The kinect player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectEventManager, nullptr, "SkeletonLost", nullptr, nullptr, sizeof(KinectEventManager_eventSkeletonLost_Parms), Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectEventManager_SkeletonLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectEventManager_SkeletonLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectEventManager_NoRegister()
	{
		return UKinectEventManager::StaticClass();
	}
	struct Z_Construct_UClass_UKinectEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSkeletonDetectedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewSkeletonDetectedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectBodyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_KinectBodyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewKinectColorFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewKinectColorFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewKinectDepthFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewKinectDepthFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewKinectInfraredFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewKinectInfraredFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawBodyFrameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RawBodyFrameEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonLostEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SkeletonLostEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBodyIndexFrameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBodyIndexFrameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KinectV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKinectEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKinectEventManager_AssigneSkeletonToPlayer, "AssigneSkeletonToPlayer" }, // 2115639091
		{ &Z_Construct_UFunction_UKinectEventManager_EnableMouseControl, "EnableMouseControl" }, // 3649721936
		{ &Z_Construct_UFunction_UKinectEventManager_NewSkeletonDetected, "NewSkeletonDetected" }, // 3931277206
		{ &Z_Construct_UFunction_UKinectEventManager_SkeletonLost, "SkeletonLost" }, // 3114072550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KinectEventManager.h" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::NewProp_NewSkeletonDetectedEvent_MetaData[] = {
		{ "Category", "Kinect|EventDispatchers" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKinectEventManager_Statics::NewProp_NewSkeletonDetectedEvent = { "NewSkeletonDetectedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectEventManager, NewSkeletonDetectedEvent), Z_Construct_UDelegateFunction_KinectV2_NewSkeletonDetectedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_NewSkeletonDetectedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_NewSkeletonDetectedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::NewProp_KinectBodyEvent_MetaData[] = {
		{ "Category", "Kinect|EventDispatchers" },
		{ "Comment", "///< Called when skeleton with new TrackingId Is detected\n" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "< Called when skeleton with new TrackingId Is detected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKinectEventManager_Statics::NewProp_KinectBodyEvent = { "KinectBodyEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectEventManager, KinectBodyEvent), Z_Construct_UDelegateFunction_KinectV2_KinectBodyEventSigneture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_KinectBodyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_KinectBodyEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectColorFrame_MetaData[] = {
		{ "Category", "Kinect|EventDispatchers" },
		{ "Comment", "///< Called when new body frame is generated and the TrackingId of that body is assigned\n" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "< Called when new body frame is generated and the TrackingId of that body is assigned" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectColorFrame = { "OnNewKinectColorFrame", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectEventManager, OnNewKinectColorFrame), Z_Construct_UDelegateFunction_KinectV2_NewKinectColorFrameEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectColorFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectColorFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectDepthFrame_MetaData[] = {
		{ "Category", "Kinect|EventDispatchers" },
		{ "Comment", "///< Called when new color frame is generated\n" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "< Called when new color frame is generated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectDepthFrame = { "OnNewKinectDepthFrame", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectEventManager, OnNewKinectDepthFrame), Z_Construct_UDelegateFunction_KinectV2_NewKinectDepthFrameEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectDepthFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectDepthFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectInfraredFrame_MetaData[] = {
		{ "Category", "Kinect|EventDispatchers" },
		{ "Comment", "///< Called when new depth frame is generated\n" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "< Called when new depth frame is generated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectInfraredFrame = { "OnNewKinectInfraredFrame", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectEventManager, OnNewKinectInfraredFrame), Z_Construct_UDelegateFunction_KinectV2_NewKinectInfraredFrameEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectInfraredFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectInfraredFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::NewProp_RawBodyFrameEvent_MetaData[] = {
		{ "Category", "Kinect|EventDispatchers" },
		{ "Comment", "///< Called when new IR frame is generated\n" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "< Called when new IR frame is generated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKinectEventManager_Statics::NewProp_RawBodyFrameEvent = { "RawBodyFrameEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectEventManager, RawBodyFrameEvent), Z_Construct_UDelegateFunction_KinectV2_KinectRawBodyFrameEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_RawBodyFrameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_RawBodyFrameEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::NewProp_SkeletonLostEvent_MetaData[] = {
		{ "Category", "Kinect|EventDispatchers" },
		{ "Comment", "///< Called for every body frame generated\n" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "< Called for every body frame generated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKinectEventManager_Statics::NewProp_SkeletonLostEvent = { "SkeletonLostEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectEventManager, SkeletonLostEvent), Z_Construct_UDelegateFunction_KinectV2_SkeletonLostEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_SkeletonLostEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_SkeletonLostEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnBodyIndexFrameEvent_MetaData[] = {
		{ "Category", "Kinect|EventDispatchers" },
		{ "Comment", "///< Called when a skeleton with assigned TrackingId is no longer tracked\n" },
		{ "ModuleRelativePath", "Classes/KinectEventManager.h" },
		{ "ToolTip", "< Called when a skeleton with assigned TrackingId is no longer tracked" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnBodyIndexFrameEvent = { "OnBodyIndexFrameEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKinectEventManager, OnBodyIndexFrameEvent), Z_Construct_UDelegateFunction_KinectV2_NewKinectBodyIndexFrameEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnBodyIndexFrameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnBodyIndexFrameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKinectEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectEventManager_Statics::NewProp_NewSkeletonDetectedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectEventManager_Statics::NewProp_KinectBodyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectColorFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectDepthFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnNewKinectInfraredFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectEventManager_Statics::NewProp_RawBodyFrameEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectEventManager_Statics::NewProp_SkeletonLostEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectEventManager_Statics::NewProp_OnBodyIndexFrameEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectEventManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectEventManager_Statics::ClassParams = {
		&UKinectEventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKinectEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKinectEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKinectEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectEventManager, 3544746146);
	template<> KINECTV2_API UClass* StaticClass<UKinectEventManager>()
	{
		return UKinectEventManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectEventManager(Z_Construct_UClass_UKinectEventManager, &UKinectEventManager::StaticClass, TEXT("/Script/KinectV2"), TEXT("UKinectEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
