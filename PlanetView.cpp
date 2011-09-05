/*
 *  untitled.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "PlanetView.h"
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

PlanetView::PlanetView()
{	
	string file_name = "planet.png"; 
	init_sprite(file_name);
}

void const PlanetView::draw(sf::RenderWindow &App)
{
	SpriteView::draw(App);
}