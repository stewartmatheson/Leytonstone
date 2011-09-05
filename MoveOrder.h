/*
 *  MoveOrder.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef MOVEORDER_H
#define MOVEORDER_H

#include "View.h"
#include "Model.h"


class MoveOrder : public View
{
	sf::Shape destination_circle;
	int xpos2, ypos2;
public:
	MoveOrder(int const x1, int const y1, int const x2, int const y2);
	virtual void const draw(sf::RenderWindow &App);
};

#endif