// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_First/Public/MyObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
MY_FIRST_API UClass* Z_Construct_UClass_UMyObject();
MY_FIRST_API UClass* Z_Construct_UClass_UMyObject_NoRegister();
MY_FIRST_API UScriptStruct* Z_Construct_UScriptStruct_FMyDataTableStruct();
UPackage* Z_Construct_UPackage__Script_My_First();
// End Cross Module References

// Begin ScriptStruct FMyDataTableStruct
static_assert(std::is_polymorphic<FMyDataTableStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMyDataTableStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyDataTableStruct;
class UScriptStruct* FMyDataTableStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyDataTableStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyDataTableStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyDataTableStruct, (UObject*)Z_Construct_UPackage__Script_My_First(), TEXT("MyDataTableStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyDataTableStruct.OuterSingleton;
}
template<> MY_FIRST_API UScriptStruct* StaticStruct<FMyDataTableStruct>()
{
	return FMyDataTableStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyDataTableStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "MyItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xd0\xbd\xe1\xb9\xb9\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xd0\xbd\xe1\xb9\xb9\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MyItem" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "MyItem" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyDataTableStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyDataTableStruct, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyDataTableStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyDataTableStruct, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_My_First,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MyDataTableStruct",
	Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::PropPointers),
	sizeof(FMyDataTableStruct),
	alignof(FMyDataTableStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyDataTableStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyDataTableStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyDataTableStruct.InnerSingleton, Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyDataTableStruct.InnerSingleton;
}
// End ScriptStruct FMyDataTableStruct

// Begin Class UMyObject
void UMyObject::StaticRegisterNativesUMyObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyObject);
UClass* Z_Construct_UClass_UMyObject_NoRegister()
{
	return UMyObject::StaticClass();
}
struct Z_Construct_UClass_UMyObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyObject.h" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyDataTableStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyDataTableStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyObject_Statics::NewProp_MyDataTableStruct = { "MyDataTableStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyObject, MyDataTableStruct), Z_Construct_UScriptStruct_FMyDataTableStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyDataTableStruct_MetaData), NewProp_MyDataTableStruct_MetaData) }; // 1549254254
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyObject_Statics::NewProp_MyDataTableStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_My_First,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyObject_Statics::ClassParams = {
	&UMyObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyObject()
{
	if (!Z_Registration_Info_UClass_UMyObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyObject.OuterSingleton, Z_Construct_UClass_UMyObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyObject.OuterSingleton;
}
template<> MY_FIRST_API UClass* StaticClass<UMyObject>()
{
	return UMyObject::StaticClass();
}
UMyObject::UMyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyObject);
UMyObject::~UMyObject() {}
// End Class UMyObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMyDataTableStruct::StaticStruct, Z_Construct_UScriptStruct_FMyDataTableStruct_Statics::NewStructOps, TEXT("MyDataTableStruct"), &Z_Registration_Info_UScriptStruct_MyDataTableStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyDataTableStruct), 1549254254U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyObject, UMyObject::StaticClass, TEXT("UMyObject"), &Z_Registration_Info_UClass_UMyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyObject), 622122129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_1620096932(TEXT("/Script/My_First"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
