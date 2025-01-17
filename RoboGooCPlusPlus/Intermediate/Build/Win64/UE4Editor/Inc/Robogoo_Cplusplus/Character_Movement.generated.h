// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ROBOGOO_CPLUSPLUS_Character_Movement_generated_h
#error "Character_Movement.generated.h already included, missing '#pragma once' in Character_Movement.h"
#endif
#define ROBOGOO_CPLUSPLUS_Character_Movement_generated_h

#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_SPARSE_DATA
#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdamage); \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execcombinedmelee); \
	DECLARE_FUNCTION(execsmallmelee); \
	DECLARE_FUNCTION(execBlockReset); \
	DECLARE_FUNCTION(execBlocking); \
	DECLARE_FUNCTION(execAimReset); \
	DECLARE_FUNCTION(execAiming); \
	DECLARE_FUNCTION(execOnMelee); \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execDisableActor);


#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdamage); \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execcombinedmelee); \
	DECLARE_FUNCTION(execsmallmelee); \
	DECLARE_FUNCTION(execBlockReset); \
	DECLARE_FUNCTION(execBlocking); \
	DECLARE_FUNCTION(execAimReset); \
	DECLARE_FUNCTION(execAiming); \
	DECLARE_FUNCTION(execOnMelee); \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execDisableActor);


#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter_Movement(); \
	friend struct Z_Construct_UClass_ACharacter_Movement_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Movement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Robogoo_Cplusplus"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Movement)


#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACharacter_Movement(); \
	friend struct Z_Construct_UClass_ACharacter_Movement_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Movement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Robogoo_Cplusplus"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Movement)


#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter_Movement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter_Movement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Movement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Movement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter_Movement(ACharacter_Movement&&); \
	NO_API ACharacter_Movement(const ACharacter_Movement&); \
public:


#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter_Movement(ACharacter_Movement&&); \
	NO_API ACharacter_Movement(const ACharacter_Movement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Movement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Movement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacter_Movement)


#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_PRIVATE_PROPERTY_OFFSET
#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_18_PROLOG
#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_PRIVATE_PROPERTY_OFFSET \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_SPARSE_DATA \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_RPC_WRAPPERS \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_INCLASS \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_PRIVATE_PROPERTY_OFFSET \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_SPARSE_DATA \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_INCLASS_NO_PURE_DECLS \
	RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROBOGOO_CPLUSPLUS_API UClass* StaticClass<class ACharacter_Movement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RoboGooCPlusPlus_Source_Robogoo_Cplusplus_Public_Character_Movement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
