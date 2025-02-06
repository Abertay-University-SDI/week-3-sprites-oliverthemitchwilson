
#include "Background.h"

Background::Background()
{
	texture.loadFromFile("gfx/Level1_1.png");
	setSize(sf::Vector2f(11038, 675));
	setTexture(&texture);
}

void Background::update(float dt)
{
}
