// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FBody;
#ifdef KINECTV2_KinectAnimInstance_generated_h
#error "KinectAnimInstance.generated.h already included, missing '#pragma once' in KinectAnimInstance.h"
#endif
#define KINECTV2_KinectAnimInstance_generated_h

#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKinectBoneRetargetAdjustment_Statics; \
	KINECTV2_API static class UScriptStruct* StaticStruct();


template<> KINECTV2_API UScriptStruct* StaticStruct<struct FKinectBoneRetargetAdjustment>();

#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_SPARSE_DATA
#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveBoneOverrideByName); \
	DECLARE_FUNCTION(execResetOverride); \
	DECLARE_FUNCTION(execSetOverrideEnabled); \
	DECLARE_FUNCTION(execOverrideBoneRotationByName); \
	DECLARE_FUNCTION(execOnKinectBodyEvent);


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveBoneOverrideByName); \
	DECLARE_FUNCTION(execResetOverride); \
	DECLARE_FUNCTION(execSetOverrideEnabled); \
	DECLARE_FUNCTION(execOverrideBoneRotationByName); \
	DECLARE_FUNCTION(execOnKinectBodyEvent);


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKinectAnimInstance(); \
	friend struct Z_Construct_UClass_UKinectAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKinectAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KinectV2"), KINECTV2_API) \
	DECLARE_SERIALIZER(UKinectAnimInstance)


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUKinectAnimInstance(); \
	friend struct Z_Construct_UClass_UKinectAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKinectAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KinectV2"), KINECTV2_API) \
	DECLARE_SERIALIZER(UKinectAnimInstance)


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KINECTV2_API UKinectAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KINECTV2_API, UKinectAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KINECTV2_API UKinectAnimInstance(UKinectAnimInstance&&); \
	KINECTV2_API UKinectAnimInstance(const UKinectAnimInstance&); \
public:


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KINECTV2_API UKinectAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KINECTV2_API UKinectAnimInstance(UKinectAnimInstance&&); \
	KINECTV2_API UKinectAnimInstance(const UKinectAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KINECTV2_API, UKinectAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectAnimInstance)


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_PRIVATE_PROPERTY_OFFSET
#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_48_PROLOG
#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_SPARSE_DATA \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_RPC_WRAPPERS \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_INCLASS \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_PRIVATE_PROPERTY_OFFSET \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_SPARSE_DATA \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_INCLASS_NO_PURE_DECLS \
	KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KinectAnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KINECTV2_API UClass* StaticClass<class UKinectAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KinectPlugins_master_Plugins_KinectV2_Source_KinectV2_Classes_KinectAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
