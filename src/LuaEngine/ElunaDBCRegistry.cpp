#include "ElunaDBCRegistry.h"

std::vector<DBCDefinition> dbcRegistry = {
    REGISTER_DBC(GemProperties, GemPropertiesEntry, sGemPropertiesStore),
};