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
			if (frameNum <= maxFrame && frameNum >= 0)
				frameNum = stFrame;
		}

		sprite->set_frame(frameNum);
	}
}

void AniTimer::isoAnimation(Object* p_sprite, int angle, int stAngle)
{
	Sprite3D* sprite = Object::cast_to<Sprite3D>(p_sprite);
	if (sprite != NULL)
	{
		if (stAngle < 0)
		{
			return;
		}
		int hframes = sprite->get_hframes();
		int currFrame = frameNum % hframes;
		int currAngle = stAngle + angle;
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