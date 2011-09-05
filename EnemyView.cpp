/*
 *  EnemyView.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 20/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "EnemyView.h"
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

EnemyView::EnemyView()
{	
	string file_name = "enemey.png"; 
	init_sprite(file_name);
}

void const EnemyView::draw(sf::RenderWindow &App)
{
	SpriteView::draw(App);
}