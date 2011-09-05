/*
 *  Player.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 6/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "Ship.h"
#include "Box2D.h"
#include "Model.h"

class Player : public Model
{
	Ship main_ship;
	b2Body* player_body;
	
public:
	void draw();
	void set_ship(Ship* s);
	Ship& get_ship();
	void init_box2d(b2World* world);
	void step();
	void left();
	void right();
	void up();
	void down();
};

#endif