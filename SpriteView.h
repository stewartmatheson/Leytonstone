/*
 *  SpriteView.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef SPRITEVIEW_H
#define SPRITEVIEW_H

#include <SFML/Graphics.hpp>
#include <string>
#include "View.h"
#include "Box2D.h"

using namespace std;

class SpriteView : public View
{
	
public:
	virtual void const draw(sf::RenderWindow &App);
	void SetPosition(float32 const &x, float32 const &y);
	void SetRotation(float32 const &a);
	int get_xpos();
	int get_ypos();
	
protected:
	int xpos, ypos;
	float32 angle;
	sf::Image image;
	sf::Sprite sprite;
	void init_sprite(string const &file_name);

};

#endif