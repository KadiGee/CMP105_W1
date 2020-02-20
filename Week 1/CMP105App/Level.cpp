#include "Level.h"


Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect1.setSize(sf::Vector2f(50, 50));
	rect1.setPosition(100, 100);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(30, 30));
	rect2.setPosition(110, 110);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(10, 10));
	rect3.setPosition(120, 120);
	rect3.setFillColor(sf::Color::Blue);

	rect4.setSize(sf::Vector2f(75, 75));
	rect4.setPosition(120, 120);
	rect4.setFillColor(sf::Color::Blue);

	if (!font.loadFromFile("font/arial.ttf"))
	{ 
		std::cout << "Error loading font\n"; 
	}

	text.setFont(font);
	text.setString("Hello world");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);

	//rect.setOutlineColor(sf::Color::Blue);
	//rect.setOutlineThickness(2.f);

	//circle.setRadius(50);
	//circle.setPosition(550, 287.5);
	//circle.setFillColor(sf::Color::Blue);
	//circle.setOutlineColor(sf::Color::Red);
	//circle.setOutlineThickness(2.f);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = (window->getSize());

	sf::Vector2f rectSize = rect4.getSize();

	sf::Vector2f posrect = sf::Vector2f(pos.x - rectSize.x, pos.y - rectSize.y);

	rect4.setPosition(posrect);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(text);
	window->draw(rect4);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}