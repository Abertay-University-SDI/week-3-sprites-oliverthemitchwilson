#include "Enemy.h"
#include <string>
using namespace std;

Enemy::Enemy(string file, float xPos, float yPos)
{
	texture.loadFromFile(file);

	setSize(sf::Vector2f(100, 100));
	setPosition(xPos, yPos);
	setTexture(&texture);

	direction.x = 1;
	direction.y = 1;
	
	speed = 300;
}

void Enemy::Update(float dt)
{
	if((getPosition().x + getSize().x) > window->getSize().x)
	{
		direction.x *= -1;
	}
	else if(getPosition().x < 0)
	{
		direction.x *= -1;
	}

	if((getPosition().y + getSize().y) > window->getSize().y)
	{
		direction.y *= -1;
	}
	else if(getPosition().y < 0)
	{
		direction.y *= -1;
	}

	move(direction.x * speed * dt, direction.y * speed * dt);
}
