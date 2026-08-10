// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_FIRST_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define MY_FIRST_MyObject_generated_h

#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyDataTableStruct_Statics; \
	MY_FIRST_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MY_FIRST_API UScriptStruct* StaticStruct<struct FMyDataTableStruct>();

#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/My_First"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyObject(UMyObject&&); \
	UMyObject(const UMyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyObject) \
	NO_API virtual ~UMyObject();


#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_32_PROLOG
#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_35_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_FIRST_API UClass* StaticClass<class UMyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_My_First_Source_My_First_Public_MyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
