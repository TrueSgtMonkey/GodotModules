#ifndef ANI_TIMER_CLASS_H
#define ANI_TIMER_CLASS_H

#include "scene/main/timer.h"
#include "scene/3d/sprite_3d.h"

class AniTimer : public Timer
{
	GDCLASS(AniTimer, Timer);

	//private variables
	bool frameReady;
	int frameNum;
	int lastFrame;
	int startFrame;

	//private functions
  int max(int x, int y);
	int min(int x, int y);
	
	protected:
		static void _bind_methods();
		void _notification(int p_what);
		
	public:
		AniTimer();
		void animation(Object* p_sprite, int stFrame, int maxFrame);
		void isoAnimation(Object* p_sprite, int angle, int stAngle = 0);
		void prepareAni(Object* p_sprite);
		void prepareAniCustomFrame(Object* p_sprite, int startFrame);
		void stTime();
		void timerDone();
		int getLastFrame();
		int getAbsoluteFrame(int rowWidth);

		//getters and setters
		void setFrameReady(bool ready);
		bool getFrameReady();
		void setFrameNumber(int frameNumber);
		int getFrameNumber();
		void setStartFrame(int startFrame);
		int getStartFrame();
};

#endif //ANI_TIMER_CLASS_H
