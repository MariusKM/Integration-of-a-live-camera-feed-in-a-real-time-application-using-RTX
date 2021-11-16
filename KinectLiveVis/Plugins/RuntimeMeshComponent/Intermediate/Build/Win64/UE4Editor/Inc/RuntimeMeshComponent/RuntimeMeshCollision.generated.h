// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshCollision_generated_h
#error "RuntimeMeshCollision.generated.h already included, missing '#pragma once' in RuntimeMeshCollision.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshCollision_generated_h

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_793_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshRenderableCollisionData>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_770_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshAsyncBodySetupData>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_701_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionData>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_673_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionHitInfo>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_623_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionSourceSectionInfo>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_573_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionSettings>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_495_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionMaterialIndexStream>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_392_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionTexCoordStream>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_303_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionTriangleStream>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionVertexStream>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionCapsule>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionBox>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionSphere>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshCollisionConvexMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCollision_h


#define FOREACH_ENUM_ERUNTIMEMESHCOLLISIONFACESOURCETYPE(op) \
	op(ERuntimeMeshCollisionFaceSourceType::Collision) \
	op(ERuntimeMeshCollisionFaceSourceType::Renderable) 

enum class ERuntimeMeshCollisionFaceSourceType : uint8;
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshCollisionFaceSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
