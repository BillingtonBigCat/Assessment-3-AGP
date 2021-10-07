// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMESPROGRAMMING_RegularPickup_generated_h
#error "RegularPickup.generated.h already included, missing '#pragma once' in RegularPickup.h"
#endif
#define ADVGAMESPROGRAMMING_RegularPickup_generated_h

#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_SPARSE_DATA
#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_RPC_WRAPPERS
#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARegularPickup(); \
	friend struct Z_Construct_UClass_ARegularPickup_Statics; \
public: \
	DECLARE_CLASS(ARegularPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(ARegularPickup)


#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_INCLASS \
private: \
	static void StaticRegisterNativesARegularPickup(); \
	friend struct Z_Construct_UClass_ARegularPickup_Statics; \
public: \
	DECLARE_CLASS(ARegularPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGamesProgramming"), NO_API) \
	DECLARE_SERIALIZER(ARegularPickup)


#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARegularPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARegularPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARegularPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARegularPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARegularPickup(ARegularPickup&&); \
	NO_API ARegularPickup(const ARegularPickup&); \
public:


#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARegularPickup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARegularPickup(ARegularPickup&&); \
	NO_API ARegularPickup(const ARegularPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARegularPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARegularPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARegularPickup)


#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_PRIVATE_PROPERTY_OFFSET
#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_21_PROLOG
#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_PRIVATE_PROPERTY_OFFSET \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_SPARSE_DATA \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_RPC_WRAPPERS \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_INCLASS \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_PRIVATE_PROPERTY_OFFSET \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_SPARSE_DATA \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_INCLASS_NO_PURE_DECLS \
	Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<class ARegularPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Week8StartingPoint_Source_AdvGamesProgramming_RegularPickup_h


#define FOREACH_ENUM_PICKUPRARITY(op) \
	op(PickupRarity::LEGENDARY) \
	op(PickupRarity::MASTER) \
	op(PickupRarity::RARE) \
	op(PickupRarity::COMMON) 

enum class PickupRarity : uint8;
template<> ADVGAMESPROGRAMMING_API UEnum* StaticEnum<PickupRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
