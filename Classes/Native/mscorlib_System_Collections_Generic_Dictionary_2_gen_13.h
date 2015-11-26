#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t498;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1463;
// UnityEngine.Networking.Types.NetworkID[]
struct NetworkIDU5BU5D_t1579;
// System.Object[]
struct ObjectU5BU5D_t205;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t1581;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1583;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct  Dictionary_2_t1584  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::table
	Int32U5BU5D_t498* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::linkSlots
	LinkU5BU5D_t1463* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::keySlots
	NetworkIDU5BU5D_t1579* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::valueSlots
	ObjectU5BU5D_t205* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::serialization_info
	SerializationInfo_t315 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1584_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<>f__am$cacheB
	Transform_1_t1583 * ___U3CU3Ef__amU24cacheB_15;
};
