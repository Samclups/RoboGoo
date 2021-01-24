// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Robogoo_Cplusplus/Public/Test_NPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_NPC() {}
// Cross Module References
	ROBOGOO_CPLUSPLUS_API UClass* Z_Construct_UClass_ATest_NPC_NoRegister();
	ROBOGOO_CPLUSPLUS_API UClass* Z_Construct_UClass_ATest_NPC();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Robogoo_Cplusplus();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATest_NPC::StaticRegisterNativesATest_NPC()
	{
	}
	UClass* Z_Construct_UClass_ATest_NPC_NoRegister()
	{
		return ATest_NPC::StaticClass();
	}
	struct Z_Construct_UClass_ATest_NPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_body;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest_NPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Robogoo_Cplusplus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Test_NPC.h" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, trigger), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_body_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_body_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATest_NPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_body,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest_NPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_NPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATest_NPC_Statics::ClassParams = {
		&ATest_NPC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATest_NPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest_NPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATest_NPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATest_NPC, 3793222930);
	template<> ROBOGOO_CPLUSPLUS_API UClass* StaticClass<ATest_NPC>()
	{
		return ATest_NPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATest_NPC(Z_Construct_UClass_ATest_NPC, &ATest_NPC::StaticClass, TEXT("/Script/Robogoo_Cplusplus"), TEXT("ATest_NPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_NPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
