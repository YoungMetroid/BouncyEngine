#pragma once
#include "TextWindows.h"
#include "Init_Allegro.h"
#include "keyBoardEvent.h"
#include <iostream>
#include <string>
#include <vector>
class MainTextWindow : public TextWindows
{
private:
	Init_Allegro IA;
	std::string name;
	std::vector<ALLEGRO_BITMAP*> windows;
	std::vector<std::vector<std::string>> text;
	ALLEGRO_FONT * font;
	std::vector<int> fontSize;
	int width;
	int height;
	
public:
	MainTextWindow();
	~MainTextWindow();
	void setWindow(int&,int&);
	void userInput();
	void storyText(int id);
	void window(int id);
};

