// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter1/Starfighter1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarfighter1GameModeBase() {}
// Cross Module References
	STARFIGHTER1_API UClass* Z_Construct_UClass_AStarfighter1GameModeBase_NoRegister();
	STARFIGHTER1_API UClass* Z_Construct_UClass_AStarfighter1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Starfighter1();
// End Cross Module References
	void AStarfighter1GameModeBase::StaticRegisterNativesAStarfighter1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AStarfighter1GameModeBase_NoRegister()
	{
		return AStarfighter1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStarfighter1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarfighter1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarfighter1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Starfighter1GameModeBase.h" },
		{ "ModuleRelativePath", "Starfighter1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarfighter1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarfighter1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarfighter1GameModeBase_Statics::ClassParams = {
		&AStarfighter1GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStarfighter1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarfighter1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarfighter1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarfighter1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarfighter1GameModeBase, 1746735484);
	template<> STARFIGHTER1_API UClass* StaticClass<AStarfighter1GameModeBase>()
	{
		return AStarfighter1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarfighter1GameModeBase(Z_Construct_UClass_AStarfighter1GameModeBase, &AStarfighter1GameModeBase::StaticClass, TEXT("/Script/Starfighter1"), TEXT("AStarfighter1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarfighter1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
