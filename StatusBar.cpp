/*
 *  StatusBar.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 15/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "StatusBar.h"
#include <SFML/Graphics.hpp>

StatusBar::StatusBar()
{
	percentage = 45;
	length = 50;
	height = 7;
	xpos = 10; 
	ypos = 120;
	border_size = 1;
}

void const StatusBar::draw(sf::RenderWindow &App)
{
	background_rectangle = sf::Shape::Rectangle(xpos,ypos ,xpos + length, ypos + height, sf::Color(200,255,191, 255));
	App.Draw(background_rectangle);
	
	foreground_rectangle = sf::Shape::Rectangle(xpos + border_size,
												ypos + border_size,
												xpos + ((length * percentage) / 100) - border_size, 
												ypos + height - border_size, 
												sf::Color(207,14,56, 255)
												);
	
	App.Draw(foreground_rectangle);
}

void StatusBar::setPercentage(int const p) { percentage = p; }