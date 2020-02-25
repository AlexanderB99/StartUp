// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARTUP_StartUpGameMode_generated_h
#error "StartUpGameMode.generated.h already included, missing '#pragma once' in StartUpGameMode.h"
#endif
#define STARTUP_StartUpGameMode_generated_h

#define StartUp_Source_StartUp_StartUpGameMode_h_12_SPARSE_DATA
#define StartUp_Source_StartUp_StartUpGameMode_h_12_RPC_WRAPPERS
#define StartUp_Source_StartUp_StartUpGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StartUp_Source_StartUp_StartUpGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStartUpGameMode(); \
	friend struct Z_Construct_UClass_AStartUpGameMode_Statics; \
public: \
	DECLARE_CLASS(AStartUpGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StartUp"), STARTUP_API) \
	DECLARE_SERIALIZER(AStartUpGameMode)


#define StartUp_Source_StartUp_StartUpGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStartUpGameMode(); \
	friend struct Z_Construct_UClass_AStartUpGameMode_Statics; \
public: \
	DECLARE_CLASS(AStartUpGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StartUp"), STARTUP_API) \
	DECLARE_SERIALIZER(AStartUpGameMode)


#define StartUp_Source_StartUp_StartUpGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARTUP_API AStartUpGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStartUpGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARTUP_API, AStartUpGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartUpGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARTUP_API AStartUpGameMode(AStartUpGameMode&&); \
	STARTUP_API AStartUpGameMode(const AStartUpGameMode&); \
public:


#define StartUp_Source_StartUp_StartUpGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARTUP_API AStartUpGameMode(AStartUpGameMode&&); \
	STARTUP_API AStartUpGameMode(const AStartUpGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARTUP_API, AStartUpGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartUpGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStartUpGameMode)


#define StartUp_Source_StartUp_StartUpGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define StartUp_Source_StartUp_StartUpGameMode_h_9_PROLOG
#define StartUp_Source_StartUp_StartUpGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StartUp_Source_StartUp_StartUpGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	StartUp_Source_StartUp_StartUpGameMode_h_12_SPARSE_DATA \
	StartUp_Source_StartUp_StartUpGameMode_h_12_RPC_WRAPPERS \
	StartUp_Source_StartUp_StartUpGameMode_h_12_INCLASS \
	StartUp_Source_StartUp_StartUpGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StartUp_Source_StartUp_StartUpGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StartUp_Source_StartUp_StartUpGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	StartUp_Source_StartUp_StartUpGameMode_h_12_SPARSE_DATA \
	StartUp_Source_StartUp_StartUpGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StartUp_Source_StartUp_StartUpGameMode_h_12_INCLASS_NO_PURE_DECLS \
	StartUp_Source_StartUp_StartUpGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARTUP_API UClass* StaticClass<class AStartUpGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StartUp_Source_StartUp_StartUpGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
