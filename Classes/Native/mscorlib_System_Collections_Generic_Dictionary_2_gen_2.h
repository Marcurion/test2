#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t498;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1463;
// System.String[]
struct StringU5BU5D_t202;
// System.Int64[]
struct Int64U5BU5D_t1395;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1492;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
struct Transform_1_t1553;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct  Dictionary_2_t168  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Int64>::table
	Int32U5BU5D_t498* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Int64>::linkSlots
	LinkU5BU5D_t1463* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Int64>::keySlots
	StringU5BU5D_t202* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Int64>::valueSlots
	Int64U5BU5D_t1395* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Int64>::serialization_info
	SerializationInfo_t315 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t168_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::<>f__am$cacheB
	Transform_1_t1553 * ___U3CU3Ef__amU24cacheB_15;
};
