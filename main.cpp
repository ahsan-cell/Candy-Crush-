#include <SFML/Graphics.hpp>
#include<windows.h>
#include<iostream>
#include"backend.h";
#include"frontend.h";
using namespace std;
#include"variables.h";

int main()
{
    sf::RectangleShape line1(sf::Vector2f(900, 1));
    sf::RectangleShape line2(sf::Vector2f(900, 1));
    sf::CircleShape yellow_candy(80, 3);
    line1.rotate(90);

    initialize(grid);
    while (initialMatchCheck(grid) != -1)
    {
        initialMatchCheck(grid);
        shift(grid);
        refill(grid);
    }

    copyOfGrid(scoreGrid, grid);



    while (window.isOpen())
    {


        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            window.close();

        window.clear();
        if (frontscreen == -1)
        {
            main_menu();
        }
        else if (frontscreen == 1)
        {
            savebutton();
            if (save == 1)
            {
                savetofile();
                save = 0;
            }
            for (int i = 100; i < 1100; i = i + 100)
            {

                line1.setPosition(i, 100);

                window.draw(line1);

            }
            for (int i = 100; i < 1100; i = i + 100)
            {

                line2.setPosition(100, i);
                window.draw(line2);
            }
            showscore(points, turns);

      
            display_candies(grid);
            Sleep(99);
            shift(grid);
            refill(grid);
            if (x1 == -1 && Y1 == -1)
                input(x1, Y1);
            highlight(x1, Y1);
            if (x2 == -1 && y2 == -1)
                input(x2, y2);
            highlight(x2, y2);
            if (turns >=1)
            {
                swap(grid, x1, Y1, x2, y2);
            }
            
           
            score(scoreGrid, grid);
            copyOfGrid(scoreGrid, grid);
          
            candybomb(grid);
            score(scoreGrid, grid);
            copyOfGrid(scoreGrid, grid);
           
            wrappedcandy(grid);
            score(scoreGrid, grid);
            copyOfGrid(scoreGrid, grid);
            
            stripedcandies(grid);
            score(scoreGrid, grid);
            copyOfGrid(scoreGrid, grid);
                      
            simplythree(grid);
            score(scoreGrid, grid);
            copyOfGrid(scoreGrid, grid);
            
            
            
            

        }
        else if (frontscreen == 2)
        {
            pastetogrid();
            
            frontscreen = 1;
        }
        if (turns == 0)
        {
            conclusion();
            
            
        }
        window.display();
    }
    
    return 0;

}
