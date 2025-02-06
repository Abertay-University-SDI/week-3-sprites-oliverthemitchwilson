#pragma once
#include "Framework/GameObject.h"

class Player : public GameObject
{
public:
	Player();
	~Player();
	void handleInput(float dt);
	void update(float dt);
	void DirectionNormalise();
private:
	sf::Vector2f direction;
	float speed = 600;
	sf::Texture texture;
};

