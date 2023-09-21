// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WillsGame/WillsGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWillsGameGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WillsGame();
	WILLSGAME_API UClass* Z_Construct_UClass_AWillsGameGameModeBase();
	WILLSGAME_API UClass* Z_Construct_UClass_AWillsGameGameModeBase_NoRegister();
// End Cross Module References
	void AWillsGameGameModeBase::StaticRegisterNativesAWillsGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWillsGameGameModeBase);
	UClass* Z_Construct_UClass_AWillsGameGameModeBase_NoRegister()
	{
		return AWillsGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWillsGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWillsGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WillsGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWillsGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WillsGameGameModeBase.h" },
		{ "ModuleRelativePath", "WillsGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWillsGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWillsGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWillsGameGameModeBase_Statics::ClassParams = {
		&AWillsGameGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWillsGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWillsGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWillsGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AWillsGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWillsGameGameModeBase.OuterSingleton, Z_Construct_UClass_AWillsGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWillsGameGameModeBase.OuterSingleton;
	}
	template<> WILLSGAME_API UClass* StaticClass<AWillsGameGameModeBase>()
	{
		return AWillsGameGameModeBase::StaticClass();
	}
	AWillsGameGameModeBase::AWillsGameGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWillsGameGameModeBase);
	AWillsGameGameModeBase::~AWillsGameGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Will_Desktop_projects_unreal_games_WillsGame_WillsGame_Source_WillsGame_WillsGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Desktop_projects_unreal_games_WillsGame_WillsGame_Source_WillsGame_WillsGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWillsGameGameModeBase, AWillsGameGameModeBase::StaticClass, TEXT("AWillsGameGameModeBase"), &Z_Registration_Info_UClass_AWillsGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWillsGameGameModeBase), 1645985054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Will_Desktop_projects_unreal_games_WillsGame_WillsGame_Source_WillsGame_WillsGameGameModeBase_h_1176180246(TEXT("/Script/WillsGame"),
		Z_CompiledInDeferFile_FID_Users_Will_Desktop_projects_unreal_games_WillsGame_WillsGame_Source_WillsGame_WillsGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Will_Desktop_projects_unreal_games_WillsGame_WillsGame_Source_WillsGame_WillsGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
