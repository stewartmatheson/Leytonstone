/*
 *  Harvester.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "Harvester.h"

HarvesterView& Harvester::get_view(){ return main_view; }


void Harvester::init_box2d(b2World* world)
{
	b2PolygonDef harvester_body_shape;
	harvester_body_shape.SetAsBox(2.0f, 2.0f);
	harvester_body_shape.density = .07f;
	b2BodyDef harvester_body_def;
	harvester_body_def.position.Set(200.0f,200.0f);
	main_body = world->CreateBody(&harvester_body_def);
	main_body->CreateShape(&harvester_body_shape);
	main_body->SetMassFromShapes();
}

void Harvester::step()
{
	b2Vec2 pos = main_body->GetPosition();
	main_view.SetPosition(pos.x, pos.y);
	main_view.SetRotation(main_body->GetAngle());
}