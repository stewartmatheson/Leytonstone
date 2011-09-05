/*
 *  Harvester.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef HARVESTER_H
#define HARVESTER_H

#include "Model.h"
#include "HarvesterView.h"

class Harvester : public Model
{
	HarvesterView main_view;
	b2Body* main_body;
	
public:
	HarvesterView& get_view();
	void init_box2d(b2World* world);
	void step();
};

#endif