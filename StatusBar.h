/*
 *  StatusBar.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 15/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef STATUSBAR_H
#define STATUSBAR_H

#include "View.h"
#include "Model.h"

class StatusBar : public View
{
	int percentage, length, height, border_size;
	sf::Shape background_rectangle, foreground_rectangle;
public:
	StatusBar();
	virtual void const draw(sf::RenderWindow &App);
	void StatusBar::setPercentage(int const p);
};

#endif STATUSBAR_H