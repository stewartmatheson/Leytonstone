/*
 *  Player.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 6/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "Player.h"
#include "Ship.h"
#include "Box2D.h"
#include <iostream>
#include "math.h"
#include "Utils.h"


void Player::set_ship(Ship* s)
{ 
	//main_ship = s;
}

Ship& Player::get_ship()
{
	return main_ship;
}

void Player::init_box2d(b2World* world)
{
	b2BodyDef player_body_def;
	player_body_def.position.Set(100.0f, 100.0f);
	player_body_def.angularDamping = 2.00f;
	player_body_def.linearDamping = 0.1f;
	player_body = world->CreateBody(&player_body_def);
	
	b2PolygonDef ship_poly;
	ship_poly.SetAsBox(5.25f, 5.25f);
	ship_poly.density = .005f;
	ship_poly.friction = 0.3f;
	
	player_body->CreateShape(&ship_poly);
	player_body->SetMassFromShapes();
}

void Player::step()
{
	if(!player_body->IsSleeping())
		
	
	b2Vec2 pos = player_body->GetPosition();
	main_ship.SetPosition(pos.x, pos.y);
	main_ship.SetRotation(player_body->GetAngle());
}

void Player::left()
{
	player_body->ApplyTorque(70.0f);
}

void Player::right()
{
	player_body->ApplyTorque(-70.0f);
}

void Player::up()
{
	/*
	player_body->ApplyImpulse(b2Vec2(0.0f, 0.0f), b2Vec2(0.0f, 0.0f));
	b2Vec2 f = player_body->GetWorldVector(b2Vec2(sin(player_body->GetAngle()), cos(player_body->GetAngle())));
	//cout << current_angle << "Angle input: " << player_body->GetAngle() << "\n";
	b2Vec2 p = player_body->GetWorldPoint(b2Vec2(0.0f, 0.0f));
	player_body->ApplyImpulse(f,p);
	*/
	
	// get angle that is in radians!
	float shipAngle = player_body->GetAngle();
	
	// convert angle to vector and scale everything
	b2Vec2 f0 = Utils::vecFromAngle(shipAngle + Utils::toRad(0 - 90.0f));
	float thrusterForce = 100;
	f0 *= thrusterForce;
	b2Vec2 f1 = player_body->GetWorldVector(b2Vec2(0.0f, -thrusterForce));
	b2Vec2 p = player_body->GetWorldPoint(b2Vec2(0.0f, 2.25f));	
	player_body->ApplyForce(f0 + f1, p);
}

void Player::down()
{
	player_body->ApplyImpulse(b2Vec2(0.0f, 0.0f), b2Vec2(0.0f, 0.0f));
	b2Vec2 f = player_body->GetWorldVector(b2Vec2(sin(player_body->GetAngle()), cos(player_body->GetAngle())));
	b2Vec2 p = player_body->GetWorldPoint(b2Vec2(0.0f, 0.0f));
	player_body->ApplyImpulse(f,p);	
}