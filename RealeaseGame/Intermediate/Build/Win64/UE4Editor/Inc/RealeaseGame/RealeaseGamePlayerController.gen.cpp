// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealeaseGame/RealeaseGamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealeaseGamePlayerController() {}
// Cross Module References
	REALEASEGAME_API UClass* Z_Construct_UClass_ARealeaseGamePlayerController_NoRegister();
	REALEASEGAME_API UClass* Z_Construct_UClass_ARealeaseGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_RealeaseGame();
// End Cross Module References
	void ARealeaseGamePlayerController::StaticRegisterNativesARealeaseGamePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ARealeaseGamePlayerController_NoRegister()
	{
		return ARealeaseGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARealeaseGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealeaseGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_RealeaseGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealeaseGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RealeaseGamePlayerController.h" },
		{ "ModuleRelativePath", "RealeaseGamePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealeaseGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealeaseGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARealeaseGamePlayerController_Statics::ClassParams = {
		&ARealeaseGamePlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARealeaseGamePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARealeaseGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARealeaseGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARealeaseGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARealeaseGamePlayerController, 3263585005);
	template<> REALEASEGAME_API UClass* StaticClass<ARealeaseGamePlayerController>()
	{
		return ARealeaseGamePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARealeaseGamePlayerController(Z_Construct_UClass_ARealeaseGamePlayerController, &ARealeaseGamePlayerController::StaticClass, TEXT("/Script/RealeaseGame"), TEXT("ARealeaseGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealeaseGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
