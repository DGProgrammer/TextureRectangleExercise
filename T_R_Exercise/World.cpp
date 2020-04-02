#include "World.h"
#include <SFML/System/Vector2.hpp>
#include "Entity.h"
World::World() {}

void World::init()
{
	spawnCharacter(4);
}

void World::update()
{
	for (int i = 0; i < entities.size(); i++)
	{
		entities[i].update();
	}
}

void World::spawnCharacter(int amount)
{
	sf::Vector2f size(512, 512);
	sf::Vector2f position(5, 90);
	for (int i = 0; i < amount; i++)
	{
		Entity p(size, position, 0.02f, i);
		entities.push_back(p);
		position.x += 50;
	}
}
