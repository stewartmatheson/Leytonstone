/*
 *  Planet.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "Planet.h"
#include <SFML/Graphics.hpp>

PlanetView& Planet::get_view(){ return main_view; }
StatusBar& Planet::get_status_bar(){ return resources; }

void Planet::init_box2d(b2World* world)
{
	resource_count = 100;
	
	b2BodyDef planet_body_def;
	planet_body_def.position.Set(sf::Randomizer::Random(-1200, 1200), sf::Randomizer::Random(-1200, 1200));
	planet_body = world->CreateBody(&planet_body_def);
	
	b2CircleDef planet_circle;
	planet_circle.radius = 4.0f;
	planet_circle.density = 50.0f;
	planet_circle.friction = 0.3f;
	
	planet_body->CreateShape(&planet_circle);
	planet_body->SetMassFromShapes();
}

void Planet::step()
{
	b2Vec2 pos = planet_body->GetPosition();
	main_view.SetPosition(pos.x, pos.y);
	main_view.SetRotation(planet_body->GetAngle());
}