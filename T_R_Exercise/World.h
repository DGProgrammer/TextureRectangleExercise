#pragma once
#include <vector>
class World
{
public:
	World();

	void init();
	
	void update();
	/** current entities inside the world*/
	std::vector<class Entity> entities;

private:
	void spawnCharacter(int amount);
};

