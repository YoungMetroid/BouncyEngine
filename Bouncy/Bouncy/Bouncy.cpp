#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>

#include "Init_Allegro.h"
#include "Event_System.h"

using namespace std;

int main(void)
{
	std::cout << "Bouncy Engine Starting" << std::endl;
	char buff[FILENAME_MAX];
	GetModuleFileName(NULL,buff,FILENAME_MAX);
	string::size_type pos = string(buff).find_last_of("\\/");
	std::cout << string(buff).substr(0,pos);
	Init_Allegro::initialize();
	Event_System event_system(640,480);
	Init_Allegro::startTimers();
	event_system.startGame();

	return 0;
}