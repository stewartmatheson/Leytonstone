/*
 *  SpriteView.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "SpriteView.h"
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

void SpriteView::init_sprite(string const &file_name)
{
	image.LoadFromFile(file_name);
	image.CreateMaskFromColor(sf::Color(0, 0, 0), 0);
	sprite.SetImage(image);
	float Width  = sprite.GetSize().x;
	float Height = sprite.GetSize().y;
	sprite.Resize(Width, Height);
	sprite.SetCenter(Width / 2, Height / 2);
}

void const SpriteView::draw(sf::RenderWindow &App)
{	
	sprite.SetImage(image);
	sprite.SetPosition(xpos, ypos);
	sprite.SetRotation((angle * (180 / b2_pi)));
	App.Draw(sprite);
}

void SpriteView::SetPosition(float32 const &x, float32 const &y) { xpos = x; ypos = y; }
void SpriteView::SetRotation(float32 const &a){ angle = a; }
int SpriteView::get_xpos(){ return xpos; }
int SpriteView::get_ypos(){ return ypos; }