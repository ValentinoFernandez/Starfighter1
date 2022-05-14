// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef STARFIGHTER1_Proyectil1_generated_h
#error "Proyectil1.generated.h already included, missing '#pragma once' in Proyectil1.h"
#endif
#define STARFIGHTER1_Proyectil1_generated_h

#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_SPARSE_DATA
#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProyectil1(); \
	friend struct Z_Construct_UClass_AProyectil1_Statics; \
public: \
	DECLARE_CLASS(AProyectil1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starfighter1"), NO_API) \
	DECLARE_SERIALIZER(AProyectil1)


#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProyectil1(); \
	friend struct Z_Construct_UClass_AProyectil1_Statics; \
public: \
	DECLARE_CLASS(AProyectil1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starfighter1"), NO_API) \
	DECLARE_SERIALIZER(AProyectil1)


#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProyectil1(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProyectil1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectil1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectil1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectil1(AProyectil1&&); \
	NO_API AProyectil1(const AProyectil1&); \
public:


#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectil1(AProyectil1&&); \
	NO_API AProyectil1(const AProyectil1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectil1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectil1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProyectil1)


#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProyectil1, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProyectil1, ProjectileMovement); }


#define Starfighter1_Source_Starfighter1_Proyectil1_h_11_PROLOG
#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_PRIVATE_PROPERTY_OFFSET \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_SPARSE_DATA \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_RPC_WRAPPERS \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_INCLASS \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Starfighter1_Source_Starfighter1_Proyectil1_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_PRIVATE_PROPERTY_OFFSET \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_SPARSE_DATA \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_INCLASS_NO_PURE_DECLS \
	Starfighter1_Source_Starfighter1_Proyectil1_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER1_API UClass* StaticClass<class AProyectil1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Starfighter1_Source_Starfighter1_Proyectil1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
