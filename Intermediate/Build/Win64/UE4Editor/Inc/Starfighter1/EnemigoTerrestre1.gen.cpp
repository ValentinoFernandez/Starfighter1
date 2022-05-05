// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter1/EnemigoTerrestre1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoTerrestre1() {}
// Cross Module References
	STARFIGHTER1_API UClass* Z_Construct_UClass_AEnemigoTerrestre1_NoRegister();
	STARFIGHTER1_API UClass* Z_Construct_UClass_AEnemigoTerrestre1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starfighter1();
// End Cross Module References
	void AEnemigoTerrestre1::StaticRegisterNativesAEnemigoTerrestre1()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoTerrestre1_NoRegister()
	{
		return AEnemigoTerrestre1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoTerrestre1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoTerrestre1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoTerrestre1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoTerrestre1.h" },
		{ "ModuleRelativePath", "EnemigoTerrestre1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoTerrestre1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoTerrestre1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoTerrestre1_Statics::ClassParams = {
		&AEnemigoTerrestre1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoTerrestre1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoTerrestre1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoTerrestre1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoTerrestre1, 2458769447);
	template<> STARFIGHTER1_API UClass* StaticClass<AEnemigoTerrestre1>()
	{
		return AEnemigoTerrestre1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoTerrestre1(Z_Construct_UClass_AEnemigoTerrestre1, &AEnemigoTerrestre1::StaticClass, TEXT("/Script/Starfighter1"), TEXT("AEnemigoTerrestre1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoTerrestre1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
