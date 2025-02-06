#pragma once
#include "Framework/GameObject.h"

class Background : public GameObject
{
public:
	Background();
	void update(float dt);
private:
	sf::Texture texture;
};

