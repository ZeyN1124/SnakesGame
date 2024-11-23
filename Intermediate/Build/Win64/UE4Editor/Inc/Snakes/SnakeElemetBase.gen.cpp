// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snakes/SnakeElemetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeElemetBase() {}
// Cross Module References
	SNAKES_API UClass* Z_Construct_UClass_ASnakeElemetBase_NoRegister();
	SNAKES_API UClass* Z_Construct_UClass_ASnakeElemetBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Snakes();
// End Cross Module References
	void ASnakeElemetBase::StaticRegisterNativesASnakeElemetBase()
	{
	}
	UClass* Z_Construct_UClass_ASnakeElemetBase_NoRegister()
	{
		return ASnakeElemetBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeElemetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeElemetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Snakes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElemetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeElemetBase.h" },
		{ "ModuleRelativePath", "SnakeElemetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeElemetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeElemetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeElemetBase_Statics::ClassParams = {
		&ASnakeElemetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASnakeElemetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElemetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeElemetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeElemetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeElemetBase, 1660781983);
	template<> SNAKES_API UClass* StaticClass<ASnakeElemetBase>()
	{
		return ASnakeElemetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeElemetBase(Z_Construct_UClass_ASnakeElemetBase, &ASnakeElemetBase::StaticClass, TEXT("/Script/Snakes"), TEXT("ASnakeElemetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeElemetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
