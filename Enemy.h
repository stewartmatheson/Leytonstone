/*
 *  Enemy.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 20/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef ENEMY
#define ENEMY

#include "Model.h"
#include "Box2D.h"
#include "EnemyView.h"

class Enemy : public Model
{
	EnemyView main_view;
	b2Body* main_body;
public:
	void step();
	void init_box2d(b2World* world);
	EnemyView& get_view();
};

#endif