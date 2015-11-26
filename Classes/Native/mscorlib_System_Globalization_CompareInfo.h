﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t816;
// System.Collections.Hashtable
struct Hashtable_t389;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Globalization.CompareInfo
struct  CompareInfo_t757  : public Object_t
{
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t816 * ___collator_3;
};
struct CompareInfo_t757_StaticFields{
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t389 * ___collators_4;
	// System.Object System.Globalization.CompareInfo::monitor
	Object_t * ___monitor_5;
};
