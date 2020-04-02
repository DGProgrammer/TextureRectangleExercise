#include "Entity.h"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

Entity::Entity(const sf::Vector2f & size, const sf::Vector2f & position, float velocity, int index)
	: m_velocity(velocity), m_position(position)
{

	m_texture = new sf::Texture;
	m_texture->loadFromFile(direcciones[index]);
	m_sprite = new sf::RectangleShape(size);
	m_sprite->setTexture(m_texture);

	m_sprite->setPosition(position);
	m_sprite->setScale({ 0.08f,0.08f });


	goRight = true;
}

void Entity::update()
{
	movement();
}

sf::RectangleShape & Entity::sprite()
{
	return *m_sprite;
}

void Entity::movement()
{
	if (goRight)
	{
		m_position.x += m_velocity;
		if (m_position.x >= 440)
			goRight = false;
	}
	else
	{
		m_position.x -= m_velocity;
		if (m_position.x <= 40)
			goRight = true;
	}
	m_sprite->setPosition(m_position);
}
