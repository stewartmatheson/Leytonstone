/*
 *  Game.h
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 6/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef GAME_H
#define GAME_H

#include "Box2D.h"
#include "Player.h"
#include <vector>
#include "Controller.h"
#include "SFMLDebugDraw.h"
#include "Planet.h"
#include "StarField.h"
#include "Harvester.h"

using namespace std;

class Game : public Controller
{
	b2World* world;
	sf::View game_view;
	sf::RenderWindow current_app;
	vector<Player> players;
	vector<Planet> planets;
	Harvester first_harvester;
	
	void init_box2d(bool debug, sf::RenderWindow* App);
	float32 timeStep;
	DebugDraw debugger;
	void resize(sf::RenderWindow &App);
	StarField star_field;
	
public:
	Game(sf::RenderWindow &App, int const player_count, bool debug = true);
	void step();
	void process_events(sf::Event const &Event, sf::RenderWindow &App);
};

#endif