/*
 *  StarField.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 5/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */


#include <vector>
#include "StarField.h"

using namespace std;

StarField::StarField()
{
	star_count = 100;//sf::Randomizer::Random(0, 10);
	for(int i = 0; i < star_count; i++) 
		field.push_back(create_random_star());
}

sf::Shape StarField::create_random_star()
{
	int xcord, ycord, brightness;
	xcord = sf::Randomizer::Random(-1500, 1500);
	ycord = sf::Randomizer::Random(-1500, 1500);
	brightness = sf::Randomizer::Random(0,128);
	sf::Color random_color(128,128,128, brightness);
	return sf::Shape::Circle(xcord, ycord, 1, sf::Color::White);
}

void const StarField::draw(sf::RenderWindow &App)
{
	for(int i = 0; i < star_count; i++)
		App.Draw(field[i]);
}