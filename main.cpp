#include <SFML/Graphics.hpp>
#include "Game.h"


sf::RenderWindow App(sf::VideoMode(800, 600), "Project: Leytonstone");
//Controller* game;
GameFacade * game;


void init()
{
	//game = new Game(App, 1, true);
	game = new Game(1);
}

void process_events()
{
	sf::Event Event;
	while (App.GetEvent(Event))
	{		
		game->process_events(Event, App);
	}
}

void draw()
{
	App.Clear();
	
	//for(int i = 0; i < game->views.size(); i++)
	//	game->views[i]->draw(App);
	
	//game->draw();
	
	//sf::Shape Rect = sf::Shape::Rectangle(-1500, 1500, 1500, -1500, sf::Color(0,0,0,0), 2, sf::Color::White);
	//App.Draw(Rect);
	App.Display();
}

void step()
{
	game->step();
}

int main()
{
	init();
    while (App.IsOpened())
    {
		process_events();
		step();
		//draw();
    }
    return EXIT_SUCCESS;
}
