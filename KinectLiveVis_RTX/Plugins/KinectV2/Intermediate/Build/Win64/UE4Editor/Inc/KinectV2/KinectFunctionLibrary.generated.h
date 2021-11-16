// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EKinectStreamType : uint8;
struct FBoneOrientationDoubleExponentialFilter;
struct FBody;
class UKinectEventManager;
struct FTransform;
struct FVector;
struct FVector2D;
struct FQuat;
struct FRotator;
struct FKinectBone;
struct FVector4;
struct FBodyFrame;
#ifdef KINECTV2_KinectFunctionLibrary_generated_h
#error "KinectFunctionLibrary.generated.h already included, missing '#pragma once' in KinectFunctionLibrary.h"
#endif
#define KINECTV2_KinectFunctionLibrary_generated_h

#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyFrame_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KINECTV2_API UScriptStruct* StaticStruct<struct FBodyFrame>();

#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBody_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KINECTV2_API UScriptStruct* StaticStruct<struct FBody>();

#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKinectBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KINECTV2_API UScriptStruct* StaticStruct<struct FKinectBone>();

#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_SPARSE_DATA
#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMapColorFrameToDepthSpace); \
	DECLARE_FUNCTION(execCreateStreamTexture); \
	DECLARE_FUNCTION(execGetSmoothedJoint); \
	DECLARE_FUNCTION(execShutdownSensor); \
	DECLARE_FUNCTION(execStartSensor); \
	DECLARE_FUNCTION(execGetKinectEventManager); \
	DECLARE_FUNCTION(execMirrorKinectSkeleton); \
	DECLARE_FUNCTION(execGetBoneFTransformRelToBone); \
	DECLARE_FUNCTION(execConvertBodyPointToScreenPoint); \
	DECLARE_FUNCTION(execEnableBodyJoystick); \
	DECLARE_FUNCTION(execInverseQuat); \
	DECLARE_FUNCTION(execConvertRotatorToLocal); \
	DECLARE_FUNCTION(execInverseTransform); \
	DECLARE_FUNCTION(execGetBoneParent); \
	DECLARE_FUNCTION(execRadiansToDegrees); \
	DECLARE_FUNCTION(execDegreesToRadians); \
	DECLARE_FUNCTION(execQuatToAxisOutAngle); \
	DECLARE_FUNCTION(execMultiplyQuat); \
	DECLARE_FUNCTION(execBreakKinectBone); \
	DECLARE_FUNCTION(execBreakBody); \
	DECLARE_FUNCTION(execMakeVector4); \
	DECLARE_FUNCTION(execBreakVector4); \
	DECLARE_FUNCTION(execGetBone); \
	DECLARE_FUNCTION(execGetBoneFTransform); \
	DECLARE_FUNCTION(execBreakBodyFrame); \
	DECLARE_FUNCTION(execRotatorToQuat); \
	DECLARE_FUNCTION(execVec4QuatToRotator); \
	DECLARE_FUNCTION(execConv_Vector4ToQuat); \
	DECLARE_FUNCTION(execConv_QuatToRotator); \
	DECLARE_FUNCTION(execBreakQuat); \
	DECLARE_FUNCTION(execMakeQuat);


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMapColorFrameToDepthSpace); \
	DECLARE_FUNCTION(execCreateStreamTexture); \
	DECLARE_FUNCTION(execGetSmoothedJoint); \
	DECLARE_FUNCTION(execShutdownSensor); \
	DECLARE_FUNCTION(execStartSensor); \
	DECLARE_FUNCTION(execGetKinectEventManager); \
	DECLARE_FUNCTION(execMirrorKinectSkeleton); \
	DECLARE_FUNCTION(execGetBoneFTransformRelToBone); \
	DECLARE_FUNCTION(execConvertBodyPointToScreenPoint); \
	DECLARE_FUNCTION(execEnableBodyJoystick); \
	DECLARE_FUNCTION(execInverseQuat); \
	DECLARE_FUNCTION(execConvertRotatorToLocal); \
	DECLARE_FUNCTION(execInverseTransform); \
	DECLARE_FUNCTION(execGetBoneParent); \
	DECLARE_FUNCTION(execRadiansToDegrees); \
	DECLARE_FUNCTION(execDegreesToRadians); \
	DECLARE_FUNCTION(execQuatToAxisOutAngle); \
	DECLARE_FUNCTION(execMultiplyQuat); \
	DECLARE_FUNCTION(execBreakKinectBone); \
	DECLARE_FUNCTION(execBreakBody); \
	DECLARE_FUNCTION(execMakeVector4); \
	DECLARE_FUNCTION(execBreakVector4); \
	DECLARE_FUNCTION(execGetBone); \
	DECLARE_FUNCTION(execGetBoneFTransform); \
	DECLARE_FUNCTION(execBreakBodyFrame); \
	DECLARE_FUNCTION(execRotatorToQuat); \
	DECLARE_FUNCTION(execVec4QuatToRotator); \
	DECLARE_FUNCTION(execConv_Vector4ToQuat); \
	DECLARE_FUNCTION(execConv_QuatToRotator); \
	DECLARE_FUNCTION(execBreakQuat); \
	DECLARE_FUNCTION(execMakeQuat);


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKinectFunctionLibrary(); \
	friend struct Z_Construct_UClass_UKinectFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UKinectFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KinectV2"), NO_API) \
	DECLARE_SERIALIZER(UKinectFunctionLibrary)


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_INCLASS \
private: \
	static void StaticRegisterNativesUKinectFunctionLibrary(); \
	friend struct Z_Construct_UClass_UKinectFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UKinectFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KinectV2"), NO_API) \
	DECLARE_SERIALIZER(UKinectFunctionLibrary)


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectFunctionLibrary(UKinectFunctionLibrary&&); \
	NO_API UKinectFunctionLibrary(const UKinectFunctionLibrary&); \
public:


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectFunctionLibrary(UKinectFunctionLibrary&&); \
	NO_API UKinectFunctionLibrary(const UKinectFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectFunctionLibrary)


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_PRIVATE_PROPERTY_OFFSET
#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_274_PROLOG
#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_SPARSE_DATA \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_RPC_WRAPPERS \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_INCLASS \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_SPARSE_DATA \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_INCLASS_NO_PURE_DECLS \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h_278_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KinectFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KINECTV2_API UClass* StaticClass<class UKinectFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectFunctionLibrary_h


#define FOREACH_ENUM_EKINECTSTREAMTYPE(op) \
	op(EKinectStreamType::KST_Color) \
	op(EKinectStreamType::KST_Depth) \
	op(EKinectStreamType::KST_IR) \
	op(EKinectStreamType::KST_BodyIndex) 

enum class EKinectStreamType : uint8;
template<> KINECTV2_API UEnum* StaticEnum<EKinectStreamType>();

#define FOREACH_ENUM_EHANDSTATE(op) \
	op(EHandState::HandState_Unknown) \
	op(EHandState::HandState_NotTracked) \
	op(EHandState::HandState_Open) \
	op(EHandState::HandState_Closed) \
	op(EHandState::HandState_Lasso) 
#define FOREACH_ENUM_ETRACKINGSTATE(op) \
	op(ETrackingState::TrackingState_NotTracked) \
	op(ETrackingState::TrackingState_Inferred) \
	op(ETrackingState::TrackingState_Tracked) 
#define FOREACH_ENUM_EJOINT(op) \
	op(EJoint::JointType_SpineBase) \
	op(EJoint::JointType_SpineMid) \
	op(EJoint::JointType_Neck) \
	op(EJoint::JointType_Head) \
	op(EJoint::JointType_ShoulderLeft) \
	op(EJoint::JointType_ElbowLeft) \
	op(EJoint::JointType_WristLeft) \
	op(EJoint::JointType_HandLeft) \
	op(EJoint::JointType_ShoulderRight) \
	op(EJoint::JointType_ElbowRight) \
	op(EJoint::JointType_WristRight) \
	op(EJoint::JointType_HandRight) \
	op(EJoint::JointType_HipLeft) \
	op(EJoint::JointType_KneeLeft) \
	op(EJoint::JointType_AnkleLeft) \
	op(EJoint::JointType_FootLeft) \
	op(EJoint::JointType_HipRight) \
	op(EJoint::JointType_KneeRight) \
	op(EJoint::JointType_AnkleRight) \
	op(EJoint::JointType_FootRight) \
	op(EJoint::JointType_SpineShoulder) \
	op(EJoint::JointType_HandTipLeft) \
	op(EJoint::JointType_ThumbLeft) \
	op(EJoint::JointType_HandTipRight) \
	op(EJoint::JointType_ThumbRight) \
	op(EJoint::JointType_Count) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
