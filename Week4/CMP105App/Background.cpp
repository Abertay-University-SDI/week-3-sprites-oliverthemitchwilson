#include "Background.h"


Background::Background()
{
	texture.loadFromFile("gfx/Level1_1.png");
	setTexture(&texture);
	setSize(sf::Vector2f(11038, 675));
}

void Background::handleInput(float dt)
{
	sf::View view = window->getView();
	if((input->isKeyDown(sf::Keyboard::Right)) && (view.getCenter().x + window->getSize().x / 2) <= 11038)
	{
		view.setCenter(view.getCenter().x + (700 * dt), view.getCenter().y);
	}
	else if(input->isKeyDown(sf::Keyboard::Left) && (view.getCenter().x - window->getSize().x / 2) >= 0)
	{
		view.setCenter(view.getCenter().x - (700 * dt), view.getCenter().y);
	}
	window->setView(view);
}

