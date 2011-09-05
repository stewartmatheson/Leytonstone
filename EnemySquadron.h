/*
 *  EnemySquadron.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 20/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef ENEMYSQUADRON
#define ENEMYSQUADRON

#include "Enemy.h"
#include <vector>

class EnemySquadron
{
	std::vector<Enemy> enemies;
public:
	void create_enemy();
	void step();
};

#endif