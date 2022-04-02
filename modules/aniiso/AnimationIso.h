#ifndef ANI_ISO_H
#define ANI_ISO_H

#include "core/reference.h"

/* Plays an animation a single frame at a time and keeps track of the frame.
   Keeps track of isometric animations with the isoAnimation() function. */
class AnimationIso : public Reference
{
	GDCLASS(AnimationIso, Reference);
	
	int frameNum;
	
	protected:
		static void _bind_methods();
		
	public:
		AnimationIso(int frame_number = 0) { frameNum = frame_number; }
		int animation(int stFrame, int maxFrame);
		int isoAnimation(int hframes, int frame, int stFrame, int offset = 0);
		int getFrameNumber() { return frameNum; }
		void setFrameNumber(int num) { frameNum = num; }
		void butt();
};

#endif //ANI_ISO_H