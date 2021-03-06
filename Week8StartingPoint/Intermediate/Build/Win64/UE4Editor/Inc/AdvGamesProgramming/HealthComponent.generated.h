// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define ADVGAMESPROGRAMMING_HealthComponent_generated_h

#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_SPARSE_DATA
#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTakeDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTakeDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_11_PROLOG
#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_SPARSE_DATA \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_RPC_WRAPPERS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_INCLASS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_SPARSE_DATA \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Week8StartingPoint_Source_AdvGamesProgramming_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
