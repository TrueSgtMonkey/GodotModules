#include "ButtonID.h"

/* PUBLIC METHODS */
ButtonID::ButtonID()
{
	button_id = 0;
}

/* PROTECTED METHODS */
void ButtonID::_notification(int p_what)
{
	if (p_what == NOTIFICATION_ENTER_TREE) 
	{
		
	}
}

void ButtonID::_bind_methods()
{
	ClassDB::bind_method(D_METHOD("setButtonID", "button_id"), &ButtonID::setButtonID);
	ClassDB::bind_method(D_METHOD("getButtonID"), &ButtonID::getButtonID);

	ADD_PROPERTY(PropertyInfo(Variant::INT, "button_id"), "setButtonID", "getButtonID");
}

/* PRIVATE METHODS */
