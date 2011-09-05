/*
 *  Utils.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 11/03/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "Utils.h"
#include "Box2D.h"

bool Utils::closeTo(float num0, float num1)
{
	return fabs((num0 - num1) / ((num1 == 0.0f) ? 1.0f : num1)) < EPSILON;
}

b2Vec2 Utils::vecFromAngle(float p_angle)
{
	return b2Vec2(cos(p_angle), sin(p_angle));
}

float Utils::angleFromVec(const b2Vec2& p_vector)
{
	b2Vec2 tmpVec = p_vector;
	tmpVec.Normalize();
	
	return atan(tmpVec.y / tmpVec.y);	
}

float Utils::angleFromVecs(const b2Vec2& p_vec1, const b2Vec2& p_vec2)
{	
	return atan2(p_vec1.y, p_vec1.x) - atan2(p_vec2.y, p_vec2.x);
}

