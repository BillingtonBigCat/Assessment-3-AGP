// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ADVGAMESPROGRAMMING_HealthPickup_generated_h
#error "HealthPickup.generated.h already included, missing '#pragma once' in HealthPickup.h"
#endif
#define ADVGAMESPROGRAMMING_HealthPickup_generated_h

#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_SPARSE_DATA
#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGenerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGenerate(); \
		P_NATIVE_END; \
	}


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGenerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGenerate(); \
		P_NATIVE_END; \
	}


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_EVENT_PARMS \
	struct HealthPickup_eventOnPickup_Parms \
	{ \
		AActor* ActorThatPickedUp; \
	};


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_CALLBACK_WRAPPERS
#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend struct Z_Construct_UClass_AHealthPickup_Statics; \
public: \
	DECLARE_CLASS(AHealthPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup)


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHealthPickup(); \
	friend struct Z_Construct_UClass_AHealthPickup_Statics; \
public: \
	DECLARE_CLASS(AHealthPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickup)


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickup(AHealthPickup&&); \
	NO_API AHealthPickup(const AHealthPickup&); \
public:


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPickup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickup(AHealthPickup&&); \
	NO_API AHealthPickup(const AHealthPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPickup)


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET
#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_12_PROLOG \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_EVENT_PARMS


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_SPARSE_DATA \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_RPC_WRAPPERS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_CALLBACK_WRAPPERS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_INCLASS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_SPARSE_DATA \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_CALLBACK_WRAPPERS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_INCLASS_NO_PURE_DECLS \
	Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class AHealthPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Week8StartingPoint_Source_AdvGamesProgramming_HealthPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
