// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_First_init() {}
	MY_FIRST_API UFunction* Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_My_First;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_My_First()
	{
		if (!Z_Registration_Info_UPackage__Script_My_First.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/My_First",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x86C532E6,
				0x1867F995,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_My_First.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_My_First.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_My_First(Z_Construct_UPackage__Script_My_First, TEXT("/Script/My_First"), Z_Registration_Info_UPackage__Script_My_First, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x86C532E6, 0x1867F995));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
