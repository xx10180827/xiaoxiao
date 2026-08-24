// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyDelegateActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_FIRST_MyDelegateActor_generated_h
#error "MyDelegateActor.generated.h already included, missing '#pragma once' in MyDelegateActor.h"
#endif
#define MY_FIRST_MyDelegateActor_generated_h

#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_20_DELEGATE \
MY_FIRST_API void FDynamicMultiOneDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicMultiOneDelegate, const FString& MyString);


#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyDelegateActor(); \
	friend struct Z_Construct_UClass_AMyDelegateActor_Statics; \
public: \
	DECLARE_CLASS(AMyDelegateActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_First"), NO_API) \
	DECLARE_SERIALIZER(AMyDelegateActor)


#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyDelegateActor(AMyDelegateActor&&); \
	AMyDelegateActor(const AMyDelegateActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDelegateActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDelegateActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyDelegateActor) \
	NO_API virtual ~AMyDelegateActor();


#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_22_PROLOG
#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_FIRST_API UClass* StaticClass<class AMyDelegateActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_My_First_Source_My_First_Public_MyDelegateActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
