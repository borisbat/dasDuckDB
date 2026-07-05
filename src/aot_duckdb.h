#pragma once

#include "cb_dasDUCKDB.h"
#include "need_dasDUCKDB.h"

namespace das {
    int duckdb_register_das_function (
        duckdb_connection conn, const char * name, Func fn, int nArgs,
        uint8_t tag0, uint8_t tag1, uint8_t tag2, uint8_t tag3,
        uint8_t retTag, bool deterministic,
        Context * context, LineInfoArg * at );
}
