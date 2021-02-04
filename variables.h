#pragma once
#include <SFML/Graphics.hpp>
#define VARIABLES_H
#ifdef VARIABLES_H

__declspec(selectany) extern  const int  row=9, column=9;
__declspec(selectany) extern int grid[row][column] = { {-2,-2,-2,-2,-2,-2,-2,-2,-2},
                       {-2,-2,-2,-2,-2,-2,-2,-2,-2},
                       {-2,-2,-2,-2,-2,-2,-2,-2,-2},
                       {-2,-2,-2,-2,-2,-2,-2,-2,-2},
                       {-2,-2,-2,-2,-2,-2,-2,-2,-2},
                       {-2,-2,-2,-2,-2,-2,-2,-2,-2},
                       {-2,-2,-2,-2,-2,-2,-2,-2,-2},
                       {-2,-2,-2,-2,-2,-2,-2,-2,-2},
                       {-2,-2,-2,-2,-2,-2,-2,-2,-2} };
__declspec(selectany) extern int initial[100];
__declspec(selectany) extern int scoreGrid[row][column];
__declspec(selectany) extern int simple_candies[5] = { 11,17,19,7,13 };
__declspec(selectany) extern int horizontal_striped[5] = { 22,34,38,14,26 };
__declspec(selectany) extern int vertical_striped[5] = { 33,51,57,21,39 };
__declspec(selectany) extern int wrapped_candy[5] = { 44,68,76,28,52 };
__declspec(selectany) extern int mousex = -1, mousey = -1;
__declspec(selectany) extern int points = 0;
__declspec(selectany) extern int frontscreen = -1;
__declspec(selectany) extern int turns = 20;
__declspec(selectany) extern int x1 = -1, Y1 = -1, x2=-1, y2=-1;
__declspec(selectany) extern int save = 0;
__declspec(selectany) extern const int red = 11, Yellow = 17, green = 19, blue = 7, Orange = 13;
sf::RenderWindow __declspec(selectany) extern window(sf::VideoMode(1920, 1080), "SFML works!", sf::Style::Close | sf::Style::Fullscreen);
//sf::Vector2i __declspec(selectany) extern localPosition = sf::Mouse::getPosition(window);

#endif // VARIABLES_H

