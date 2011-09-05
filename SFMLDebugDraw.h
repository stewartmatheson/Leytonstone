/*
 *  SFMLDebugDraw.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 19/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef SFMLDEBUGDRAW_H
#define SFMLDEBUGDRAW_H

#include "Box2D.h"
#include <SFML/Graphics.hpp>

struct Settings
{
	Settings() :
	hz(60.0f),
	iterationCount(10),
	drawStats(0),
	drawShapes(1),
	drawJoints(1),
	drawCoreShapes(0),
	drawAABBs(0),
	drawOBBs(0),
	drawPairs(0),
	drawContactPoints(0),
	drawContactNormals(0),
	drawContactForces(0),
	drawFrictionForces(0),
	drawCOMs(0),
	enableWarmStarting(1),
	enablePositionCorrection(1),
	enableTOI(1),
	pause(0),
	singleStep(0)
	{}
	
	float32 hz;
	int32 iterationCount;
	int32 drawShapes;
	int32 drawJoints;
	int32 drawCoreShapes;
	int32 drawAABBs;
	int32 drawOBBs;
	int32 drawPairs;
	int32 drawContactPoints;
	int32 drawContactNormals;
	int32 drawContactForces;
	int32 drawFrictionForces;
	int32 drawCOMs;
	int32 drawStats;
	int32 enableWarmStarting;
	int32 enablePositionCorrection;
	int32 enableTOI;
	int32 pause;
	int32 singleStep;
};

struct b2AABB;

class DebugDraw : public b2DebugDraw
{
	sf::RenderWindow* App;
public:
	
	void SetApp(sf::RenderWindow* App);
	
	void DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
	
	void DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
		
	void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
	
	void DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color);
		
	void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
		
	void DrawXForm(const b2XForm& xf);
};

void DrawPoint(const b2Vec2& p, float32 size, const b2Color& color);
void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);

void DrawString(int x, int y, const char* string, ...);
void DrawAABB(b2AABB* aabb, const b2Color& color);


#endif