// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Robogoo_Cplusplus/Public/Character_Movement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_Movement() {}
// Cross Module References
	ROBOGOO_CPLUSPLUS_API UClass* Z_Construct_UClass_ACharacter_Movement_NoRegister();
	ROBOGOO_CPLUSPLUS_API UClass* Z_Construct_UClass_ACharacter_Movement();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Robogoo_Cplusplus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ROBOGOO_CPLUSPLUS_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACharacter_Movement::execdamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->damage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execcombinedmelee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->combinedmelee();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execsmallmelee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->smallmelee();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execBlockReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Blocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execAimReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AimReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Aiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execOnMelee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMelee();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Movement::execDisableActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableActor();
		P_NATIVE_END;
	}
	void ACharacter_Movement::StaticRegisterNativesACharacter_Movement()
	{
		UClass* Class = ACharacter_Movement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Aiming", &ACharacter_Movement::execAiming },
			{ "AimReset", &ACharacter_Movement::execAimReset },
			{ "BeginOverlap", &ACharacter_Movement::execBeginOverlap },
			{ "Blocking", &ACharacter_Movement::execBlocking },
			{ "BlockReset", &ACharacter_Movement::execBlockReset },
			{ "combinedmelee", &ACharacter_Movement::execcombinedmelee },
			{ "damage", &ACharacter_Movement::execdamage },
			{ "DisableActor", &ACharacter_Movement::execDisableActor },
			{ "OnFire", &ACharacter_Movement::execOnFire },
			{ "OnMelee", &ACharacter_Movement::execOnMelee },
			{ "smallmelee", &ACharacter_Movement::execsmallmelee },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacter_Movement_Aiming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_Aiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_Aiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "Aiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_Aiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_Aiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_Aiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_Aiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_AimReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_AimReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_AimReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "AimReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_AimReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_AimReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_AimReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_AimReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics
	{
		struct Character_Movement_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Movement_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Character_Movement_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Character_Movement_eventBeginOverlap_Parms), &Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Movement_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Movement_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Movement_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Movement_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(Character_Movement_eventBeginOverlap_Parms), Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_Blocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_Blocking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_Blocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "Blocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_Blocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_Blocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_Blocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_Blocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_BlockReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_BlockReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_BlockReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "BlockReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_BlockReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_BlockReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_BlockReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_BlockReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_combinedmelee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_combinedmelee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_combinedmelee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "combinedmelee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_combinedmelee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_combinedmelee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_combinedmelee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_combinedmelee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_damage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "damage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_DisableActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_DisableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_DisableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "DisableActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_DisableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_DisableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_DisableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_DisableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_OnFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_OnMelee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_OnMelee_Statics::Function_MetaDataParams[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_OnMelee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "OnMelee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_OnMelee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_OnMelee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_OnMelee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_OnMelee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Movement_smallmelee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Movement_smallmelee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Movement_smallmelee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Movement, nullptr, "smallmelee", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Movement_smallmelee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Movement_smallmelee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Movement_smallmelee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Movement_smallmelee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacter_Movement_NoRegister()
	{
		return ACharacter_Movement::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_Movement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shootpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maxfallheight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Maxfallheight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damagemultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damagemultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_googravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_googravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_goojump_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_goojump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nongoogravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_nongoogravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nongoojump_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nongoojump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletspeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bulletspeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_commeleemaxtime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_commeleemaxtime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smeleemaxtime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_smeleemaxtime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedMeleeChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombinedMeleeChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedMelee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombinedMelee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloMelee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoloMelee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GooShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GooShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GooSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GooSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter_Movement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Robogoo_Cplusplus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacter_Movement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacter_Movement_Aiming, "Aiming" }, // 2556246629
		{ &Z_Construct_UFunction_ACharacter_Movement_AimReset, "AimReset" }, // 3450979478
		{ &Z_Construct_UFunction_ACharacter_Movement_BeginOverlap, "BeginOverlap" }, // 4117159846
		{ &Z_Construct_UFunction_ACharacter_Movement_Blocking, "Blocking" }, // 1103664692
		{ &Z_Construct_UFunction_ACharacter_Movement_BlockReset, "BlockReset" }, // 2706789684
		{ &Z_Construct_UFunction_ACharacter_Movement_combinedmelee, "combinedmelee" }, // 2172572332
		{ &Z_Construct_UFunction_ACharacter_Movement_damage, "damage" }, // 848701986
		{ &Z_Construct_UFunction_ACharacter_Movement_DisableActor, "DisableActor" }, // 1592554990
		{ &Z_Construct_UFunction_ACharacter_Movement_OnFire, "OnFire" }, // 1900509976
		{ &Z_Construct_UFunction_ACharacter_Movement_OnMelee, "OnMelee" }, // 2177070749
		{ &Z_Construct_UFunction_ACharacter_Movement_smallmelee, "smallmelee" }, // 3795011985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character_Movement.h" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_shootpoint_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_shootpoint = { "shootpoint", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, shootpoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_shootpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_shootpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, ProjectileClass), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_Maxfallheight_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_Maxfallheight = { "Maxfallheight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, Maxfallheight), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_Maxfallheight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_Maxfallheight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_damagemultiplier_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_damagemultiplier = { "damagemultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, damagemultiplier), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_damagemultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_damagemultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_googravity_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_googravity = { "googravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, googravity), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_googravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_googravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_goojump_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_goojump = { "goojump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, goojump), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_goojump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_goojump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoogravity_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoogravity = { "nongoogravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, nongoogravity), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoogravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoogravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoojump_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoojump = { "nongoojump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, nongoojump), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoojump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoojump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_bulletspeed_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_bulletspeed = { "bulletspeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, bulletspeed), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_bulletspeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_bulletspeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_commeleemaxtime_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_commeleemaxtime = { "commeleemaxtime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, commeleemaxtime), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_commeleemaxtime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_commeleemaxtime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_smeleemaxtime_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_smeleemaxtime = { "smeleemaxtime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, smeleemaxtime), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_smeleemaxtime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_smeleemaxtime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Character_Movement" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMeleeChild_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMeleeChild = { "CombinedMeleeChild", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, CombinedMeleeChild), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMeleeChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMeleeChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMelee_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMelee = { "CombinedMelee", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, CombinedMelee), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMelee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_SoloMelee_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_SoloMelee = { "SoloMelee", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, SoloMelee), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_SoloMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_SoloMelee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooShield_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooShield = { "GooShield", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, GooShield), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooSphere_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooSphere = { "GooSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, GooSphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Movement, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacter_Movement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_shootpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_Maxfallheight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_damagemultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_googravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_goojump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoogravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_nongoojump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_bulletspeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_commeleemaxtime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_smeleemaxtime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_PlayerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMeleeChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CombinedMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_SoloMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_GooSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Movement_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter_Movement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_Movement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_Movement_Statics::ClassParams = {
		&ACharacter_Movement::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacter_Movement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacter_Movement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Movement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacter_Movement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacter_Movement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacter_Movement, 1860705050);
	template<> ROBOGOO_CPLUSPLUS_API UClass* StaticClass<ACharacter_Movement>()
	{
		return ACharacter_Movement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter_Movement(Z_Construct_UClass_ACharacter_Movement, &ACharacter_Movement::StaticClass, TEXT("/Script/Robogoo_Cplusplus"), TEXT("ACharacter_Movement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_Movement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
