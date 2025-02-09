#pragma once
#include <SFML/Graphics.hpp>
#include "Framework/GameObject.h";

class Background : public GameObject
{
public:
	Background();
	void handleInput(float dt);
	void SetWindow(sf::RenderWindow* win);
	void SetInput(Input* in);
	sf::Texture texture;
};

