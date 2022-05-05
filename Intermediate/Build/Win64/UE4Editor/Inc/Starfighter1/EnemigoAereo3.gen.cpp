// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter1/EnemigoAereo3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAereo3() {}
// Cross Module References
	STARFIGHTER1_API UClass* Z_Construct_UClass_AEnemigoAereo3_NoRegister();
	STARFIGHTER1_API UClass* Z_Construct_UClass_AEnemigoAereo3();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starfighter1();
// End Cross Module References
	void AEnemigoAereo3::StaticRegisterNativesAEnemigoAereo3()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAereo3_NoRegister()
	{
		return AEnemigoAereo3::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAereo3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAereo3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAereo3_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoAereo3.h" },
		{ "ModuleRelativePath", "EnemigoAereo3.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAereo3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAereo3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAereo3_Statics::ClassParams = {
		&AEnemigoAereo3::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAereo3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereo3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAereo3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAereo3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAereo3, 4089779949);
	template<> STARFIGHTER1_API UClass* StaticClass<AEnemigoAereo3>()
	{
		return AEnemigoAereo3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAereo3(Z_Construct_UClass_AEnemigoAereo3, &AEnemigoAereo3::StaticClass, TEXT("/Script/Starfighter1"), TEXT("AEnemigoAereo3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAereo3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
