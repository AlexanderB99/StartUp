// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARTUP_StartUpCharacter_generated_h
#error "StartUpCharacter.generated.h already included, missing '#pragma once' in StartUpCharacter.h"
#endif
#define STARTUP_StartUpCharacter_generated_h

#define StartUp_Source_StartUp_StartUpCharacter_h_12_SPARSE_DATA
#define StartUp_Source_StartUp_StartUpCharacter_h_12_RPC_WRAPPERS
#define StartUp_Source_StartUp_StartUpCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StartUp_Source_StartUp_StartUpCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStartUpCharacter(); \
	friend struct Z_Construct_UClass_AStartUpCharacter_Statics; \
public: \
	DECLARE_CLASS(AStartUpCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StartUp"), NO_API) \
	DECLARE_SERIALIZER(AStartUpCharacter)


#define StartUp_Source_StartUp_StartUpCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStartUpCharacter(); \
	friend struct Z_Construct_UClass_AStartUpCharacter_Statics; \
public: \
	DECLARE_CLASS(AStartUpCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StartUp"), NO_API) \
	DECLARE_SERIALIZER(AStartUpCharacter)


#define StartUp_Source_StartUp_StartUpCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStartUpCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStartUpCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartUpCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartUpCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartUpCharacter(AStartUpCharacter&&); \
	NO_API AStartUpCharacter(const AStartUpCharacter&); \
public:


#define StartUp_Source_StartUp_StartUpCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStartUpCharacter(AStartUpCharacter&&); \
	NO_API AStartUpCharacter(const AStartUpCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStartUpCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStartUpCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStartUpCharacter)


#define StartUp_Source_StartUp_StartUpCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AStartUpCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AStartUpCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AStartUpCharacter, CursorToWorld); }


#define StartUp_Source_StartUp_StartUpCharacter_h_9_PROLOG
#define StartUp_Source_StartUp_StartUpCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StartUp_Source_StartUp_StartUpCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	StartUp_Source_StartUp_StartUpCharacter_h_12_SPARSE_DATA \
	StartUp_Source_StartUp_StartUpCharacter_h_12_RPC_WRAPPERS \
	StartUp_Source_StartUp_StartUpCharacter_h_12_INCLASS \
	StartUp_Source_StartUp_StartUpCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StartUp_Source_StartUp_StartUpCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StartUp_Source_StartUp_StartUpCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	StartUp_Source_StartUp_StartUpCharacter_h_12_SPARSE_DATA \
	StartUp_Source_StartUp_StartUpCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StartUp_Source_StartUp_StartUpCharacter_h_12_INCLASS_NO_PURE_DECLS \
	StartUp_Source_StartUp_StartUpCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARTUP_API UClass* StaticClass<class AStartUpCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StartUp_Source_StartUp_StartUpCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
