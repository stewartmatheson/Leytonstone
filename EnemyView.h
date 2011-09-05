/*
 *  EnemyView.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 20/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef ENEMYVIEW_H
#define ENEMYVIEW_H

#include "SpriteView.h"

class EnemyView : public SpriteView
{
public:
	virtual void const draw(sf::RenderWindow &App);
	EnemyView();
};

#endif