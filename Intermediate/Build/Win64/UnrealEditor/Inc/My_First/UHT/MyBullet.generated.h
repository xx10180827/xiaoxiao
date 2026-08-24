// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_FIRST_MyBullet_generated_h
#error "MyBullet.generated.h already included, missing '#pragma once' in MyBullet.h"
#endif
#define MY_FIRST_MyBullet_generated_h

#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBullet(); \
	friend struct Z_Construct_UClass_AMyBullet_Statics; \
public: \
	DECLARE_CLASS(AMyBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_First"), NO_API) \
	DECLARE_SERIALIZER(AMyBullet)


#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyBullet(AMyBullet&&); \
	AMyBullet(const AMyBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBullet) \
	NO_API virtual ~AMyBullet();


#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_13_PROLOG
#define FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_FIRST_API UClass* StaticClass<class AMyBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_My_First_Source_My_First_Public_MyBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
