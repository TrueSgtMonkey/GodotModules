#include "AniTimer.h"

/* PUBLIC METHODS */

AniTimer::AniTimer()
{
	set_one_shot(true);
	connect("timeout", this, "timerDone");
	frameReady = true;
	frameNum = 0;
	lastFrame = 0;
}

void AniTimer::animation(Object* p_sprite, int stFrame, int maxFrame)
{
	Sprite3D* sprite = Object::cast_to<Sprite3D>(p_sprite);
	if (sprite != NULL)
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

void AniTimer::prepareAnimation(Object* p_sprite, int frame)
{
	Sprite3D* sprite = Object::cast_to<Sprite3D>(p_sprite);
	lastFrame = frameNum;
	sprite->set_frame(frame);
	frameNum = frame;

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

int AniTimer::getLastFrame()
{
	return lastFrame;
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
	ClassDB::bind_method(D_METHOD("prepareAnimation", "p_sprite", "frame"), &AniTimer::prepareAnimation);
	ClassDB::bind_method(D_METHOD("timerDone"), &AniTimer::timerDone);
	ClassDB::bind_method(D_METHOD("stTime"), &AniTimer::stTime);
	ClassDB::bind_method(D_METHOD("getLastFrame"), &AniTimer::getLastFrame);

	//properties
	ClassDB::bind_method(D_METHOD("setFrameReady", "ready"), &AniTimer::setFrameReady);
	ClassDB::bind_method(D_METHOD("getFrameReady"), &AniTimer::getFrameReady);
	ClassDB::bind_method(D_METHOD("setFrameNumber", "frameNumber"), &AniTimer::setFrameNumber);
	ClassDB::bind_method(D_METHOD("getFrameNumber"), &AniTimer::getFrameNumber);
	ADD_PROPERTY(PropertyInfo(Variant::BOOL, "frameReady", PROPERTY_HINT_NONE, "", PROPERTY_USAGE_EDITOR), "setFrameReady", "getFrameReady");
	ADD_PROPERTY(PropertyInfo(Variant::INT, "frameNum", PROPERTY_HINT_NONE, "", PROPERTY_USAGE_EDITOR), "setFrameNumber", "getFrameNumber");
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