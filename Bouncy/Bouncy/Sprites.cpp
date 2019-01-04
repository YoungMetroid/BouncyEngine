#include "Sprites.h"

int Sprites::counter;

Sprites::Sprites()
{
}


Sprites::~Sprites()
{
}

void Sprites::addCounter(void) {
	counter++;
}

int Sprites::getCounter(void)
{
	return counter;
}






	/*//#include "Allegro_Library.h"
//#include <stdio.h>
#include <iostream>

#define FPS 60
#define frameFPS 30
class Initialize_Allegro
{
public:
	static bool isInitialized;
	/*static ALLEGRO_DISPLAY * DISPLAY;
	static ALLEGRO_EVENT_QUEUE * EVENTQUEUE;
	static ALLEGRO_TIMER * TIMER;
	static ALLEGRO_TIMER * FRAMETIMER;
	static ALLEGRO_KEYBOARD_STATE KEYSTATE;
public:
	static int initialize(void);

	static bool returnBool()
	{
		return  0;
	}
};
int Initialize_Allegro::initialize(void)
{
	//Initialize_Allegro::isInitialized = true;
	return 0;
}
/*
	static void initialize(void)
	{
		if (!al_init())
			return;

		DISPLAY = al_create_display(640, 480);

		if (!DISPLAY)
		{
			fprintf(stderr, "failed to create display!\n");
			return;
		}

		al_install_keyboard();
		al_install_mouse();

		EVENTQUEUE = al_create_event_queue();
		TIMER = al_create_timer(1.0 / FPS);
		FRAMETIMER = al_create_timer(1.0 / frameFPS);

		al_register_event_source(EVENTQUEUE, al_get_keyboard_event_source());
		al_register_event_source(EVENTQUEUE, al_get_timer_event_source(TIMER));
		al_register_event_source(EVENTQUEUE, al_get_timer_event_source(FRAMETIMER));
		al_register_event_source(EVENTQUEUE, al_get_display_event_source(DISPLAY));
		al_register_event_source(EVENTQUEUE, al_get_mouse_event_source());
	}
	void startTimers()
	{
		al_start_timer(TIMER);
		al_start_timer(FRAMETIMER);
	}*/