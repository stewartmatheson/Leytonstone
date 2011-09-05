/*
 *  EnemySquadron.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 20/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "EnemySquadron.h"
#include "Enemy.h"

void EnemySquadron::create_enemy()
{
	Enemy e = Enemy();
	enemies.push_back(e);
}

/*
void EnemySquadron::last()
{

}
*/