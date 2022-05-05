// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter1/EnemigoTerrestre2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoTerrestre2() {}
// Cross Module References
	STARFIGHTER1_API UClass* Z_Construct_UClass_AEnemigoTerrestre2_NoRegister();
	STARFIGHTER1_API UClass* Z_Construct_UClass_AEnemigoTerrestre2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starfighter1();
// End Cross Module References
	void AEnemigoTerrestre2::StaticRegisterNativesAEnemigoTerrestre2()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoTerrestre2_NoRegister()
	{
		return AEnemigoTerrestre2::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoTerrestre2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoTerrestre2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoTerrestre2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoTerrestre2.h" },
		{ "ModuleRelativePath", "EnemigoTerrestre2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoTerrestre2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoTerrestre2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoTerrestre2_Statics::ClassParams = {
		&AEnemigoTerrestre2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoTerrestre2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoTerrestre2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoTerrestre2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoTerrestre2, 1570820751);
	template<> STARFIGHTER1_API UClass* StaticClass<AEnemigoTerrestre2>()
	{
		return AEnemigoTerrestre2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoTerrestre2(Z_Construct_UClass_AEnemigoTerrestre2, &AEnemigoTerrestre2::StaticClass, TEXT("/Script/Starfighter1"), TEXT("AEnemigoTerrestre2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoTerrestre2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
