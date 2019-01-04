#pragma once
#include <iostream>
class TextWindows
{
protected:
	int width;
	int height;

public:
	virtual void setWindow(int&,int&) = 0;
};

