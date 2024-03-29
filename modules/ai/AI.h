#ifndef AI_CLASS_H
#define AI_CLASS_H

#include "scene/3d/physics_body.h"
#include "core/dictionary.h"
#include "scene/resources/world.h"
#include "scene/3d/sprite_3d.h"
#include "modules/spriteRotater/sprite_rotater.h"
#include "modules/anitimer/AniTimer.h"

class AI : public KinematicBody
{
	GDCLASS(AI, KinematicBody);

	//private variables
	SpriteRotater rotater;
	Array id_target;
	Array target_signal;
	Array dictChanges;
	int row;
	int spriteAngle;
	int rd;
	int rc;
	float sightDist;
	float yRotation;
	float speed;
	bool startIdle;
	bool walking;
	String playerGroup;
    String scentGroup;
	Vector3 velocity;
	Vector3 oldVelocity;

	//private functions
	void idleMove(const Vector3& turnMove);
	bool playerInRange(const Vector3& vec);
	float playerDot(const Vector3& vec);
	
	protected:
		static void _bind_methods();
		void _notification(int p_what);
		
	public:
		AI();
		bool checkForPlayer3D(const Dictionary& result, Object* p_dir_timer);
		bool checkForPlayer(Object* p_sprite, const Dictionary& result, Object* p_dir_timer, Object* p_ani_timer);
		bool lookForPlayer(const Dictionary& result);
		Dictionary rayShot(const Vector3& vec1, const Vector3& vec2, const Vector<RID>& vecExclude = Vector<RID>());
		void setHorizontalVelocity(const Vector3& vel);
        Dictionary followScentTrail(const Array& vec3s);

		//getters and setters
		void setVelocity(const Vector3& vec);
		Vector3 getVelocity();
		void setRow(int row);
		int getRow();
		void setSpriteAngle(int spriteAngle);
		int getSpriteAngle();
		void setRandDistribution(int rd);
		int getRandDistribution();
		void setRandChance(int rc);
		int getRandChance();
		void setStartIdle(bool startIdle);
		bool getStartIdle();
		void setWalking(bool walking);
		bool getWalking();
		void setSightDist(float sightDist);
		float getSightDist();
		void setSpeed(float speed);
		float getSpeed();
		void setPlayerGroup(String group);
		String getPlayerGroup();
        void setScentGroup(String group);
		String getScentGroup();
		SpriteRotater* getRotater();
		float getYRotation();
		void setYRotation(float yRotation);
		void setIdTarget(const Array& id_target);
		Array getIdTarget();
		void setTargetSignal(const Array& target_signal);
		Array getTargetSignal();
		void setDictChanges(const Array& dictChanges);
		Array getDictChanges();
};

#endif //AI_CLASS_H
