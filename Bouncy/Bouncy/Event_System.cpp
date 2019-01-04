#include "Event_System.h"

int Event_System::width;
int Event_System::height;

Event_System::Event_System(int width,int height):gameLoop(false)
{
	characterText = new MainTextWindow();
	this->width = width;
	this->height = height;
}

Event_System::~Event_System()
{
}

void Event_System::startGame(void)
{
	while(!gameLoop)
	{
		keyBoardEvent::createEvent();
		if (keyBoardEvent::returnEvent().type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch (keyBoardEvent::returnEvent().keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				gameLoop = true;
				break;
			case ALLEGRO_KEY_ENTER:
				createName();
				break;
			}
		}
	}
}
void Event_System::createName(void)
{
	//Second Display
	characterText->storyText(0);
}
