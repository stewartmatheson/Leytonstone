/*
 *  MoveOrder.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "MoveOrder.h"
#include <SFML/Graphics.hpp>

MoveOrder::MoveOrder(int const x1, int const y1, int const x2, int const y2)
{
	xpos = x1;
	ypos = y1;
	xpos2 = x2;
	ypos2 = y2;
}

void const MoveOrder::draw(sf::RenderWindow &App)
{
	destination_circle = sf::Shape::Circle(xpos, ypos, 2, sf::Color(0,0,0,0), 2, sf::Color::White);
	App.Draw(destination_circle);
}