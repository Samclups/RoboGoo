// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Robogoo_Cplusplus/Robogoo_CplusplusGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobogoo_CplusplusGameMode() {}
// Cross Module References
	ROBOGOO_CPLUSPLUS_API UClass* Z_Construct_UClass_ARobogoo_CplusplusGameMode_NoRegister();
	ROBOGOO_CPLUSPLUS_API UClass* Z_Construct_UClass_ARobogoo_CplusplusGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Robogoo_Cplusplus();
// End Cross Module References
	void ARobogoo_CplusplusGameMode::StaticRegisterNativesARobogoo_CplusplusGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARobogoo_CplusplusGameMode_NoRegister()
	{
		return ARobogoo_CplusplusGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARobogoo_CplusplusGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobogoo_CplusplusGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Robogoo_Cplusplus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobogoo_CplusplusGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Robogoo_CplusplusGameMode.h" },
		{ "ModuleRelativePath", "Robogoo_CplusplusGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobogoo_CplusplusGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobogoo_CplusplusGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobogoo_CplusplusGameMode_Statics::ClassParams = {
		&ARobogoo_CplusplusGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARobogoo_CplusplusGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARobogoo_CplusplusGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARobogoo_CplusplusGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARobogoo_CplusplusGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobogoo_CplusplusGameMode, 2237837488);
	template<> ROBOGOO_CPLUSPLUS_API UClass* StaticClass<ARobogoo_CplusplusGameMode>()
	{
		return ARobogoo_CplusplusGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobogoo_CplusplusGameMode(Z_Construct_UClass_ARobogoo_CplusplusGameMode, &ARobogoo_CplusplusGameMode::StaticClass, TEXT("/Script/Robogoo_Cplusplus"), TEXT("ARobogoo_CplusplusGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobogoo_CplusplusGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
