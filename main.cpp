#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 800), "Geometry", Style::Default);
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        Event WindowClosing;
        while (window.pollEvent(WindowClosing)) {
            if (WindowClosing.type == Event::Closed)
                window.close();
        }
        window.clear();
        window.display();
    }
}
