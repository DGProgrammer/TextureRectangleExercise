#pragma once
#include <SFML/System/Vector2.hpp>
namespace sf {
	class RectangleShape;
	class Texture;
}
class Entity
{
public:
	Entity(const sf::Vector2f& size,
		const sf::Vector2f& position,
		float velocity, int index);
	
	void update();
	sf::RectangleShape& sprite();
private:
	void movement();

private:
	sf::Texture* m_texture;
	sf::RectangleShape* m_sprite;
	sf::Vector2f m_position;

	const char direcciones[4][125]{ "textures/image1.png", "textures/image2.png" ,"textures/image3.png" ,"textures/image4.png" };
	bool goRight;
	float m_velocity;
};

