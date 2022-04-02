#ifndef AMMO_CLASS_H
#define AMMO_CLASS_H

#include "core/reference.h"

class Ammo : public Reference
{
	GDCLASS(Ammo, Reference);

	int ammo;
	int max_ammo;
	
	protected:
		static void _bind_methods();
		
	public:
		Ammo();
		bool useAmmo(int ammo);
		bool addAmmo(int ammo);
		void setMaxAmmo(int ammo);
		int getMaxAmmo();
		int getAmmo();
		void setAmmo(int ammo);
};

#endif //AMMO_CLASS_H