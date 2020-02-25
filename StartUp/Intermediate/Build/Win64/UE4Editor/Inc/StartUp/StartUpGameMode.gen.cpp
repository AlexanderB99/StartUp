// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StartUp/StartUpGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartUpGameMode() {}
// Cross Module References
	STARTUP_API UClass* Z_Construct_UClass_AStartUpGameMode_NoRegister();
	STARTUP_API UClass* Z_Construct_UClass_AStartUpGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StartUp();
// End Cross Module References
	void AStartUpGameMode::StaticRegisterNativesAStartUpGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStartUpGameMode_NoRegister()
	{
		return AStartUpGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStartUpGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartUpGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StartUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartUpGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StartUpGameMode.h" },
		{ "ModuleRelativePath", "StartUpGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartUpGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartUpGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStartUpGameMode_Statics::ClassParams = {
		&AStartUpGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStartUpGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStartUpGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStartUpGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStartUpGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStartUpGameMode, 4275070664);
	template<> STARTUP_API UClass* StaticClass<AStartUpGameMode>()
	{
		return AStartUpGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStartUpGameMode(Z_Construct_UClass_AStartUpGameMode, &AStartUpGameMode::StaticClass, TEXT("/Script/StartUp"), TEXT("AStartUpGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartUpGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
