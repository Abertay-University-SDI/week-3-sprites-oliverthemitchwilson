#include "Player.h"

Player::Player()
{
	texture.loadFromFile("gfx/Mushroom.png");

	setSize(sf::Vector2f(100, 100));
	setPosition(100, 100);
	setTexture(&texture);

}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	//Modifies the values within the direction vector based on what keys are being pressed.
	//If W & D are pressed then the Vector would be (1, -1), this will make the player North-East.
	if (input->isKeyDown(sf::Keyboard::W))
	{
		direction.y = -1;
	}
	else if (input->isKeyDown(sf::Keyboard::S))
	{
		direction.y = 1;
	}
	else
	{
		direction.y = 0;
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		direction.x = -1;
	}
	else if (input->isKeyDown(sf::Keyboard::D))
	{
		direction.x = 1;
	}
	else
	{
		direction.x = 0;
	}
}

void Player::update(float dt)
{
	DirectionNormalise();
	//std::cout << std::endl << direction.x << " " << direction.y;
	//Moves the playerRect by the speed of the direction, factoring in the delta time.
	move(direction.x * speed * dt, direction.y * speed * dt);
}

void Player::DirectionNormalise()
{
	//Finds the magnitude of the direction vector.
	float directionMagnitude = sqrt((direction.x * direction.x) + (direction.y * direction.y));
	//std::cout << std::endl << directionLen;
	//If the magnitude/legnth is greater than 1, then both componentns of the vector will be devided by the magnitude.
	if (directionMagnitude > 1)
	{
		direction.x = (direction.x / directionMagnitude);
		direction.y = (direction.y / directionMagnitude);
	}
}