/*
* Copyright (C) 2010 - 2016 Eluna Lua Engine <http://emudevs.com/>
* This program is free software licensed under GPL version 3
* Please see the included DOCS/LICENSE.md for more information
*/

#ifndef GEMPROPERTIESMETHODS_H
#define GEMPROPERTIESMETHODS_H

namespace LuaGemProperties
{

    /**
     * Returns the ID of a [GemPropertiesEntry].
     *
     * This method retrieves the ID from a given GemPropertiesEntry instance 
     * and pushes it onto the Lua stack.
     *
     * @return uint32 id : The ID of the specified GemPropertiesEntry.
     */
    int GetID(lua_State* L, GemPropertiesEntry* gemProperties)
    {
        Eluna::Push(L, gemProperties->ID);
        return 1;
    }


    ElunaRegister<GemPropertiesEntry> GemPropertiesMethods[] =
    {
        // Getters
        { "GetID", &LuaGemProperties::GetID },

        // Setters

        // Boolean

        // Other

        { NULL, NULL }
    };
}
#endif