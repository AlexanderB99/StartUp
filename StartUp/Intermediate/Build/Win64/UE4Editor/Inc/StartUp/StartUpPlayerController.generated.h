// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARTUP_StartUpPlayerController_generated_h
#error "StartUpPlayerController.generated.h already included, missing '#pragma once' in StartUpPlayerController.h"
#endif
#define STARTUP_StartUpPlayerController_generated_h

#define StartUp_Source_StartUp_StartUpPlayerController_h_12_SPARSE_DATA
#define StartUp_Source_StartUp_StartUpPlayerController_h_12_RPC_WRAPPERS
#define StartUp_Source_StartUp_StartUpPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StartUp_Source_StartUp_StartUpPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStartUpPlayerController(); \
	friend struct Z_Construct_UClass_AStartUpPlayerController_Statics; \
public: \
	DECLARE_CLASS(AStartUpPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StartUp"), NO_API) \
	DECLARE_SERIALIZER(AStartUpPlayerController)


#define StartUp_Source_StartUp_StartUpPlayerController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStartUpPlayerController(); \
	friend struct Z_Construct_UClass_AStartUpPlayerController_Statics; \
public: \
	DECLARE_CLASS(AStartUpPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StartUp"), NO_API) \
	DECLARE_SERIALIZER(AStartUpPlayerController)


#define StartUp_Source_StartUp_StartUpPlayerController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStartUpPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStartUpPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartUpPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartUpPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartUpPlayerController(AStartUpPlayerController&&); \
	NO_API AStartUpPlayerController(const AStartUpPlayerController&); \
public:


#define StartUp_Source_StartUp_StartUpPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartUpPlayerController(AStartUpPlayerController&&); \
	NO_API AStartUpPlayerController(const AStartUpPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartUpPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartUpPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStartUpPlayerController)


#define StartUp_Source_StartUp_StartUpPlayerController_h_12_PRIVATE_PROPERTY_OFFSET
#define StartUp_Source_StartUp_StartUpPlayerController_h_9_PROLOG
#define StartUp_Source_StartUp_StartUpPlayerController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_SPARSE_DATA \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_RPC_WRAPPERS \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_INCLASS \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StartUp_Source_StartUp_StartUpPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_SPARSE_DATA \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	StartUp_Source_StartUp_StartUpPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARTUP_API UClass* StaticClass<class AStartUpPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StartUp_Source_StartUp_StartUpPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
