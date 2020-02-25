// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealeaseGame/RealeaseGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealeaseGameGameMode() {}
// Cross Module References
	REALEASEGAME_API UClass* Z_Construct_UClass_ARealeaseGameGameMode_NoRegister();
	REALEASEGAME_API UClass* Z_Construct_UClass_ARealeaseGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RealeaseGame();
// End Cross Module References
	void ARealeaseGameGameMode::StaticRegisterNativesARealeaseGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARealeaseGameGameMode_NoRegister()
	{
		return ARealeaseGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARealeaseGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealeaseGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealeaseGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealeaseGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RealeaseGameGameMode.h" },
		{ "ModuleRelativePath", "RealeaseGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealeaseGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealeaseGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARealeaseGameGameMode_Statics::ClassParams = {
		&ARealeaseGameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARealeaseGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARealeaseGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARealeaseGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARealeaseGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARealeaseGameGameMode, 1540644105);
	template<> REALEASEGAME_API UClass* StaticClass<ARealeaseGameGameMode>()
	{
		return ARealeaseGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARealeaseGameGameMode(Z_Construct_UClass_ARealeaseGameGameMode, &ARealeaseGameGameMode::StaticClass, TEXT("/Script/RealeaseGame"), TEXT("ARealeaseGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealeaseGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
