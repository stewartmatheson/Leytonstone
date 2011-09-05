/*
 *  LevelOne.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 1/04/10.
 *  Copyright 2010 Test. All rights reserved.
 *
 */

#include "LevelOne.h"
#include "Player.h"
#include "EnemySquadron.h"

void LevelOne::create_players(ModelIterator* m)
{
	
	for(int i = 0; i < 1; i++)
	{
		Player* current_player = new Player();
		//current_player->init_box2d(world);
		m->push_back(current_player);
	}
}

void LevelOne::create_enemies(ModelIterator* m) 
{
	EnemySquadron es = EnemySquadron();
}