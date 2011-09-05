/*
 *  Planet.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PLANET_H
#define PLANET_H

#include "PlanetView.h"
#include "StatusBar.h"
#include "Actor.h"

class Planet : public Model
{
	PlanetView main_view;
	StatusBar resources;
	b2Body* planet_body;
	int resource_count;
public:
	PlanetView& get_view();
	StatusBar& get_status_bar();
	void init_box2d(b2World* world);
	void step();
	
};

#endif