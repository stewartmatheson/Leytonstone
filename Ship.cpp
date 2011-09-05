/*
 *  Ship.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 7/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "Ship.h"
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

Ship::Ship()
{	
	string file_name = "leytonstoneshippmask.png"; 
	init_sprite(file_name);
}

