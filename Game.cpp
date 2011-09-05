/*
 *  Game.cpp
 *  Leytonstone
 *
 *  Created by Stewart Matheson on 6/02/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "Game.h"
#include "Player.h"
#include <vector>
#include "SFMLDebugDraw.h"
#include "Planet.h"
#include "StarField.h"
#include "EnemySquadron.h"
#include "MoveOrder.h"
#include "LevelOne.h"

using namespace std;

Game::Game(sf::RenderWindow &App, int const player_count, bool debug)
{
	game_view.SetHalfSize(400, 300);
	App.SetView(game_view);
	
	
	/*
	
	//set the time step for box2d
	timeStep = 1.0f / 60.0f;
	
	//set up the world for box2d
	init_box2d(debug, &App);
	
	//add the star_field to the views
	views.push_back(&star_field);
	
	//add the harvester to the views
	first_harvester.init_box2d(world);
	views.push_back(&first_harvester.get_view());
	
	
	planets.resize(10);
	//now create the planets that will be on the game board
	for(int i = 0; i < planets.size(); i++)
	{
		planets[i].init_box2d(world);
		views.push_back(&planets[i].get_view());
		views.push_back(&planets[i].get_status_bar());
	}
	
	//set up the players for the game.
	for(int i = 0; i < player_count; i++)
	{
		Player current_player = Player();
		current_player.init_box2d(world);
		players.push_back(current_player);
		views.push_back(&players[i].get_ship());
	}
	
	EnemySquadron es = EnemySquadron();
	 
	*/
	
	
	LevelOne l1 = LevelOne();
	l1.create_players();
	
	
	
	/*
	//create enemies here
	for(int i = 0; i < 10; i ++)
	{
		es.create_enemy();
		views.push_back(&e.get_view());
	}
	 */
}


void Game::init_box2d(bool debug, sf::RenderWindow* App)
{
	b2AABB worldAABB;
	worldAABB.lowerBound.Set(-1500.0f, -1500.0f);
	worldAABB.upperBound.Set(1500.0f, 1500.0f);
	b2Vec2 gravity(0.0f, 0.0f);
	bool doSleep = true;
	world = new b2World(worldAABB, gravity, doSleep);
	debugger.SetApp(App);
	
	debugger.SetFlags(b2DebugDraw::e_shapeBit|b2DebugDraw::e_coreShapeBit|b2DebugDraw::e_aabbBit);
	world->SetDebugDraw(&debugger);
}

void Game::step()
{
	world->Step(timeStep, 10);
	world->Validate();
	for(int i = 0; i < players.size(); i++)
		players[i].step();
	
	for(int i = 0; i < planets.size(); i++)
		planets[i].step();
	
	first_harvester.step();
	
	//set the camera on the first player.
	game_view.SetCenter(players[0].get_ship().get_xpos(), players[0].get_ship().get_ypos());
	
}

void Game::process_events(sf::Event const &Event, sf::RenderWindow &App)
{
	// Close window : exit
	if (Event.Type == sf::Event::Closed)
		App.Close();
	
	// Escape key pressed
	if ((Event.Type == sf::Event::KeyPressed) && (Event.Key.Code == sf::Key::Escape))
		App.Close();
	
	if (App.GetInput().IsKeyDown(sf::Key::Left))  
		players[0].left();

	if (App.GetInput().IsKeyDown(sf::Key::Right))  
		players[0].right();
	
	if (App.GetInput().IsKeyDown(sf::Key::Up))
		players[0].up();
	
	if (App.GetInput().IsKeyDown(sf::Key::Down))  
		players[0].down();
	
	if (Event.Type == sf::Event::Resized)
		resize(App);
}

void Game::resize(sf::RenderWindow &App)
{
	game_view.SetHalfSize(App.GetWidth() / 2, App.GetHeight() / 2);
}