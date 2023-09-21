// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWillsGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WillsGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WillsGame()
	{
		if (!Z_Registration_Info_UPackage__Script_WillsGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WillsGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCC106CD9,
				0x2621099D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WillsGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WillsGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WillsGame(Z_Construct_UPackage__Script_WillsGame, TEXT("/Script/WillsGame"), Z_Registration_Info_UPackage__Script_WillsGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCC106CD9, 0x2621099D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
