#include "Ammo.h"

Ammo::Ammo()
{
	ammo = 0;
	max_ammo = 0;
}

bool Ammo::useAmmo(int ammo)
{
	// passing in 0 means we are just checking if we have ammo
	if(ammo == 0 && this->ammo == 0)
		return false;
	// we may use more than one ammo unit at a time
	if(this->ammo - ammo < 0)
		return false;
	this->ammo -= ammo;
	return true;
}

bool Ammo::addAmmo(int ammo)
{
	if(this->ammo >= max_ammo)
		return false;
	this->ammo += ammo;
	if(this->ammo >= max_ammo)
		this->ammo = max_ammo;
	return true;
}

void Ammo::setMaxAmmo(int ammo)
{
	max_ammo = ammo;
}

int Ammo::getMaxAmmo()
{
	return max_ammo;
}

int Ammo::getAmmo()
{
	return ammo;
}

void Ammo::setAmmo(int ammo)
{
	this->ammo = ammo;
}

void Ammo::_bind_methods()
{
	// ClassDB::bind_method(D_METHOD("animation", "stFrame", "maxFrame"), &AnimationIso::animation);
	// ClassDB::bind_method(D_METHOD("isoAnimation", "hframes", "frame", "stFrame", "offset"), &AnimationIso::isoAnimation);
	// ClassDB::bind_method(D_METHOD("getFrameNumber"), &AnimationIso::getFrameNumber);
	// ClassDB::bind_method(D_METHOD("setFrameNumber", "num"), &AnimationIso::setFrameNumber);
	ClassDB::bind_method(D_METHOD("useAmmo", "ammo"), &Ammo::useAmmo);
	ClassDB::bind_method(D_METHOD("addAmmo", "ammo"), &Ammo::addAmmo);
	ClassDB::bind_method(D_METHOD("setMaxAmmo", "ammo"), &Ammo::setMaxAmmo);
	ClassDB::bind_method(D_METHOD("getMaxAmmo"), &Ammo::getMaxAmmo);
	ClassDB::bind_method(D_METHOD("getAmmo"), &Ammo::getAmmo);
	ClassDB::bind_method(D_METHOD("setAmmo", "ammo"), &Ammo::setAmmo);
}