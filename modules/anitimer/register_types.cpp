/* register_types.cpp */

#include "register_types.h"
#include "core/class_db.h"
#include "AniTimer.h"

void register_anitimer_types() {
    ClassDB::register_class<AniTimer>();
}

void unregister_anitimer_types() {
   // Nothing to do here in this example.
}