// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/RegularPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegularPickup() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UEnum* Z_Construct_UEnum_AdvGamesProgramming_EPickupStat();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UEnum* Z_Construct_UEnum_AdvGamesProgramming_EPickupRarity();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_ARegularPickup_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_ARegularPickup();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_APickup();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_ARegularPickup_OnGenerate();
	ADVGAMESPROGRAMMING_API UFunction* Z_Construct_UFunction_ARegularPickup_OnPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EPickupStat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvGamesProgramming_EPickupStat, Z_Construct_UPackage__Script_AdvGamesProgramming(), TEXT("EPickupStat"));
		}
		return Singleton;
	}
	template<> ADVGAMESPROGRAMMING_API UEnum* StaticEnum<EPickupStat>()
	{
		return EPickupStat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPickupStat(EPickupStat_StaticEnum, TEXT("/Script/AdvGamesProgramming"), TEXT("EPickupStat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvGamesProgramming_EPickupStat_Hash() { return 668467727U; }
	UEnum* Z_Construct_UEnum_AdvGamesProgramming_EPickupStat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvGamesProgramming();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPickupStat"), 0, Get_Z_Construct_UEnum_AdvGamesProgramming_EPickupStat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPickupStat::HEALTH", (int64)EPickupStat::HEALTH },
				{ "EPickupStat::AMMO", (int64)EPickupStat::AMMO },
				{ "EPickupStat::DAMAGE", (int64)EPickupStat::DAMAGE },
				{ "EPickupStat::ACCURACY", (int64)EPickupStat::ACCURACY },
				{ "EPickupStat::VELOCITY", (int64)EPickupStat::VELOCITY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACCURACY.Name", "EPickupStat::ACCURACY" },
				{ "AMMO.Name", "EPickupStat::AMMO" },
				{ "BlueprintType", "true" },
				{ "DAMAGE.Name", "EPickupStat::DAMAGE" },
				{ "HEALTH.Name", "EPickupStat::HEALTH" },
				{ "ModuleRelativePath", "RegularPickup.h" },
				{ "VELOCITY.Name", "EPickupStat::VELOCITY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
				nullptr,
				"EPickupStat",
				"EPickupStat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPickupRarity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvGamesProgramming_EPickupRarity, Z_Construct_UPackage__Script_AdvGamesProgramming(), TEXT("EPickupRarity"));
		}
		return Singleton;
	}
	template<> ADVGAMESPROGRAMMING_API UEnum* StaticEnum<EPickupRarity>()
	{
		return EPickupRarity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPickupRarity(EPickupRarity_StaticEnum, TEXT("/Script/AdvGamesProgramming"), TEXT("EPickupRarity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvGamesProgramming_EPickupRarity_Hash() { return 3901848583U; }
	UEnum* Z_Construct_UEnum_AdvGamesProgramming_EPickupRarity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvGamesProgramming();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPickupRarity"), 0, Get_Z_Construct_UEnum_AdvGamesProgramming_EPickupRarity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPickupRarity::LEGENDARY", (int64)EPickupRarity::LEGENDARY },
				{ "EPickupRarity::MASTER", (int64)EPickupRarity::MASTER },
				{ "EPickupRarity::RARE", (int64)EPickupRarity::RARE },
				{ "EPickupRarity::COMMON", (int64)EPickupRarity::COMMON },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "COMMON.Comment", "/**\n * \n */" },
				{ "COMMON.Name", "EPickupRarity::COMMON" },
				{ "LEGENDARY.Comment", "/**\n * \n */" },
				{ "LEGENDARY.Name", "EPickupRarity::LEGENDARY" },
				{ "MASTER.Comment", "/**\n * \n */" },
				{ "MASTER.Name", "EPickupRarity::MASTER" },
				{ "ModuleRelativePath", "RegularPickup.h" },
				{ "RARE.Comment", "/**\n * \n */" },
				{ "RARE.Name", "EPickupRarity::RARE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
				nullptr,
				"EPickupRarity",
				"EPickupRarity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ARegularPickup_OnPickup = FName(TEXT("OnPickup"));
	void ARegularPickup::OnPickup(AActor* ActorThatPickedUp)
	{
		RegularPickup_eventOnPickup_Parms Parms;
		Parms.ActorThatPickedUp=ActorThatPickedUp;
		ProcessEvent(FindFunctionChecked(NAME_ARegularPickup_OnPickup),&Parms);
	}
	void ARegularPickup::StaticRegisterNativesARegularPickup()
	{
		UClass* Class = ARegularPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGenerate", &ARegularPickup::execOnGenerate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARegularPickup_OnGenerate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARegularPickup_OnGenerate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARegularPickup_OnGenerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARegularPickup, nullptr, "OnGenerate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARegularPickup_OnGenerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARegularPickup_OnGenerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARegularPickup_OnGenerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARegularPickup_OnGenerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARegularPickup_OnPickup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorThatPickedUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::NewProp_ActorThatPickedUp = { "ActorThatPickedUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RegularPickup_eventOnPickup_Parms, ActorThatPickedUp), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::NewProp_ActorThatPickedUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARegularPickup, nullptr, "OnPickup", nullptr, nullptr, sizeof(RegularPickup_eventOnPickup_Parms), Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARegularPickup_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARegularPickup_OnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARegularPickup_NoRegister()
	{
		return ARegularPickup::StaticClass();
	}
	struct Z_Construct_UClass_ARegularPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupWeaponAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupWeaponAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMagazineSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PickupMagazineSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMuzzleVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupMuzzleVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupBulletDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupBulletDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PickupStat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickupStat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARegularPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARegularPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARegularPickup_OnGenerate, "OnGenerate" }, // 2321325741
		{ &Z_Construct_UFunction_ARegularPickup_OnPickup, "OnPickup" }, // 3916828109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RegularPickup.h" },
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupHealth_MetaData[] = {
		{ "Category", "RegularPickup" },
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupHealth = { "PickupHealth", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularPickup, PickupHealth), METADATA_PARAMS(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupWeaponAccuracy_MetaData[] = {
		{ "Category", "RegularPickup" },
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupWeaponAccuracy = { "PickupWeaponAccuracy", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularPickup, PickupWeaponAccuracy), METADATA_PARAMS(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupWeaponAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupWeaponAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMagazineSize_MetaData[] = {
		{ "Category", "RegularPickup" },
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMagazineSize = { "PickupMagazineSize", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularPickup, PickupMagazineSize), METADATA_PARAMS(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMagazineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMagazineSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMuzzleVelocity_MetaData[] = {
		{ "Category", "RegularPickup" },
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMuzzleVelocity = { "PickupMuzzleVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularPickup, PickupMuzzleVelocity), METADATA_PARAMS(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMuzzleVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMuzzleVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupBulletDamage_MetaData[] = {
		{ "Category", "RegularPickup" },
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupBulletDamage = { "PickupBulletDamage", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularPickup, PickupBulletDamage), METADATA_PARAMS(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupBulletDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupBulletDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupStat_MetaData[] = {
		{ "Category", "RegularPickup" },
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupStat = { "PickupStat", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularPickup, PickupStat), Z_Construct_UEnum_AdvGamesProgramming_EPickupStat, METADATA_PARAMS(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupStat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupStat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegularPickup_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "RegularPickup" },
		{ "ModuleRelativePath", "RegularPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegularPickup, Rarity), Z_Construct_UEnum_AdvGamesProgramming_EPickupRarity, METADATA_PARAMS(Z_Construct_UClass_ARegularPickup_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARegularPickup_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARegularPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupWeaponAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMagazineSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupMuzzleVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupBulletDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_PickupStat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegularPickup_Statics::NewProp_Rarity_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARegularPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARegularPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARegularPickup_Statics::ClassParams = {
		&ARegularPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARegularPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARegularPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARegularPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARegularPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARegularPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARegularPickup, 2147460062);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<ARegularPickup>()
	{
		return ARegularPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARegularPickup(Z_Construct_UClass_ARegularPickup, &ARegularPickup::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("ARegularPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARegularPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
