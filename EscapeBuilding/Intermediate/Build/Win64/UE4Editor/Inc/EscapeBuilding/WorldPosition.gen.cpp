// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeBuilding/WorldPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPosition() {}
// Cross Module References
	ESCAPEBUILDING_API UClass* Z_Construct_UClass_UWorldPosition_NoRegister();
	ESCAPEBUILDING_API UClass* Z_Construct_UClass_UWorldPosition();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EscapeBuilding();
// End Cross Module References
	void UWorldPosition::StaticRegisterNativesUWorldPosition()
	{
	}
	UClass* Z_Construct_UClass_UWorldPosition_NoRegister()
	{
		return UWorldPosition::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeBuilding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WorldPosition.h" },
		{ "ModuleRelativePath", "WorldPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldPosition_Statics::ClassParams = {
		&UWorldPosition::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldPosition, 4195025764);
	template<> ESCAPEBUILDING_API UClass* StaticClass<UWorldPosition>()
	{
		return UWorldPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldPosition(Z_Construct_UClass_UWorldPosition, &UWorldPosition::StaticClass, TEXT("/Script/EscapeBuilding"), TEXT("UWorldPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
