/*
 *  Ship.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 7/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef SHIP_H
#define SHIP_H

#include <SFML/Graphics.hpp>
#include "Box2D.h"
#include "View.h"
#include "SpriteView.h"

class Ship : public SpriteView
{
public:
	Ship();
};

#endif