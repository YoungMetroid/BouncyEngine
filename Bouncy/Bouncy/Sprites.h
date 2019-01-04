#pragma once
class Sprites
{
private:
	static int counter;
public:
	Sprites();
	~Sprites();
	static void addCounter(void);
	static int getCounter(void);
	
};

