// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StartUp/StartUpPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartUpPlayerController() {}
// Cross Module References
	STARTUP_API UClass* Z_Construct_UClass_AStartUpPlayerController_NoRegister();
	STARTUP_API UClass* Z_Construct_UClass_AStartUpPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_StartUp();
// End Cross Module References
	void AStartUpPlayerController::StaticRegisterNativesAStartUpPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AStartUpPlayerController_NoRegister()
	{
		return AStartUpPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AStartUpPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartUpPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_StartUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartUpPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StartUpPlayerController.h" },
		{ "ModuleRelativePath", "StartUpPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartUpPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartUpPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStartUpPlayerController_Statics::ClassParams = {
		&AStartUpPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStartUpPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStartUpPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStartUpPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStartUpPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStartUpPlayerController, 376844151);
	template<> STARTUP_API UClass* StaticClass<AStartUpPlayerController>()
	{
		return AStartUpPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStartUpPlayerController(Z_Construct_UClass_AStartUpPlayerController, &AStartUpPlayerController::StaticClass, TEXT("/Script/StartUp"), TEXT("AStartUpPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartUpPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
