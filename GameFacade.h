/*
 *  GameFacade.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 3/04/10.
 *  Copyright 2010 Test. All rights reserved.
 *
 */

#ifndef GAME_FACADE_H
#define GAME_FACADE_H

class GameFacade
{
	int current_level;
public:
	GameFacade(int cl);
	void process_events();
	void step();
	void update();
};

#endif