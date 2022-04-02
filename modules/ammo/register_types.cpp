/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "Ammo.h"

void register_ammo_types() {
    ClassDB::register_class<Ammo>();
}

void unregister_ammo_types() {
   // Nothing to do here in this example.
}