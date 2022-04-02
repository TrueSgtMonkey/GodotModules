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

	//private functions
    
	
	protected:
		static void _bind_methods();
		void _notification(int p_what);
		
	public:
		AniTimer();
		void animation(Object* p_sprite, int stFrame, int maxFrame);
		void isoAnimation(Object* p_sprite, int angle, int stAngle = 0);
		void prepareAnimation(Object* p_sprite, int frame);
		void stTime();
		void timerDone();
		int getLastFrame();

		//getters and setters
		void setFrameReady(bool ready);
		bool getFrameReady();
		void setFrameNumber(int frameNumber);
		int getFrameNumber();
};

#endif //ANI_TIMER_CLASS_H