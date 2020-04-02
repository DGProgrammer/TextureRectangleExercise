#include <SFML/Graphics.hpp>
#include "World.h"
#include "Entity.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

	World world;
	world.init();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		world.update();
		window.clear();
		for (int i = 0; i < world.entities.size(); i++)
		{
			window.draw(world.entities[i].sprite());
		}

		window.display();
	}

	return 0;
}