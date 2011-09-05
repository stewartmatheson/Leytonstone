/*
 *  StarField.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 5/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef STARFIELD_H
#define STARFIELD_H

#include <vector>
#include <SFML/Graphics.hpp>
#include "View.h"

using namespace std;

class StarField : public View
{
	vector<sf::Shape> field;
	int star_count;
	sf::Shape create_random_star();
public:
	
	StarField();
	virtual void const draw(sf::RenderWindow &App);
	
};

#endif