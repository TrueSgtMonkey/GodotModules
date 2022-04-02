/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "AnimationIso.h"

void register_aniiso_types() {
    ClassDB::register_class<AnimationIso>();
}

void unregister_aniiso_types() {
   // Nothing to do here in this example.
}