#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Text.hpp>
using namespace std;
int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Pracijue");
    /*sf::RenderWindow window(sf::VideoMode(200, 200), "Pracijue");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Red);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type = sf::Event::Closed)
                window.close();

        }
        window.clear();
        window.draw(shape);
        window.display();



    }
    */
    sf::Text text;
    sf::Text text2;
    sf::Text text3;
    sf::Text text4;
    sf::Text text5;
    sf::Font font;
    font.loadFromFile("BAUHS93.TTF");
    // select the font
    text.setFont(font);
    text2.setFont(font);// font is a sf::Font
    text3.setFont(font);
    text4.setFont(font);
    text5.setFont(font);
    // set the string to display
    text.setString("Hello");
    text2.setString("This is my first progect");
    text3.setString("I made it on C++");
    text4.setString("And it,finaly,working!");
    text5.setString("I like code");

    // set the character size
    text.setCharacterSize(50); // in pixels, not points!
    text2.setCharacterSize(35);
    text3.setCharacterSize(35);
    text4.setCharacterSize(35);
    text5.setCharacterSize(35);
    // set the color
    text.setFillColor(sf::Color::Red);
    text2.setFillColor(sf::Color::Green);
    text3.setFillColor(sf::Color::Blue);
    text4.setFillColor(sf::Color::White);
    text5.setFillColor(sf::Color::Yellow);

    text.move(150,0);
    text2.move(120, 55);
    text3.move(120, 90);
    text4.move(120, 125);
    text5.move(120, 160);

    // set the text style
    //text.setStyle(sf::Text::Bold | sf::Text::Underlined);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type = sf::Event::Closed)
                window.close();

        }
        window.clear();
        window.draw(text);
        window.draw(text2);
        window.draw(text3);
        window.draw(text4);
        window.draw(text5);
        window.display();
    }



}