// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeMeshCollisionData;
struct FRuntimeMeshRenderableMeshData;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshModifier_generated_h
#error "RuntimeMeshModifier.generated.h already included, missing '#pragma once' in RuntimeMeshModifier.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshModifier_generated_h

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_SPARSE_DATA
#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_RPC_WRAPPERS \
	virtual void ApplyToCollisionMesh_Implementation(FRuntimeMeshCollisionData& MeshData); \
	virtual void ApplyToMesh_Implementation(FRuntimeMeshRenderableMeshData& MeshData); \
 \
	DECLARE_FUNCTION(execApplyToCollisionMesh); \
	DECLARE_FUNCTION(execApplyToMesh);


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ApplyToCollisionMesh_Implementation(FRuntimeMeshCollisionData& MeshData); \
	virtual void ApplyToMesh_Implementation(FRuntimeMeshRenderableMeshData& MeshData); \
 \
	DECLARE_FUNCTION(execApplyToCollisionMesh); \
	DECLARE_FUNCTION(execApplyToMesh);


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_EVENT_PARMS \
	struct RuntimeMeshModifier_eventApplyToCollisionMesh_Parms \
	{ \
		FRuntimeMeshCollisionData MeshData; \
	}; \
	struct RuntimeMeshModifier_eventApplyToMesh_Parms \
	{ \
		FRuntimeMeshRenderableMeshData MeshData; \
	};


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_CALLBACK_WRAPPERS
#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshModifier(); \
	friend struct Z_Construct_UClass_URuntimeMeshModifier_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshModifier)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshModifier(); \
	friend struct Z_Construct_UClass_URuntimeMeshModifier_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshModifier)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshModifier(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshModifier(URuntimeMeshModifier&&); \
	NO_API URuntimeMeshModifier(const URuntimeMeshModifier&); \
public:


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshModifier(URuntimeMeshModifier&&); \
	NO_API URuntimeMeshModifier(const URuntimeMeshModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshModifier)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_PRIVATE_PROPERTY_OFFSET
#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_13_PROLOG \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_EVENT_PARMS


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_SPARSE_DATA \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_RPC_WRAPPERS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_CALLBACK_WRAPPERS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_INCLASS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_SPARSE_DATA \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_CALLBACK_WRAPPERS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_INCLASS_NO_PURE_DECLS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
