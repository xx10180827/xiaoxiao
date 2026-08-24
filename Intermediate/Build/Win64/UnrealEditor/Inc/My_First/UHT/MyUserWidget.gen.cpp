// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_First/Public/MyUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}

// Begin Cross Module References
MY_FIRST_API UClass* Z_Construct_UClass_UMyUserWidget();
MY_FIRST_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_My_First();
// End Cross Module References

// Begin Class UMyUserWidget Function OnMyButtonExit
struct Z_Construct_UFunction_UMyUserWidget_OnMyButtonExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc5\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_OnMyButtonExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "OnMyButtonExit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_OnMyButtonExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_OnMyButtonExit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyUserWidget_OnMyButtonExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_OnMyButtonExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execOnMyButtonExit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMyButtonExit();
	P_NATIVE_END;
}
// End Class UMyUserWidget Function OnMyButtonExit

// Begin Class UMyUserWidget Function OnMyButtonStart
struct Z_Construct_UFunction_UMyUserWidget_OnMyButtonStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd0\xb4\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd0\xb4\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_OnMyButtonStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "OnMyButtonStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_OnMyButtonStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget_OnMyButtonStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyUserWidget_OnMyButtonStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget_OnMyButtonStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget::execOnMyButtonStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMyButtonStart();
	P_NATIVE_END;
}
// End Class UMyUserWidget Function OnMyButtonStart

// Begin Class UMyUserWidget
void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
{
	UClass* Class = UMyUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMyButtonExit", &UMyUserWidget::execOnMyButtonExit },
		{ "OnMyButtonStart", &UMyUserWidget::execOnMyButtonStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyUserWidget);
UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
{
	return UMyUserWidget::StaticClass();
}
struct Z_Construct_UClass_UMyUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyUserWidget.h" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyButtonStart_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyButtonExit_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyHealth_MetaData[] = {
		{ "Category", "MyHealth" },
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyMaxHealth_MetaData[] = {
		{ "Category", "MyHealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdMyHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/MyUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdMyHealth" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyButtonStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyButtonExit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserWidget_OnMyButtonExit, "OnMyButtonExit" }, // 311129284
		{ &Z_Construct_UFunction_UMyUserWidget_OnMyButtonStart, "OnMyButtonStart" }, // 3327463758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MyButtonStart = { "MyButtonStart", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, MyButtonStart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyButtonStart_MetaData), NewProp_MyButtonStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MyButtonExit = { "MyButtonExit", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, MyButtonExit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyButtonExit_MetaData), NewProp_MyButtonExit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MyHealth = { "MyHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, MyHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyHealth_MetaData), NewProp_MyHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MyMaxHealth = { "MyMaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget, MyMaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyMaxHealth_MetaData), NewProp_MyMaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MyButtonStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MyButtonExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MyHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_MyMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_My_First,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
	&UMyUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyUserWidget()
{
	if (!Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyUserWidget.OuterSingleton;
}
template<> MY_FIRST_API UClass* StaticClass<UMyUserWidget>()
{
	return UMyUserWidget::StaticClass();
}
UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
UMyUserWidget::~UMyUserWidget() {}
// End Class UMyUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyUserWidget, UMyUserWidget::StaticClass, TEXT("UMyUserWidget"), &Z_Registration_Info_UClass_UMyUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyUserWidget), 141601032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyUserWidget_h_1188043847(TEXT("/Script/My_First"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
