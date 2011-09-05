/*
 *  HarvesterView.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "HarvesterView.h"
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

HarvesterView::HarvesterView()
{	
	string file_name = "Harvester.png"; 
	init_sprite(file_name);
}

void const HarvesterView::draw(sf::RenderWindow &App)
{
	SpriteView::draw(App);
}