#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	// Level objects
	GameObject testSprite;
	sf::Texture texture;
	Player player;
	Enemy enemy = Enemy("gfx/goomba.png", 100, 100);
	Enemy enemy2 = Enemy("gfx/Beach_Ball.png", 357, 300);
};