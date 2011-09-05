/*
 *  Enemy.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 20/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "Enemy.h"


EnemyView& Enemy::get_view(){ return main_view; }


void Enemy::init_box2d(b2World* world)
{
	b2PolygonDef enemy_body_shape;
	enemy_body_shape.SetAsBox(2.0f, 2.0f);
	enemy_body_shape.density = .07f;
	b2BodyDef enemy_body_def;
	enemy_body_def.position.Set(200.0f,200.0f);
	main_body = world->CreateBody(&enemy_body_def);
	main_body->CreateShape(&enemy_body_shape);
	main_body->SetMassFromShapes();
}

void Enemy::step()
{
	b2Vec2 pos = main_body->GetPosition();
	main_view.SetPosition(pos.x, pos.y);
	main_view.SetRotation(main_body->GetAngle());
}