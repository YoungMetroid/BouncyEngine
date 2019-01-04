#pragma once
#include "Init_Allegro.h"
#include "Allegro_Library.h"
#include <iostream>
#include <string>
#include "MainTextWindow.h"
#include "keyBoardEvent.h"

using namespace std;
class Event_System
{
private:
	bool gameLoop;
	Init_Allegro IA;
	MainTextWindow *characterText;
	static int width;
	static int height;
	
public:
	Event_System(int,int);
	~Event_System();
	void startGame(void);
	void createName(void);
	
};

