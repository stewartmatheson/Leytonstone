/*
 *  View.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 11/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef VIEW_H
#define VIEW_H


#include <SFML/Graphics.hpp>
#include <string>



using namespace std;

class View
{
	
protected:
	int xpos;
	int ypos;
	
public:
	virtual void const draw(sf::RenderWindow &App) = 0;
};

#endif