#include "AniTimer.h"

/* PUBLIC METHODS */

AniTimer::AniTimer()
{
	set_one_shot(true);
	connect("timeout", this, "timerDone");
	frameReady = true;
	frameNum = 0;
	lastFrame = 0;
	startFrame = 0;
}

void AniTimer::animation(Object* p_sprite, int stFrame, int maxFrame)
{
	Sprite3D* sprite = Object::cast_to<Sprite3D>(p_sprite);
	if (sprite != NULL && stFrame >= 0 && maxFrame >= 0)
	{
		if (stFrame < maxFrame)
		{
			frameNum += 1;
			if (frameNum >= maxFrame)
				frameNum = stFrame;
		}
		//play the animation backwards if maxFrame is less
		else if (stFrame > maxFrame)
		{
			frameNum -= 1;
			//cannot be negative even if maxFrame < 0
			if (frameNum <= maxFrame || frameNum < 0)
				frameNum = stFrame;
		}
		
		frameNum = min(sprite->get_hframes() * sprite->get_vframes(), frameNum);
		sprite->set_frame(frameNum);
	}
}

/* 
p_sprite is the sprite passed in that we are going to animate
angle is the current angle that the sprite is facing
	* 0 = east, 2 = north, 4 = west, 6 = south
stAngle offsets our angle by a certain amount to play different animations
*/
void AniTimer::isoAnimation(Object* p_sprite, int angle, int stAngle)
{
	Sprite3D* sprite = Object::cast_to<Sprite3D>(p_sprite);
	if (sprite != NULL)
	{
		if (stAngle < 0)
		{
			return;
		}
		
		//getting the current frame regardless of angle
		int hframes = sprite->get_hframes();
		int currFrame = frameNum % hframes;

		//shifting the angle in case we want to play a different animation
		int currAngle = stAngle + angle;

		/* making sure the frame is at the same spot of the animation, the 
		   same angle, and on the right animation before calling the animation 
		   function to play across that current angle */
		frameNum = currFrame + (angle * hframes);
		frameNum += stAngle * hframes;
		animation(sprite, currAngle * hframes, (currAngle + 1) * hframes - 1);
	}
	
}

void AniTimer::prepareAni(Object* p_sprite)
{
	Sprite3D* sprite = Object::cast_to<Sprite3D>(p_sprite);
	lastFrame = frameNum;
	sprite->set_frame(startFrame);
	frameNum = startFrame;
}

void AniTimer::prepareAniCustomFrame(Object* p_sprite, int startFrame)
{
	Sprite3D* sprite = Object::cast_to<Sprite3D>(p_sprite);
	lastFrame = frameNum;
	sprite->set_frame(startFrame);
	frameNum = startFrame;
}

void AniTimer::stTime()
{
	if (is_inside_tree())
	{
		frameReady = false;
		start();
	}
}

void AniTimer::timerDone()
{
	frameReady = true;
}

int AniTimer::getAbsoluteFrame(int rowWidth)
{
	return (frameNum % rowWidth);
}

void AniTimer::setFrameReady(bool ready)
{
	frameReady = ready;
}

bool AniTimer::getFrameReady()
{
	return frameReady;
}

void AniTimer::setFrameNumber(int frameNumber)
{
	this->frameNum = frameNumber;
}

int AniTimer::getFrameNumber()
{
	return frameNum;
}

void AniTimer::setStartFrame(int startFrame)
{
	this->startFrame = startFrame;
}

int AniTimer::getStartFrame()
{
	return startFrame;
}

int AniTimer::getLastFrame()
{
	return lastFrame;
}

void AniTimer::setStateStartFrame(const Dictionary& stateStartFrame)
{
	this->stateStartFrame = stateStartFrame;
}

Dictionary AniTimer::getStateStartFrame()
{
	return this->stateStartFrame;
}

/* PROTECTED METHODS */
void AniTimer::_notification(int p_what) 
{
	if (p_what == NOTIFICATION_ENTER_TREE) 
	{
		//used if we need to reset some data
	}
}

void AniTimer::_bind_methods()
{
	//AniTimer functions
	ClassDB::bind_method(D_METHOD("animation", "p_sprite", "stFrame", "maxFrame"), &AniTimer::animation);
	ClassDB::bind_method(D_METHOD("isoAnimation", "p_sprite", "angle", "stAngle"), &AniTimer::isoAnimation, DEFVAL(0));
	ClassDB::bind_method(D_METHOD("prepareAni", "p_sprite"), &AniTimer::prepareAni);
	ClassDB::bind_method(D_METHOD("prepareAniCustomFrame", "p_sprite", "startFrame"), &AniTimer::prepareAniCustomFrame);
	ClassDB::bind_method(D_METHOD("timerDone"), &AniTimer::timerDone);
	ClassDB::bind_method(D_METHOD("stTime"), &AniTimer::stTime);
	ClassDB::bind_method(D_METHOD("getLastFrame"), &AniTimer::getLastFrame);
	ClassDB::bind_method(D_METHOD("getAbsoluteFrame", "rowWidth"), &AniTimer::getAbsoluteFrame);

	//properties
	ClassDB::bind_method(D_METHOD("setFrameReady", "ready"), &AniTimer::setFrameReady);
	ClassDB::bind_method(D_METHOD("getFrameReady"), &AniTimer::getFrameReady);
	ClassDB::bind_method(D_METHOD("setFrameNumber", "frameNumber"), &AniTimer::setFrameNumber);
	ClassDB::bind_method(D_METHOD("getFrameNumber"), &AniTimer::getFrameNumber);
	ClassDB::bind_method(D_METHOD("setStartFrame", "startFrame"), &AniTimer::setStartFrame);
	ClassDB::bind_method(D_METHOD("getStartFrame"), &AniTimer::getStartFrame);
	ClassDB::bind_method(D_METHOD("setStateStartFrame", "stateStartFrame"), &AniTimer::setStateStartFrame);
	ClassDB::bind_method(D_METHOD("getStateStartFrame"), &AniTimer::getStateStartFrame);
	ADD_PROPERTY(PropertyInfo(Variant::BOOL, "frameReady", PROPERTY_HINT_NONE, "", PROPERTY_USAGE_EDITOR), "setFrameReady", "getFrameReady");
	ADD_PROPERTY(PropertyInfo(Variant::INT, "frameNum", PROPERTY_HINT_NONE, "", PROPERTY_USAGE_EDITOR), "setFrameNumber", "getFrameNumber");
	ADD_PROPERTY(PropertyInfo(Variant::INT, "startFrame", PROPERTY_HINT_NONE, "", PROPERTY_USAGE_EDITOR), "setStartFrame", "getStartFrame");
	ADD_PROPERTY(PropertyInfo(Variant::DICTIONARY, "stateStartFrame", PROPERTY_HINT_NONE, "", PROPERTY_USAGE_EDITOR), "setStateStartFrame", "getStateStartFrame");
}

/* PRIVATE METHODS */
int AniTimer::max(int x, int y)
{
	if(x < y)
		return y;
	return x;
}

int AniTimer::min(int x, int y)
{
	if(x < y)
		return x;
	return y;
}
