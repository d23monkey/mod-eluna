/*
* Copyright (C) 2010 - 2024 Eluna Lua Engine <https://elunaluaengine.github.io/>
* This program is free software licensed under GPL version 3
* Please see the included DOCS/LICENSE.md for more information
*/

// Eluna
#include "LuaEngine.h"
#include "ElunaIncludes.h"
#include "ElunaTemplate.h"
#include "ElunaUtility.h"

// fix compile error about accessing vehicle destructor
template<> int ElunaTemplate<Vehicle>::CollectGarbage(lua_State* L)
{
    ASSERT(!manageMemory);

    // Get object pointer (and check type, no error)
    ElunaObject* obj = Eluna::CHECKOBJ<ElunaObject>(L, 1, false);
    delete obj;
    return 0;
}

template<> inline int ElunaTemplate<unsigned long long>::Add(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::PerformOp(L, std::plus()); }
template<> inline int ElunaTemplate<unsigned long long>::Subtract(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::PerformOp(L, std::minus()); }
template<> inline int ElunaTemplate<unsigned long long>::Multiply(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::PerformOp(L, std::multiplies()); }
template<> inline int ElunaTemplate<unsigned long long>::Divide(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::PerformOp(L, std::divides()); }
template<> inline int ElunaTemplate<unsigned long long>::Mod(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::PerformOp(L, std::modulus()); }
template<> inline int ElunaTemplate<unsigned long long>::Equal(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::PerformOp(L, std::equal_to()); }
template<> inline int ElunaTemplate<unsigned long long>::Less(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::PerformOp(L, std::less()); }
template<> inline int ElunaTemplate<unsigned long long>::LessOrEqual(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::PerformOp(L, std::less_equal()); }
template<> inline int ElunaTemplate<unsigned long long>::ToString(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::ToString(L); }
template<> inline int ElunaTemplate<unsigned long long>::Pow(lua_State* L) { return ElunaTemplateHelper<unsigned long long>::Pow(L); }

template<> inline int ElunaTemplate<long long>::Add(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::plus()); }
template<> inline int ElunaTemplate<long long>::Subtract(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::minus()); }
template<> inline int ElunaTemplate<long long>::Multiply(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::multiplies()); }
template<> inline int ElunaTemplate<long long>::Divide(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::divides()); }
template<> inline int ElunaTemplate<long long>::Mod(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::modulus()); }
template<> inline int ElunaTemplate<long long>::UnaryMinus(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::negate()); }
template<> inline int ElunaTemplate<long long>::Equal(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::equal_to()); }
template<> inline int ElunaTemplate<long long>::Less(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::less()); }
template<> inline int ElunaTemplate<long long>::LessOrEqual(lua_State* L) { return ElunaTemplateHelper<long long>::PerformOp(L, std::less_equal()); }
template<> inline int ElunaTemplate<long long>::ToString(lua_State* L) { return ElunaTemplateHelper<long long>::ToString(L); }
template<> inline int ElunaTemplate<long long>::Pow(lua_State* L) { return ElunaTemplateHelper<long long>::Pow(L); }

template<> inline int ElunaTemplate<ObjectGuid>::Equal(lua_State* L) { Eluna::Push(L, Eluna::CHECKVAL<ObjectGuid>(L, 1) == Eluna::CHECKVAL<ObjectGuid>(L, 2)); return 1; }
template<> inline int ElunaTemplate<ObjectGuid>::ToString(lua_State* L)
{
    Eluna::Push(L, Eluna::CHECKVAL<ObjectGuid>(L, 1).ToString());
}
