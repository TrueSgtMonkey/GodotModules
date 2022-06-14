/* register_types.cpp */

#include "register_types.h"
#include "core/class_db.h"
#include "ButtonID.h"

void register_button_id_types() {
    ClassDB::register_class<ButtonID>();
}

void unregister_button_id_types() {
   // Nothing to do here in this example.
}