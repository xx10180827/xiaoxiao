// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_First/Public/MyBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBullet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MY_FIRST_API UClass* Z_Construct_UClass_AMyBullet();
MY_FIRST_API UClass* Z_Construct_UClass_AMyBullet_NoRegister();
UPackage* Z_Construct_UPackage__Script_My_First();
// End Cross Module References

// Begin Class AMyBullet
void AMyBullet::StaticRegisterNativesAMyBullet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyBullet);
UClass* Z_Construct_UClass_AMyBullet_NoRegister()
{
	return AMyBullet::StaticClass();
}
struct Z_Construct_UClass_AMyBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyBullet.h" },
		{ "ModuleRelativePath", "Public/MyBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyBulletMesh_MetaData[] = {
		{ "Category", "Mycomponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MySphere_MetaData[] = {
		{ "Category", "Mycomponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbdMesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbdMesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyBulletMovement_MetaData[] = {
		{ "Category", "Mycomponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb2\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb2\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBulletMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MySphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBulletMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBullet_Statics::NewProp_MyBulletMesh = { "MyBulletMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBullet, MyBulletMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyBulletMesh_MetaData), NewProp_MyBulletMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBullet_Statics::NewProp_MySphere = { "MySphere", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBullet, MySphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MySphere_MetaData), NewProp_MySphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBullet_Statics::NewProp_MyBulletMovement = { "MyBulletMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBullet, MyBulletMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyBulletMovement_MetaData), NewProp_MyBulletMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBullet_Statics::NewProp_MyBulletMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBullet_Statics::NewProp_MySphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBullet_Statics::NewProp_MyBulletMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyBullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_My_First,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyBullet_Statics::ClassParams = {
	&AMyBullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyBullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyBullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyBullet()
{
	if (!Z_Registration_Info_UClass_AMyBullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyBullet.OuterSingleton, Z_Construct_UClass_AMyBullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyBullet.OuterSingleton;
}
template<> MY_FIRST_API UClass* StaticClass<AMyBullet>()
{
	return AMyBullet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBullet);
AMyBullet::~AMyBullet() {}
// End Class AMyBullet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyBullet, AMyBullet::StaticClass, TEXT("AMyBullet"), &Z_Registration_Info_UClass_AMyBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyBullet), 1628891431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_1116019371(TEXT("/Script/My_First"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
