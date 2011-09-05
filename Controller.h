/*
 *  Controller.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 11/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <vector>
#include "View.h"
#include <SFML/Graphics.hpp>

using namespace std;

class Controller
{
	
public:
	vector<View*> views;
	virtual void step() = 0;
	virtual void process_events(sf::Event const &Event, sf::RenderWindow &App) = 0;
};

#endif