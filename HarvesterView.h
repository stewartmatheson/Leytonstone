/*
 *  HarvesterView.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef HARVESTERVIEW_H
#define HARVESTERVIEW_H

#include "SpriteView.h"

class HarvesterView : public SpriteView
{
public:
	virtual void const draw(sf::RenderWindow &App);
	HarvesterView();
};

#endif