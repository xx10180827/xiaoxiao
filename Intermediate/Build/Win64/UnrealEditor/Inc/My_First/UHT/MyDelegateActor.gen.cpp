// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_First/Public/MyDelegateActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDelegateActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MY_FIRST_API UClass* Z_Construct_UClass_AMyDelegateActor();
MY_FIRST_API UClass* Z_Construct_UClass_AMyDelegateActor_NoRegister();
MY_FIRST_API UFunction* Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_My_First();
// End Cross Module References

// Begin Delegate FDynamicMultiOneDelegate
struct Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics
{
	struct _Script_My_First_eventDynamicMultiOneDelegate_Parms
	{
		FString MyString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xcc\xac\xef\xbf\xbd\xe0\xb2\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd--\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcc\xac\xef\xbf\xbd\xe0\xb2\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd--\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MyString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::NewProp_MyString = { "MyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_My_First_eventDynamicMultiOneDelegate_Parms, MyString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::NewProp_MyString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_My_First, nullptr, "DynamicMultiOneDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::_Script_My_First_eventDynamicMultiOneDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::_Script_My_First_eventDynamicMultiOneDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDynamicMultiOneDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicMultiOneDelegate, const FString& MyString)
{
	struct _Script_My_First_eventDynamicMultiOneDelegate_Parms
	{
		FString MyString;
	};
	_Script_My_First_eventDynamicMultiOneDelegate_Parms Parms;
	Parms.MyString=MyString;
	DynamicMultiOneDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDynamicMultiOneDelegate

// Begin Class AMyDelegateActor
void AMyDelegateActor::StaticRegisterNativesAMyDelegateActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyDelegateActor);
UClass* Z_Construct_UClass_AMyDelegateActor_NoRegister()
{
	return AMyDelegateActor::StaticClass();
}
struct Z_Construct_UClass_AMyDelegateActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyDelegateActor.h" },
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMultiDelegate_MetaData[] = {
		{ "Category", "MyDelegate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xcc\xac\xef\xbf\xbd\xe0\xb2\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//\xef\xbf\xbd\xc3\xb8\xc3\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd0\xbf\xc9\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyDelegateActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xcc\xac\xef\xbf\xbd\xe0\xb2\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xc3\xb8\xc3\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd0\xbf\xc9\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DynamicMultiDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDelegateActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyDelegateActor_Statics::NewProp_DynamicMultiDelegate = { "DynamicMultiDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDelegateActor, DynamicMultiDelegate), Z_Construct_UDelegateFunction_My_First_DynamicMultiOneDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMultiDelegate_MetaData), NewProp_DynamicMultiDelegate_MetaData) }; // 1244826914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDelegateActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDelegateActor_Statics::NewProp_DynamicMultiDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyDelegateActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_My_First,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDelegateActor_Statics::ClassParams = {
	&AMyDelegateActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyDelegateActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDelegateActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyDelegateActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyDelegateActor()
{
	if (!Z_Registration_Info_UClass_AMyDelegateActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDelegateActor.OuterSingleton, Z_Construct_UClass_AMyDelegateActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyDelegateActor.OuterSingleton;
}
template<> MY_FIRST_API UClass* StaticClass<AMyDelegateActor>()
{
	return AMyDelegateActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDelegateActor);
AMyDelegateActor::~AMyDelegateActor() {}
// End Class AMyDelegateActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyDelegateActor, AMyDelegateActor::StaticClass, TEXT("AMyDelegateActor"), &Z_Registration_Info_UClass_AMyDelegateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDelegateActor), 4025555473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_2350873228(TEXT("/Script/My_First"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
