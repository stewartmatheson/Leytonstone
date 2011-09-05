/*
 *  GameFactory.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 30/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef GAME_FACTORY_H
#define GAME_FACTORY_H

#include "Model.h"
#include "ModelIterator.h"
#include "Box2D.h"

class GameFactory
{
	b2World* world;
public:
	virtual void create_players(ModelIterator* m) = 0;
	virtual void create_enemies(ModelIterator* m) = 0;
	virtual b2World* create_world();
};

#endif