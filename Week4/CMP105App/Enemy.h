#pragma once
#include "Framework/GameObject.h"
#include <string>
using namespace std;

class Enemy : public GameObject
{
public:
	Enemy(string file, float xPos, float yPos);
	void Update(float dt);
private:
	sf::Texture texture;
	sf::Vector2f direction;
	float speed;
};

