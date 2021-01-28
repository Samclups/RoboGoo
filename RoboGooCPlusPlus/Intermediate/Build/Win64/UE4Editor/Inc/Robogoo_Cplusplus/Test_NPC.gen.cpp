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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATest_NPC::execTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Time();
		P_NATIVE_END;
	}
	void ATest_NPC::StaticRegisterNativesATest_NPC()
	{
		UClass* Class = ATest_NPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Time", &ATest_NPC::execTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATest_NPC_Time_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATest_NPC_Time_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATest_NPC_Time_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATest_NPC, nullptr, "Time", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATest_NPC_Time_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATest_NPC_Time_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATest_NPC_Time()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATest_NPC_Time_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATest_NPC_NoRegister()
	{
		return ATest_NPC::StaticClass();
	}
	struct Z_Construct_UClass_ATest_NPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deliverrecieve_MetaData[];
#endif
		static void NewProp_Deliverrecieve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Deliverrecieve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deliverquestvalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Deliverquestvalue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deliversend_MetaData[];
#endif
		static void NewProp_Deliversend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Deliversend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FetchQuestObjectNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FetchQuestObjectNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FetchQuestObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FetchQuestObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FetchQuestObjecttype_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FetchQuestObjecttype;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlockSlovedSpawnObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodlockSlovedSpawnObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlSolvedEnableDisable_MetaData[];
#endif
		static void NewProp_BlSolvedEnableDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BlSolvedEnableDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlockObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BloodlockObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodlockObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimedQuestTimerSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimedQuestTimerSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimedQuestModifier_MetaData[];
#endif
		static void NewProp_TimedQuestModifier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TimedQuestModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeliverQuest_MetaData[];
#endif
		static void NewProp_DeliverQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeliverQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FetchQuest_MetaData[];
#endif
		static void NewProp_FetchQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FetchQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlockQuest_MetaData[];
#endif
		static void NewProp_BloodlockQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BloodlockQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triggered_MetaData[];
#endif
		static void NewProp_Triggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Triggered;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ATest_NPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATest_NPC_Time, "Time" }, // 1823356244
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Test_NPC.h" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverrecieve_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// recieving from other npc\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "recieving from other npc" },
	};
#endif
	void Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverrecieve_SetBit(void* Obj)
	{
		((ATest_NPC*)Obj)->Deliverrecieve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverrecieve = { "Deliverrecieve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATest_NPC), &Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverrecieve_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverrecieve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverrecieve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverquestvalue_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// Have to match between NPC's\x09TODO set to use\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "Have to match between NPC's    TODO set to use" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverquestvalue = { "Deliverquestvalue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, Deliverquestvalue), METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverquestvalue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverquestvalue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliversend_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// Total objects gathered\n// sending to other npc\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "Total objects gathered\nsending to other npc" },
	};
#endif
	void Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliversend_SetBit(void* Obj)
	{
		((ATest_NPC*)Obj)->Deliversend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliversend = { "Deliversend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATest_NPC), &Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliversend_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliversend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliversend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectNum_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// no of objects to gather\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "no of objects to gather" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectNum = { "FetchQuestObjectNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, FetchQuestObjectNum), METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectID_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// item id given for uses on multiple fetchquests -  TODO set to check when player pickup / already have\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "item id given for uses on multiple fetchquests -  TODO set to check when player pickup / already have" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectID = { "FetchQuestObjectID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, FetchQuestObjectID), METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjecttype_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// object to gather\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "object to gather" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjecttype = { "FetchQuestObjecttype", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, FetchQuestObjecttype), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjecttype_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjecttype_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockSlovedSpawnObject_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// object to turn on or off on completion\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "object to turn on or off on completion" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockSlovedSpawnObject = { "BloodlockSlovedSpawnObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, BloodlockSlovedSpawnObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockSlovedSpawnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockSlovedSpawnObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_BlSolvedEnableDisable_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// objects to kill\n// enabled is turn on  - Disables is turn off object\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "objects to kill\nenabled is turn on  - Disables is turn off object" },
	};
#endif
	void Z_Construct_UClass_ATest_NPC_Statics::NewProp_BlSolvedEnableDisable_SetBit(void* Obj)
	{
		((ATest_NPC*)Obj)->BlSolvedEnableDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_BlSolvedEnableDisable = { "BlSolvedEnableDisable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATest_NPC), &Z_Construct_UClass_ATest_NPC_Statics::NewProp_BlSolvedEnableDisable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_BlSolvedEnableDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_BlSolvedEnableDisable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockObjects_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// Objects related to quests\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "Objects related to quests" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockObjects = { "BloodlockObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, BloodlockObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockObjects_Inner = { "BloodlockObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestTimerSeconds_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// time in seconds\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "time in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestTimerSeconds = { "TimedQuestTimerSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_NPC, TimedQuestTimerSeconds), METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestTimerSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestTimerSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestModifier_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// Quest modifier\n// Add timer to any quest\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "Quest modifier\nAdd timer to any quest" },
	};
#endif
	void Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestModifier_SetBit(void* Obj)
	{
		((ATest_NPC*)Obj)->TimedQuestModifier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestModifier = { "TimedQuestModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATest_NPC), &Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestModifier_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_DeliverQuest_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// take thing from npc to npc\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "take thing from npc to npc" },
	};
#endif
	void Z_Construct_UClass_ATest_NPC_Statics::NewProp_DeliverQuest_SetBit(void* Obj)
	{
		((ATest_NPC*)Obj)->DeliverQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_DeliverQuest = { "DeliverQuest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATest_NPC), &Z_Construct_UClass_ATest_NPC_Statics::NewProp_DeliverQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_DeliverQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_DeliverQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuest_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// gather no of items\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "gather no of items" },
	};
#endif
	void Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuest_SetBit(void* Obj)
	{
		((ATest_NPC*)Obj)->FetchQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuest = { "FetchQuest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATest_NPC), &Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockQuest_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// kill things then thing happens\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "kill things then thing happens" },
	};
#endif
	void Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockQuest_SetBit(void* Obj)
	{
		((ATest_NPC*)Obj)->BloodlockQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockQuest = { "BloodlockQuest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATest_NPC), &Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_NPC_Statics::NewProp_Triggered_MetaData[] = {
		{ "Category", "Test_NPC" },
		{ "Comment", "// Quest on/off  Variables\n// don't touch  - done via code\n" },
		{ "ModuleRelativePath", "Public/Test_NPC.h" },
		{ "ToolTip", "Quest on/off  Variables\ndon't touch  - done via code" },
	};
#endif
	void Z_Construct_UClass_ATest_NPC_Statics::NewProp_Triggered_SetBit(void* Obj)
	{
		((ATest_NPC*)Obj)->Triggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATest_NPC_Statics::NewProp_Triggered = { "Triggered", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATest_NPC), &Z_Construct_UClass_ATest_NPC_Statics::NewProp_Triggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATest_NPC_Statics::NewProp_Triggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_NPC_Statics::NewProp_Triggered_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverrecieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliverquestvalue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_Deliversend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuestObjecttype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockSlovedSpawnObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_BlSolvedEnableDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestTimerSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_TimedQuestModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_DeliverQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_FetchQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_BloodlockQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_NPC_Statics::NewProp_Triggered,
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
		FuncInfo,
		Z_Construct_UClass_ATest_NPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ATest_NPC, 1357264139);
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
