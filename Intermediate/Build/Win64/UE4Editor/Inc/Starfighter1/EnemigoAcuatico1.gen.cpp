// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter1/EnemigoAcuatico1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAcuatico1() {}
// Cross Module References
	STARFIGHTER1_API UClass* Z_Construct_UClass_AEnemigoAcuatico1_NoRegister();
	STARFIGHTER1_API UClass* Z_Construct_UClass_AEnemigoAcuatico1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starfighter1();
// End Cross Module References
	void AEnemigoAcuatico1::StaticRegisterNativesAEnemigoAcuatico1()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAcuatico1_NoRegister()
	{
		return AEnemigoAcuatico1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAcuatico1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAcuatico1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAcuatico1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoAcuatico1.h" },
		{ "ModuleRelativePath", "EnemigoAcuatico1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAcuatico1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAcuatico1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAcuatico1_Statics::ClassParams = {
		&AEnemigoAcuatico1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAcuatico1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAcuatico1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAcuatico1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAcuatico1, 1237544278);
	template<> STARFIGHTER1_API UClass* StaticClass<AEnemigoAcuatico1>()
	{
		return AEnemigoAcuatico1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAcuatico1(Z_Construct_UClass_AEnemigoAcuatico1, &AEnemigoAcuatico1::StaticClass, TEXT("/Script/Starfighter1"), TEXT("AEnemigoAcuatico1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAcuatico1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
