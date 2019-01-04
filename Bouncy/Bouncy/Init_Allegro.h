#pragma once
#include <stdio.h>
#include "Allegro_Library.h"

#define FPS 60
#define frameFPS 30
class Init_Allegro
{
private:
	static bool isInitialized;
	
	static ALLEGRO_TIMER * TIMER;
	static ALLEGRO_TIMER * FRAMETIMER;
public:
	Init_Allegro();
	~Init_Allegro();
	static ALLEGRO_EVENT_QUEUE * EVENTQUEUE;
	static ALLEGRO_KEYBOARD_STATE KEYSTATE;
	static ALLEGRO_DISPLAY * DISPLAY;
	static void initialize(void);
	static void startTimers(void);
};

