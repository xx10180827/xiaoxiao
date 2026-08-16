// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_First/Public/MyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
MY_FIRST_API UClass* Z_Construct_UClass_AMyPawn();
MY_FIRST_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
MY_FIRST_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
MY_FIRST_API UClass* Z_Construct_UClass_UMyObject_NoRegister();
MY_FIRST_API UEnum* Z_Construct_UEnum_My_First_MyEnumType();
MY_FIRST_API UScriptStruct* Z_Construct_UScriptStruct_FMyTeststruct();
UPackage* Z_Construct_UPackage__Script_My_First();
// End Cross Module References

// Begin Enum MyEnumType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_MyEnumType;
static UEnum* MyEnumType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_MyEnumType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_MyEnumType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_My_First_MyEnumType, (UObject*)Z_Construct_UPackage__Script_My_First(), TEXT("MyEnumType"));
	}
	return Z_Registration_Info_UEnum_MyEnumType.OuterSingleton;
}
template<> MY_FIRST_API UEnum* StaticEnum<MyEnumType::MyEnum>()
{
	return MyEnumType_StaticEnum();
}
struct Z_Construct_UEnum_My_First_MyEnumType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UE\xc3\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UE\xc3\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "Type1.Name", "MyEnumType::Type1" },
		{ "Type2.Name", "MyEnumType::Type2" },
		{ "Type3.Name", "MyEnumType::Type3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MyEnumType::Type1", (int64)MyEnumType::Type1 },
		{ "MyEnumType::Type2", (int64)MyEnumType::Type2 },
		{ "MyEnumType::Type3", (int64)MyEnumType::Type3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_My_First_MyEnumType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_My_First,
	nullptr,
	"MyEnumType",
	"MyEnumType::MyEnum",
	Z_Construct_UEnum_My_First_MyEnumType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_My_First_MyEnumType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_My_First_MyEnumType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_My_First_MyEnumType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_My_First_MyEnumType()
{
	if (!Z_Registration_Info_UEnum_MyEnumType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MyEnumType.InnerSingleton, Z_Construct_UEnum_My_First_MyEnumType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_MyEnumType.InnerSingleton;
}
// End Enum MyEnumType

// Begin ScriptStruct FMyTeststruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyTeststruct;
class UScriptStruct* FMyTeststruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyTeststruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyTeststruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyTeststruct, (UObject*)Z_Construct_UPackage__Script_My_First(), TEXT("MyTeststruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyTeststruct.OuterSingleton;
}
template<> MY_FIRST_API UScriptStruct* StaticStruct<FMyTeststruct>()
{
	return FMyTeststruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyTeststruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UE\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UE\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "MytestStruct" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MytestStruct" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyTeststruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyTeststruct_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyTeststruct, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyTeststruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyTeststruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyTeststruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyTeststruct_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyTeststruct_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyTeststruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyTeststruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_My_First,
	nullptr,
	&NewStructOps,
	"MyTeststruct",
	Z_Construct_UScriptStruct_FMyTeststruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyTeststruct_Statics::PropPointers),
	sizeof(FMyTeststruct),
	alignof(FMyTeststruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyTeststruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyTeststruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyTeststruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyTeststruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyTeststruct.InnerSingleton, Z_Construct_UScriptStruct_FMyTeststruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyTeststruct.InnerSingleton;
}
// End ScriptStruct FMyTeststruct

// Begin Class AMyPawn Function PrintF1
struct Z_Construct_UFunction_AMyPawn_PrintF1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Myfunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc \n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_PrintF1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "PrintF1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintF1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_PrintF1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPawn_PrintF1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_PrintF1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execPrintF1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintF1();
	P_NATIVE_END;
}
// End Class AMyPawn Function PrintF1

// Begin Class AMyPawn Function PrintF2
struct Z_Construct_UFunction_AMyPawn_PrintF2_Statics
{
	struct MyPawn_eventPrintF2_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Myfunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xba\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xba\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMyPawn_PrintF2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyPawn_eventPrintF2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPawn_PrintF2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyPawn_eventPrintF2_Parms), &Z_Construct_UFunction_AMyPawn_PrintF2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_PrintF2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_PrintF2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_PrintF2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "PrintF2", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_PrintF2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::MyPawn_eventPrintF2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_PrintF2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_PrintF2_Statics::MyPawn_eventPrintF2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_PrintF2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_PrintF2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execPrintF2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PrintF2();
	P_NATIVE_END;
}
// End Class AMyPawn Function PrintF2

// Begin Class AMyPawn Function PrintTest
struct Z_Construct_UFunction_AMyPawn_PrintTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//meta\xd4\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "DisplayName", "MyPrintTest" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "meta\xd4\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_PrintTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "PrintTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_PrintTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_PrintTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPawn_PrintTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_PrintTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execPrintTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintTest();
	P_NATIVE_END;
}
// End Class AMyPawn Function PrintTest

// Begin Class AMyPawn Function Test1
static const FName NAME_AMyPawn_Test1 = FName(TEXT("Test1"));
void AMyPawn::Test1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMyPawn_Test1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMyPawn_Test1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintImplementableEvent\xef\xbf\xbd\xef\xbf\xbd""c++\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd  \xd6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd0\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintImplementableEvent\xef\xbf\xbd\xef\xbf\xbd""c++\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd  \xd6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd0\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Test1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Test1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Test1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPawn_Test1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Test1_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyPawn Function Test1

// Begin Class AMyPawn Function Test2
struct MyPawn_eventTest2_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	MyPawn_eventTest2_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_AMyPawn_Test2 = FName(TEXT("Test2"));
int32 AMyPawn::Test2()
{
	MyPawn_eventTest2_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AMyPawn_Test2);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AMyPawn_Test2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_Test2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTest2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Test2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Test2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Test2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Test2", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Test2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test2_Statics::PropPointers), sizeof(MyPawn_eventTest2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Test2_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyPawn_eventTest2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_Test2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Test2_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyPawn Function Test2

// Begin Class AMyPawn Function Test3
struct MyPawn_eventTest3_Parms
{
	FString MyString;
};
static const FName NAME_AMyPawn_Test3 = FName(TEXT("Test3"));
void AMyPawn::Test3(const FString& MyString)
{
	MyPawn_eventTest3_Parms Parms;
	Parms.MyString=MyString;
	UFunction* Func = FindFunctionChecked(NAME_AMyPawn_Test3);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMyPawn_Test3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MyString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyPawn_Test3_Statics::NewProp_MyString = { "MyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTest3_Parms, MyString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyString_MetaData), NewProp_MyString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Test3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Test3_Statics::NewProp_MyString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Test3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Test3", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Test3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test3_Statics::PropPointers), sizeof(MyPawn_eventTest3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Test3_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Test3_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyPawn_eventTest3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_Test3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Test3_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMyPawn Function Test3

// Begin Class AMyPawn Function TestA
static const FName NAME_AMyPawn_TestA = FName(TEXT("TestA"));
void AMyPawn::TestA()
{
	UFunction* Func = FindFunctionChecked(NAME_AMyPawn_TestA);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		TestA_Implementation();
	}
}
struct Z_Construct_UFunction_AMyPawn_TestA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintNativeEvent\xef\xbf\xbd\xef\xbf\xbd""c++\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbb\xef\xbf\xbd\xef\xbf\xbd\xdf\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintNativeEvent\xef\xbf\xbd\xef\xbf\xbd""c++\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbb\xef\xbf\xbd\xef\xbf\xbd\xdf\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_TestA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "TestA", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestA_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_TestA_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPawn_TestA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_TestA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execTestA)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestA_Implementation();
	P_NATIVE_END;
}
// End Class AMyPawn Function TestA

// Begin Class AMyPawn Function TestB
struct MyPawn_eventTestB_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	MyPawn_eventTestB_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_AMyPawn_TestB = FName(TEXT("TestB"));
int32 AMyPawn::TestB()
{
	UFunction* Func = FindFunctionChecked(NAME_AMyPawn_TestB);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MyPawn_eventTestB_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return TestB_Implementation();
	}
}
struct Z_Construct_UFunction_AMyPawn_TestB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_TestB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTestB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_TestB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_TestB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_TestB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "TestB", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_TestB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestB_Statics::PropPointers), sizeof(MyPawn_eventTestB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestB_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_TestB_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyPawn_eventTestB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_TestB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_TestB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execTestB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TestB_Implementation();
	P_NATIVE_END;
}
// End Class AMyPawn Function TestB

// Begin Class AMyPawn Function TestC
struct MyPawn_eventTestC_Parms
{
	FString mystring;
};
static const FName NAME_AMyPawn_TestC = FName(TEXT("TestC"));
void AMyPawn::TestC(const FString& mystring)
{
	UFunction* Func = FindFunctionChecked(NAME_AMyPawn_TestC);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MyPawn_eventTestC_Parms Parms;
		Parms.mystring=mystring;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		TestC_Implementation(mystring);
	}
}
struct Z_Construct_UFunction_AMyPawn_TestC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mystring_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_mystring;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyPawn_TestC_Statics::NewProp_mystring = { "mystring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTestC_Parms, mystring), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mystring_MetaData), NewProp_mystring_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_TestC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_TestC_Statics::NewProp_mystring,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_TestC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "TestC", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_TestC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestC_Statics::PropPointers), sizeof(MyPawn_eventTestC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestC_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_TestC_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyPawn_eventTestC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_TestC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_TestC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execTestC)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_mystring);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestC_Implementation(Z_Param_mystring);
	P_NATIVE_END;
}
// End Class AMyPawn Function TestC

// Begin Class AMyPawn Function TestD
struct MyPawn_eventTestD_Parms
{
	FString mystring;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	MyPawn_eventTestD_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_AMyPawn_TestD = FName(TEXT("TestD"));
int32 AMyPawn::TestD(const FString& mystring)
{
	UFunction* Func = FindFunctionChecked(NAME_AMyPawn_TestD);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MyPawn_eventTestD_Parms Parms;
		Parms.mystring=mystring;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return TestD_Implementation(mystring);
	}
}
struct Z_Construct_UFunction_AMyPawn_TestD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mystring_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_mystring;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_mystring = { "mystring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTestD_Parms, mystring), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mystring_MetaData), NewProp_mystring_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventTestD_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_TestD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_mystring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_TestD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_TestD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "TestD", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_TestD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestD_Statics::PropPointers), sizeof(MyPawn_eventTestD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_TestD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_TestD_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyPawn_eventTestD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_TestD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_TestD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execTestD)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_mystring);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TestD_Implementation(Z_Param_mystring);
	P_NATIVE_END;
}
// End Class AMyPawn Function TestD

// Begin Class AMyPawn
void AMyPawn::StaticRegisterNativesAMyPawn()
{
	UClass* Class = AMyPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PrintF1", &AMyPawn::execPrintF1 },
		{ "PrintF2", &AMyPawn::execPrintF2 },
		{ "PrintTest", &AMyPawn::execPrintTest },
		{ "TestA", &AMyPawn::execTestA },
		{ "TestB", &AMyPawn::execTestB },
		{ "TestC", &AMyPawn::execTestC },
		{ "TestD", &AMyPawn::execTestD },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPawn);
UClass* Z_Construct_UClass_AMyPawn_NoRegister()
{
	return AMyPawn::StaticClass();
}
struct Z_Construct_UClass_AMyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn.h" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultOnlyInt_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbf\xc9\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbf\xc9\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnlyFstirng_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhereVector_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xba\xce\xb5\xd8\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xba\xce\xb5\xd8\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditDefaultOnlyInt_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xbc\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xbc\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnlystring_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xbf\xef\xbf\xbd\xef\xbf\xbd\xd4\xb1\xe0\xbc\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xbf\xef\xbf\xbd\xef\xbf\xbd\xd4\xb1\xe0\xbc\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditAnywhereVector_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb1\xe0\xbc\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xb1\xe0\xbc\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BluePrintReadOnlyInt_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd0\xbf\xef\xbf\xbd\xef\xbf\xbd\xd4\xb6\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd0\xbf\xef\xbf\xbd\xef\xbf\xbd\xd4\xb6\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BluePrintReadWriteInt_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd0\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb6\xef\xbf\xbd  \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbb\xef\xbf\xbd\xc8\xa1(get)\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(set)\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd0\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb6\xef\xbf\xbd  \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbb\xef\xbf\xbd\xc8\xa1(get)\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(set)\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value1_MetaData[] = {
		{ "Category", "MyIntValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xc2\xbc""category (\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xc4\xbf\xc2\xbc)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xc2\xbc""category (\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xc4\xbf\xc2\xbc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value2_MetaData[] = {
		{ "Category", "MyIntValue|MySubIntValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xc2\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xc2\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isController_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//meta \xd4\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//DisPlayName \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "DisplayName", "isController" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "meta \xd4\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nDisPlayName \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value3_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EditCondition\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb1\xe0\xbc\xad\n" },
#endif
		{ "EditCondition", "isController" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EditCondition\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb1\xe0\xbc\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_istrue_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "IsTrue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyEnum_MetaData[] = {
		{ "Category", "MyEnum" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyStruct_MetaData[] = {
		{ "Category", "MyPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UE\xe5\x88\x9b\xe5\xbb\xba\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe5\x8f\x98\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UE\xe5\x88\x9b\xe5\xbb\xba\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe5\x8f\x98\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyHealth_MetaData[] = {
		{ "Category", "MyExposeOnSpawn" },
		{ "ExposeOnspawn", "ExposeOnSpawnValue" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyTsetObjectClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MySpringArm_MetaData[] = {
		{ "Category", "MySceneComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9b\xe5\xbb\xba\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe6\x91\x87\xe8\x87\x82\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe6\x91\x87\xe8\x87\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyCamera_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyRoot_MetaData[] = {
		{ "Category", "MySceneComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleDefaultOnlyInt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VisibleInstanceOnlyFstirng;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisibleAnywhereVector;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditDefaultOnlyInt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EditInstanceOnlystring;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditAnywhereVector;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BluePrintReadOnlyInt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BluePrintReadWriteInt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value2;
	static void NewProp_isController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value3;
	static void NewProp_istrue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_istrue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MyEnum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyStruct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTsetObjectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyGameInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MySpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawn_PrintF1, "PrintF1" }, // 902472901
		{ &Z_Construct_UFunction_AMyPawn_PrintF2, "PrintF2" }, // 1887119636
		{ &Z_Construct_UFunction_AMyPawn_PrintTest, "PrintTest" }, // 663015235
		{ &Z_Construct_UFunction_AMyPawn_Test1, "Test1" }, // 2426200136
		{ &Z_Construct_UFunction_AMyPawn_Test2, "Test2" }, // 2225388185
		{ &Z_Construct_UFunction_AMyPawn_Test3, "Test3" }, // 3841934219
		{ &Z_Construct_UFunction_AMyPawn_TestA, "TestA" }, // 2131424302
		{ &Z_Construct_UFunction_AMyPawn_TestB, "TestB" }, // 3403182362
		{ &Z_Construct_UFunction_AMyPawn_TestC, "TestC" }, // 1026001245
		{ &Z_Construct_UFunction_AMyPawn_TestD, "TestD" }, // 2989796767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleDefaultOnlyInt = { "VisibleDefaultOnlyInt", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, VisibleDefaultOnlyInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleDefaultOnlyInt_MetaData), NewProp_VisibleDefaultOnlyInt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleInstanceOnlyFstirng = { "VisibleInstanceOnlyFstirng", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, VisibleInstanceOnlyFstirng), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleInstanceOnlyFstirng_MetaData), NewProp_VisibleInstanceOnlyFstirng_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleAnywhereVector = { "VisibleAnywhereVector", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, VisibleAnywhereVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleAnywhereVector_MetaData), NewProp_VisibleAnywhereVector_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_EditDefaultOnlyInt = { "EditDefaultOnlyInt", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, EditDefaultOnlyInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditDefaultOnlyInt_MetaData), NewProp_EditDefaultOnlyInt_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_EditInstanceOnlystring = { "EditInstanceOnlystring", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, EditInstanceOnlystring), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditInstanceOnlystring_MetaData), NewProp_EditInstanceOnlystring_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_EditAnywhereVector = { "EditAnywhereVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, EditAnywhereVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditAnywhereVector_MetaData), NewProp_EditAnywhereVector_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_BluePrintReadOnlyInt = { "BluePrintReadOnlyInt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, BluePrintReadOnlyInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BluePrintReadOnlyInt_MetaData), NewProp_BluePrintReadOnlyInt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_BluePrintReadWriteInt = { "BluePrintReadWriteInt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, BluePrintReadWriteInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BluePrintReadWriteInt_MetaData), NewProp_BluePrintReadWriteInt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_value1 = { "value1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, value1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value1_MetaData), NewProp_value1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_value2 = { "value2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, value2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value2_MetaData), NewProp_value2_MetaData) };
void Z_Construct_UClass_AMyPawn_Statics::NewProp_isController_SetBit(void* Obj)
{
	((AMyPawn*)Obj)->isController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_isController = { "isController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPawn), &Z_Construct_UClass_AMyPawn_Statics::NewProp_isController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isController_MetaData), NewProp_isController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_Value3 = { "Value3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, Value3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value3_MetaData), NewProp_Value3_MetaData) };
void Z_Construct_UClass_AMyPawn_Statics::NewProp_istrue_SetBit(void* Obj)
{
	((AMyPawn*)Obj)->istrue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_istrue = { "istrue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPawn), &Z_Construct_UClass_AMyPawn_Statics::NewProp_istrue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_istrue_MetaData), NewProp_istrue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyEnum = { "MyEnum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyEnum), Z_Construct_UEnum_My_First_MyEnumType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyEnum_MetaData), NewProp_MyEnum_MetaData) }; // 3647744756
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyStruct = { "MyStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyStruct), Z_Construct_UScriptStruct_FMyTeststruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyStruct_MetaData), NewProp_MyStruct_MetaData) }; // 3316446830
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyHealth = { "MyHealth", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyHealth_MetaData), NewProp_MyHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyTsetObjectClass = { "MyTsetObjectClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyTsetObjectClass), Z_Construct_UClass_UMyObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyTsetObjectClass_MetaData), NewProp_MyTsetObjectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyGameInstance = { "MyGameInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyGameInstance), Z_Construct_UClass_UMyGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyGameInstance_MetaData), NewProp_MyGameInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MySpringArm = { "MySpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MySpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MySpringArm_MetaData), NewProp_MySpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCamera = { "MyCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyCamera_MetaData), NewProp_MyCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MyRoot = { "MyRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyRoot_MetaData), NewProp_MyRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleDefaultOnlyInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleInstanceOnlyFstirng,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_VisibleAnywhereVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_EditDefaultOnlyInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_EditInstanceOnlystring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_EditAnywhereVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_BluePrintReadOnlyInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_BluePrintReadWriteInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_value1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_value2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_isController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_Value3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_istrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyTsetObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyGameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MySpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MyRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_My_First,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
	&AMyPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPawn()
{
	if (!Z_Registration_Info_UClass_AMyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawn.OuterSingleton, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPawn.OuterSingleton;
}
template<> MY_FIRST_API UClass* StaticClass<AMyPawn>()
{
	return AMyPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
AMyPawn::~AMyPawn() {}
// End Class AMyPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPawn_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ MyEnumType_StaticEnum, TEXT("MyEnumType"), &Z_Registration_Info_UEnum_MyEnumType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3647744756U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMyTeststruct::StaticStruct, Z_Construct_UScriptStruct_FMyTeststruct_Statics::NewStructOps, TEXT("MyTeststruct"), &Z_Registration_Info_UScriptStruct_MyTeststruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyTeststruct), 3316446830U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawn, AMyPawn::StaticClass, TEXT("AMyPawn"), &Z_Registration_Info_UClass_AMyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn), 2583739933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPawn_h_1351220168(TEXT("/Script/My_First"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPawn_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPawn_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_My_First_Source_My_First_Public_MyPawn_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
