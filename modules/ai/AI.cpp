#include "AI.h"

/* PUBLIC METHODS */

AI::AI()
{
	row = 1;
	rd = 24;
	rc = 10;
	sightDist = 15.0f;
	velocity.x = 0.0;
	velocity.y = 0.0;
	velocity.z = 0.0;
	oldVelocity.x = 0.0;
	oldVelocity.y = 0.0;
	oldVelocity.z = 0.0;
	startIdle = false;
	walking = false;
	playerGroup = "Player";
	scentGroup = "Scent";
}

bool AI::checkForPlayer(Object* p_sprite, const Dictionary& result, Object* p_dir_timer, Object* p_ani_timer)
{
	AniTimer* dirtimer = Object::cast_to<AniTimer>(p_dir_timer);
	if(dirtimer != NULL && dirtimer->getFrameReady())
	{
		AniTimer* anitimer = Object::cast_to<AniTimer>(p_ani_timer);
		if(anitimer != NULL)
		{
			dirtimer->stTime();
			int framer = Math::rand() % 8;
			Vector3 turnMove = rotater.idleTurn(p_sprite, framer, row, anitimer->getFrameNumber());
			if (Math::abs(turnMove.x) > 0.0 || Math::abs(turnMove.z) > 0.0)
			{
				oldVelocity.x = turnMove.x;
				oldVelocity.y = turnMove.y;
				oldVelocity.z = turnMove.z;
			}
			idleMove(turnMove);
			//if startIdle starts off as true, then enemy will not check for the player
			if (!startIdle && result.size() > 0)
			{
				Spatial* spatial = Object::cast_to<Spatial>(result["collider"]);
				if (spatial != NULL && spatial->is_in_group(playerGroup))
				{
					Vector3 AP = spatial->get_global_transform().origin - get_global_transform().origin;
					if (playerInRange(AP))
					{
						float dotAP = playerDot(AP);
						return dotAP > 0;
					}
				}
			}
		}
		
	}
	
	return false;
}

Dictionary AI::rayShot(const Vector3& vec1, const Vector3& vec2, const Vector<RID>& vecExclude)
{
	//getting the space state of the world
	PhysicsDirectSpaceState* space_state = get_world()->get_direct_space_state();
	//used for the dictionary that is returned
	PhysicsDirectSpaceState::RayResult inters;

	//will not be included in the intersect_ray result
	Set<RID> exclude;
	for (int i = 0; i < vecExclude.size(); i++)
	{
		exclude.insert(vecExclude[i]);
	}

	//returning empty dictionary if the ray does not collide with anything
	if(!space_state->intersect_ray(vec1, vec2, inters, exclude))
	{
		return Dictionary();
	}

	Dictionary d;
	d["position"] = inters.position;
	d["normal"] = inters.normal;
	d["collider_id"] = inters.collider_id;
	d["collider"] = inters.collider;
	d["shape"] = inters.shape;
	d["rid"] = inters.rid;

	return d;
}

void AI::setHorizontalVelocity(const Vector3& vel)
{
	velocity.x = vel.x;
	velocity.z = vel.z;
}

/* Splitting this up in case we want an enemy to follow a trail while idle
 * Returns false if a scent is never found */
Dictionary AI::followScentTrail(const Array& vec3s)
{
	for (int i = 0; i < vec3s.size(); i++)
	{
		Dictionary scentResult = rayShot(get_global_transform().origin, vec3s[i]);
		if (scentResult.size() > 0)
		{
			Spatial* scent = Object::cast_to<Spatial>(scentResult["collider"]);
			if (scent != NULL && scent->is_in_group(scentGroup))
			{
				return scentResult;
			}
		}
	}
	return Dictionary();
}

void AI::setVelocity(const Vector3& vec)
{
	velocity.x = vec.x;
	velocity.y = vec.y;
	velocity.z = vec.z;
}

Vector3 AI::getVelocity()
{
	return velocity;
}

void AI::setRow(int row)
{
	this->row = row;
}

int AI::getRow()
{
	return row;
}

void AI::setRandDistribution(int rd)
{
	this->rd = rd;
}

int AI::getRandDistribution()
{
	return rd;
}

void AI::setRandChance(int rc)
{
	this->rc = rc;
}

int AI::getRandChance()
{
	return rc;
}

void AI::setStartIdle(bool startIdle)
{
	this->startIdle = startIdle;
}

bool AI::getStartIdle()
{
	return startIdle;
}

void AI::setWalking(bool walking)
{
	this->walking = walking;
}

bool AI::getWalking()
{
	return walking;
}

void AI::setSightDist(float sightDist)
{
	this->sightDist = sightDist;
}

float AI::getSightDist()
{
	return sightDist;
}

void AI::setPlayerGroup(String group)
{
	playerGroup = group;
}

String AI::getPlayerGroup()
{
	return playerGroup;
}

void AI::setScentGroup(String group)
{
	scentGroup = group;
}

String AI::getScentGroup()
{
	return scentGroup;
}

/* PROTECTED METHODS */
void AI::_notification(int p_what) 
{
	if (p_what == NOTIFICATION_ENTER_TREE) 
	{
		//used if we need to reset some data
	}
}

void AI::_bind_methods()
{
    //AI METHODS
	ClassDB::bind_method(D_METHOD("checkForPlayer", "sprite", "result", "direction_timer", "animation_timer"), &AI::checkForPlayer);
	ClassDB::bind_method(D_METHOD("followScentTrail", "vec3s"), &AI::followScentTrail);
    ClassDB::bind_method(D_METHOD("rayShot", "vec1", "vec2", "vecExclude"), &AI::rayShot, DEFVAL(Array()));
    ClassDB::bind_method(D_METHOD("setHorizontalVelocity", "vel"), &AI::setHorizontalVelocity);
    
    ClassDB::bind_method(D_METHOD("setRow", "row"), &AI::setRow);
	ClassDB::bind_method(D_METHOD("getRow"), &AI::getRow);
	ClassDB::bind_method(D_METHOD("setRandDistribution", "rd"), &AI::setRandDistribution);
	ClassDB::bind_method(D_METHOD("getRandDistribution"), &AI::getRandDistribution);
	ClassDB::bind_method(D_METHOD("setRandChance", "rc"), &AI::setRandChance);
	ClassDB::bind_method(D_METHOD("getRandChance"), &AI::getRandChance);
	ClassDB::bind_method(D_METHOD("setVelocity", "vec"), &AI::setVelocity);
	ClassDB::bind_method(D_METHOD("getVelocity"), &AI::getVelocity);
	ClassDB::bind_method(D_METHOD("setStartIdle", "startIdle"), &AI::setStartIdle);
	ClassDB::bind_method(D_METHOD("getStartIdle"), &AI::getStartIdle);
	ClassDB::bind_method(D_METHOD("setWalking", "walking"), &AI::setWalking);
	ClassDB::bind_method(D_METHOD("getWalking"), &AI::getWalking);
	ClassDB::bind_method(D_METHOD("setSightDist", "sightDist"), &AI::setSightDist);
	ClassDB::bind_method(D_METHOD("getSightDist"), &AI::getSightDist);
	ClassDB::bind_method(D_METHOD("setPlayerGroup", "group"), &AI::setPlayerGroup);
	ClassDB::bind_method(D_METHOD("getPlayerGroup"), &AI::getPlayerGroup);
    ClassDB::bind_method(D_METHOD("setScentGroup", "group"), &AI::setScentGroup);
	ClassDB::bind_method(D_METHOD("getScentGroup"), &AI::getScentGroup);
	ADD_PROPERTY(PropertyInfo(Variant::INT, "row"), "setRow", "getRow");
	ADD_PROPERTY(PropertyInfo(Variant::VECTOR3, "velocity"), "setVelocity", "getVelocity");
	ADD_PROPERTY(PropertyInfo(Variant::INT, "rd"), "setRandDistribution", "getRandDistribution");
	ADD_PROPERTY(PropertyInfo(Variant::INT, "rc"), "setRandChance", "getRandChance");
	ADD_PROPERTY(PropertyInfo(Variant::REAL, "sightDist"), "setSightDist", "getSightDist");
	ADD_PROPERTY(PropertyInfo(Variant::BOOL, "walking"), "setWalking", "getWalking");
	ADD_PROPERTY(PropertyInfo(Variant::BOOL, "startIdle"), "setStartIdle", "getStartIdle");
	ADD_PROPERTY(PropertyInfo(Variant::STRING, "playerGroup"), "setPlayerGroup", "getPlayerGroup");
	ADD_PROPERTY(PropertyInfo(Variant::STRING, "scentGroup"), "setScentGroup", "getScentGroup");
}

void AI::idleMove(const Vector3& turnMove)
{
	int mover = Math::rand() % rd;
	if (mover > rc)
	{
		walking = true;
		setHorizontalVelocity(turnMove);
	}
	else
	{
		walking = false;
		setHorizontalVelocity(turnMove * 0.01);
	}
}

bool AI::playerInRange(const Vector3& vec)
{
	float hypAP = vec.length();
	return hypAP <= sightDist;
}

float AI::playerDot(const Vector3& vec)
{
	Vector3 temp = vec.normalized();
	Vector3 faceVec = oldVelocity.normalized();
	return temp.dot(faceVec);
}