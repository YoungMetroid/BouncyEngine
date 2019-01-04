#include "MainTextWindow.h"



MainTextWindow::MainTextWindow()
{
	font = al_load_ttf_font(MANAFONT,18,0);
	ALLEGRO_BITMAP * temp = al_load_bitmap(Char_Text_Win_Gray_Blue);
	windows.push_back(temp);
	
	//Load text might need a seperate thread to load the text
	std::vector<std::string> test,test1;
	test.push_back("This is the first line");
	test.push_back("This is the second line");
	test.push_back("This is the third line");


	test1.push_back("Second Paragraph");
	test1.push_back("DreamLand");
	test1.push_back("Fox");
	text.push_back(test);
	text.push_back(test1);




	for(ALLEGRO_BITMAP * T:windows)
	{
		if (!T)
		{
			fprintf(stderr, "\nCould not load Image.\n");
		}
	}
	
}


MainTextWindow::~MainTextWindow()
{
}

void MainTextWindow::setWindow(int& width,int&height)
{
	this->width = width;
	this->height = height;
}

void MainTextWindow::userInput()
{
	/*
	std::cout << "Setting Name" << std::endl;
	bool nameIsSet = false;
	ALLEGRO_FONT * font = al_load_ttf_font(MANAFONT, 18, NULL);
	if (!font)
	{
		fprintf(stderr, "Could not load Mana font.\n");
		return;
	}
	while (!nameIsSet)
	{

		ALLEGRO_EVENT events;
		al_wait_for_event(IA.EVENTQUEUE, &events);
		height = al_get_bitmap_height(gray_Blue_Window);
		width = al_get_bitmap_width(gray_Blue_Window);
		al_draw_scaled_bitmap(gray_Blue_Window, 0, 0, width, height, 0,480-(480/4),640,120, 0);
		
		if (events.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			if (events.keyboard.keycode <= 26)
			{
				
				name += (static_cast<char>('a' - 1 + events.keyboard.keycode));
				al_draw_text(font, al_map_rgb(255, 255, 255), 640 / 2, (480 / 4), ALLEGRO_ALIGN_CENTRE, name.c_str());
				al_flip_display();
				al_clear_to_color(al_map_rgb(0, 0, 0));
				//cout << name << endl;
			}
			else if (events.keyboard.keycode == ALLEGRO_KEY_BACKSPACE)
			{
				if (name.size() > 0)
				{
					name.pop_back();
					al_draw_text(font, al_map_rgb(255, 255, 255), 640 / 2, (480 / 4), ALLEGRO_ALIGN_CENTRE, name.c_str());
					al_flip_display();
					al_clear_to_color(al_map_rgb(0, 0, 0));
				}
				else std::cout << "empty" << std::endl;
			}
			else if (events.keyboard.keycode == ALLEGRO_KEY_ENTER)
				nameIsSet = true;
		}
	}
	std::cout << "Name has been set: " + name << std::endl;
	*/
}
void MainTextWindow::storyText(int id)
{
	window(0);
	al_flip_display();
	float restTime = 0.05f;

	for (int idCounter = id; idCounter < text.size(); idCounter++)
	{
		bool enterPressed = false;
		window(0);
		al_flip_display();
		
		al_pause_event_queue(Init_Allegro::EVENTQUEUE, true);
		al_flush_event_queue(Init_Allegro::EVENTQUEUE);

		for (int line = 0; line < text[idCounter].size(); line++)
		{
			bool flag = true;
			for (int counter = 0; counter < text[idCounter][line].size(); counter++)
			{	
				char s = text[idCounter][line][counter];
				al_draw_text(font, al_map_rgb(255, 255, 255), 70 + counter * 18, 480 - (480 / 4) + 20 + line * 27, ALLEGRO_ALIGN_LEFT, &s);
				al_flip_display();
				al_rest(restTime);
			}
		}
		al_pause_event_queue(Init_Allegro::EVENTQUEUE, false);

		while (!enterPressed)
		{
			keyBoardEvent::createEvent();
			if (keyBoardEvent::isEnteredPressed())
				enterPressed = true;
		}
		window(0);
		al_flip_display();
	}
	al_flush_event_queue(IA.EVENTQUEUE);

}
void MainTextWindow::window(int id ) 
{
	height = al_get_bitmap_height(windows[id]);
	width = al_get_bitmap_width(windows[id]);
	al_draw_scaled_bitmap(windows[id], 0, 0, width, height, 0, 480 - (480 / 4), 640, 120, 0);
}
