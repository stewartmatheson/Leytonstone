/*
 *  Star.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 4/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include <SFML/Graphics.hpp>
#include <cstdlib> 
#include "star.h"

Star::Star(int x, int y, int s) : xpos(x), ypos(y), size(s)
{
	main_shape = sf::Shape::Circle(xpos, ypos, size, sf::Color::White, 1, sf::Color::White);
}
	
sf::Shape Star::draw(){ return main_shape; }