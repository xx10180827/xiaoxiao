// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_First/Public/MyPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
MY_FIRST_API UClass* Z_Construct_UClass_AMyPlayerState();
MY_FIRST_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_My_First();
// End Cross Module References

// Begin Class AMyPlayerState
void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerState);
UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
{
	return AMyPlayerState::StaticClass();
}
struct Z_Construct_UClass_AMyPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyPlayerState.h" },
		{ "ModuleRelativePath", "Public/MyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_My_First,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerState_Statics::ClassParams = {
	&AMyPlayerState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayerState()
{
	if (!Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton, Z_Construct_UClass_AMyPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton;
}
template<> MY_FIRST_API UClass* StaticClass<AMyPlayerState>()
{
	return AMyPlayerState::StaticClass();
}
AMyPlayerState::AMyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerState);
AMyPlayerState::~AMyPlayerState() {}
// End Class AMyPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerState, AMyPlayerState::StaticClass, TEXT("AMyPlayerState"), &Z_Registration_Info_UClass_AMyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerState), 2358183161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPlayerState_h_2820662102(TEXT("/Script/My_First"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
