/* register_types.cpp */

#include "register_types.h"
#include "core/class_db.h"
#include "AI.h"

void register_ai_types() {
    ClassDB::register_class<AI>();
}

void unregister_ai_types() {
   // Nothing to do here in this example.
}