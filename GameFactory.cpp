/*
 *  GameFactory.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 30/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "GameFactory.h"

b2World* GameFactory::create_world()
{
	b2AABB worldAABB;
	worldAABB.lowerBound.Set(-1500.0f, -1500.0f);
	worldAABB.upperBound.Set(1500.0f, 1500.0f);
	b2Vec2 gravity(0.0f, 0.0f);
	bool doSleep = true;
	world = new b2World(worldAABB, gravity, doSleep);
	return world;
}