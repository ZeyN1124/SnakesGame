// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKES_SnakeBase_generated_h
#error "SnakeBase.generated.h already included, missing '#pragma once' in SnakeBase.h"
#endif
#define SNAKES_SnakeBase_generated_h

#define Snakes_Source_Snakes_SnakeBase_h_12_SPARSE_DATA
#define Snakes_Source_Snakes_SnakeBase_h_12_RPC_WRAPPERS
#define Snakes_Source_Snakes_SnakeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Snakes_Source_Snakes_SnakeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeBase(); \
	friend struct Z_Construct_UClass_ASnakeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snakes"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBase)


#define Snakes_Source_Snakes_SnakeBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASnakeBase(); \
	friend struct Z_Construct_UClass_ASnakeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snakes"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBase)


#define Snakes_Source_Snakes_SnakeBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeBase(ASnakeBase&&); \
	NO_API ASnakeBase(const ASnakeBase&); \
public:


#define Snakes_Source_Snakes_SnakeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeBase(ASnakeBase&&); \
	NO_API ASnakeBase(const ASnakeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeBase)


#define Snakes_Source_Snakes_SnakeBase_h_12_PRIVATE_PROPERTY_OFFSET
#define Snakes_Source_Snakes_SnakeBase_h_9_PROLOG
#define Snakes_Source_Snakes_SnakeBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snakes_Source_Snakes_SnakeBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Snakes_Source_Snakes_SnakeBase_h_12_SPARSE_DATA \
	Snakes_Source_Snakes_SnakeBase_h_12_RPC_WRAPPERS \
	Snakes_Source_Snakes_SnakeBase_h_12_INCLASS \
	Snakes_Source_Snakes_SnakeBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Snakes_Source_Snakes_SnakeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snakes_Source_Snakes_SnakeBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Snakes_Source_Snakes_SnakeBase_h_12_SPARSE_DATA \
	Snakes_Source_Snakes_SnakeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Snakes_Source_Snakes_SnakeBase_h_12_INCLASS_NO_PURE_DECLS \
	Snakes_Source_Snakes_SnakeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKES_API UClass* StaticClass<class ASnakeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Snakes_Source_Snakes_SnakeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
