// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeMeshCollisionData;
struct FRuntimeMeshCollisionSettings;
 struct FRuntimeMeshSectionData;
struct FRuntimeMeshRenderableMeshData;
struct FBoxSphereBounds;
class URuntimeMeshProvider;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProvider_generated_h
#error "RuntimeMeshProvider.generated.h already included, missing '#pragma once' in RuntimeMeshProvider.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProvider_generated_h

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_SPARSE_DATA
#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsThreadSafe); \
	DECLARE_FUNCTION(execCollisionUpdateCompleted); \
	DECLARE_FUNCTION(execGetCollisionMesh); \
	DECLARE_FUNCTION(execHasCollisionMesh); \
	DECLARE_FUNCTION(execGetCollisionSettings); \
	DECLARE_FUNCTION(execGetAllSectionsMeshForLOD); \
	DECLARE_FUNCTION(execGetSectionMeshForLOD); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execIsBound);


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsThreadSafe); \
	DECLARE_FUNCTION(execCollisionUpdateCompleted); \
	DECLARE_FUNCTION(execGetCollisionMesh); \
	DECLARE_FUNCTION(execHasCollisionMesh); \
	DECLARE_FUNCTION(execGetCollisionSettings); \
	DECLARE_FUNCTION(execGetAllSectionsMeshForLOD); \
	DECLARE_FUNCTION(execGetSectionMeshForLOD); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execIsBound);


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProvider(); \
	friend struct Z_Construct_UClass_URuntimeMeshProvider_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProvider, URuntimeMeshProviderTargetInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProvider)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProvider(); \
	friend struct Z_Construct_UClass_URuntimeMeshProvider_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProvider, URuntimeMeshProviderTargetInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProvider)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProvider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProvider(URuntimeMeshProvider&&); \
	NO_API URuntimeMeshProvider(const URuntimeMeshProvider&); \
public:


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProvider(URuntimeMeshProvider&&); \
	NO_API URuntimeMeshProvider(const URuntimeMeshProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshProvider)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_PRIVATE_PROPERTY_OFFSET
#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_12_PROLOG
#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_PRIVATE_PROPERTY_OFFSET \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_SPARSE_DATA \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_RPC_WRAPPERS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_INCLASS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_PRIVATE_PROPERTY_OFFSET \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_SPARSE_DATA \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_INCLASS_NO_PURE_DECLS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProvider>();

#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_SPARSE_DATA
#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetChildProvider); \
	DECLARE_FUNCTION(execGetChildProvider);


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetChildProvider); \
	DECLARE_FUNCTION(execGetChildProvider);


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderPassthrough(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderPassthrough, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderPassthrough)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderPassthrough(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderPassthrough, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderPassthrough)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderPassthrough(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderPassthrough) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderPassthrough); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderPassthrough); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderPassthrough(URuntimeMeshProviderPassthrough&&); \
	NO_API URuntimeMeshProviderPassthrough(const URuntimeMeshProviderPassthrough&); \
public:


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderPassthrough(URuntimeMeshProviderPassthrough&&); \
	NO_API URuntimeMeshProviderPassthrough(const URuntimeMeshProviderPassthrough&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderPassthrough); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderPassthrough); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshProviderPassthrough)


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChildProvider() { return STRUCT_OFFSET(URuntimeMeshProviderPassthrough, ChildProvider); }


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_106_PROLOG
#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_PRIVATE_PROPERTY_OFFSET \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_SPARSE_DATA \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_RPC_WRAPPERS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_INCLASS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_PRIVATE_PROPERTY_OFFSET \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_SPARSE_DATA \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_INCLASS_NO_PURE_DECLS \
	MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderPassthrough>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MarchingCubes_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
