#include <SFML/Graphics.hpp>
#include "GraphicalSceneStack.hpp"
int main ( int argc, char **argv )
{
	GraphicalSceneStack main_stack(new sf::RenderWindow(sf::VideoMode(800,400));
	main_stack.exec();
    return 0;
}

