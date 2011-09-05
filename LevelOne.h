/*
 *  LevelOne.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 1/04/10.
 *  Copyright 2010 Test. All rights reserved.
 *
 */

#ifndef LEVELONE_H
#define LEVELONE_H

#include "GameFactory.h"

class LevelOne : public GameFactory
{
public:
	virtual void create_players(ModelIterator* m);
	virtual void create_enemies(ModelIterator* m);
};

#endif