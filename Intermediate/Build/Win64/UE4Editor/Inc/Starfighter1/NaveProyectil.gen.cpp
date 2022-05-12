// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter1/NaveProyectil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveProyectil() {}
// Cross Module References
	STARFIGHTER1_API UClass* Z_Construct_UClass_ANaveProyectil_NoRegister();
	STARFIGHTER1_API UClass* Z_Construct_UClass_ANaveProyectil();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Starfighter1();
// End Cross Module References
	void ANaveProyectil::StaticRegisterNativesANaveProyectil()
	{
	}
	UClass* Z_Construct_UClass_ANaveProyectil_NoRegister()
	{
		return ANaveProyectil::StaticClass();
	}
	struct Z_Construct_UClass_ANaveProyectil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveProyectil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveProyectil_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveProyectil.h" },
		{ "ModuleRelativePath", "NaveProyectil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveProyectil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveProyectil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveProyectil_Statics::ClassParams = {
		&ANaveProyectil::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveProyectil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveProyectil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveProyectil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveProyectil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveProyectil, 2038856204);
	template<> STARFIGHTER1_API UClass* StaticClass<ANaveProyectil>()
	{
		return ANaveProyectil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveProyectil(Z_Construct_UClass_ANaveProyectil, &ANaveProyectil::StaticClass, TEXT("/Script/Starfighter1"), TEXT("ANaveProyectil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveProyectil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
