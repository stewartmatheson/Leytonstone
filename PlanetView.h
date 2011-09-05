/*
 *  untitled.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PLANETVIEW_H
#define PLANETVIEW_H

#include "SpriteView.h"

class PlanetView : public SpriteView
{
public:
	virtual void const draw(sf::RenderWindow &App);
	PlanetView();
};

#endif