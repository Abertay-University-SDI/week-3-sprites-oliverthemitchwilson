#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	player.setInput(in);
	enemy.setWindow(hwnd);
	enemy2.setWindow(hwnd);

	background.setWindow(hwnd);
	background.setInput(in);
	
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	player.handleInput(dt);
	background.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	player.update(dt);
	enemy.Update(dt);
	enemy2.Update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(background);
	//window->draw(testSprite);
	window->draw(player);
	window->draw(enemy);
	window->draw(enemy2);

	endDraw();
}
