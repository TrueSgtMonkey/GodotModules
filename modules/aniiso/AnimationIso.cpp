#include "AnimationIso.h"
/* Moves the animation one frame forward at a time.
   Needs a timer and to be put into a process to work properly. */
int AnimationIso::animation(int stFrame, int maxFrame)
{
	//play the animation normally if stFrame is less
	if(stFrame < maxFrame)
	{
		frameNum += 1;
		if(frameNum >= maxFrame) 
			frameNum = stFrame;
	}
	//play the animation backwards if maxFrame is less
	else if(stFrame > maxFrame) 
	{
		frameNum -= 1;
		if(frameNum <= maxFrame && frameNum <= 0)
			frameNum = stFrame;
	}
	
	return frameNum;
}

int AnimationIso::isoAnimation(int hframes, int frame, int stFrame, int offset)
{
	if(offset < 0)
		return -1;
	
	//getting the curr frame in the current animation (outside of angles)
	int currFrame = getFrameNumber() % hframes;
	
	//setting the frame number to the right angle + curr frame in animation
	frameNum = currFrame + (frame * hframes);
	
	//picking which row we want to start from to look 8 angles ahead
	frameNum += stFrame;
	
	//setting the next frame to this for some reason
	// (unsure why we don't just return frameNum, but who knows)
	// frame number will be added or subtracted by one anyways
	int nextFrame = frameNum;
	switch(frame)
	{
		case 0:
			nextFrame = animation(stFrame + offset, stFrame + hframes - 1);
			break;
		case 1:
			nextFrame = animation(stFrame + hframes + offset, (stFrame + hframes * 2) - 1);
			break;
		case 2:
			nextFrame = animation((stFrame + hframes * 2) + offset, (stFrame + hframes * 3) - 1);
			break;
		case 3:
			nextFrame = animation((stFrame + hframes * 3) + offset, (stFrame + hframes * 4) - 1);
			break;
		case 4:
			nextFrame = animation((stFrame + hframes * 4) + offset, (stFrame + hframes * 5) - 1);
			break;
		case 5:
			nextFrame = animation((stFrame + hframes * 5) + offset, (stFrame + hframes * 6) - 1);
			break;
		case 6:
			nextFrame = animation((stFrame + hframes * 6) + offset, (stFrame + hframes * 7) - 1);
			break;
		case 7:
			nextFrame = animation((stFrame + hframes * 7) + offset, (stFrame + hframes * 8) - 1);
			break;
	}
	return nextFrame;
}

void AnimationIso::butt()
{

}

void AnimationIso::_bind_methods()
{
	ClassDB::bind_method(D_METHOD("animation", "stFrame", "maxFrame"), &AnimationIso::animation);
	ClassDB::bind_method(D_METHOD("isoAnimation", "hframes", "frame", "stFrame", "offset"), &AnimationIso::isoAnimation);
	ClassDB::bind_method(D_METHOD("getFrameNumber"), &AnimationIso::getFrameNumber);
	ClassDB::bind_method(D_METHOD("butt"), &AnimationIso::butt);
	ClassDB::bind_method(D_METHOD("setFrameNumber", "num"), &AnimationIso::setFrameNumber);
}