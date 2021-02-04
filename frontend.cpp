#include <SFML/Graphics.hpp>
#include"frontend.h";
#include"backend.h";
#include<windows.h>
#include"variables.h";
#include<sstream>
#pragma warning C4430;

//void display_candies(int grid[][column]);
//void jelly_bean(float x, float y);
//void orange(float x, float y);
//void square_candy(float x, float y);
//void blue_candy(float x, float y);
//void yellow(float x, float y);
//void candy_bomb(float x, float y);
//void  jelly_bean_vertical(float x, float y);
//void  jelly_bean_horizontal(float x, float y);
//void orange_horizontal(float x, float y);
//void orange_vertical(float x, float y);
//void square_candy_horizontal(float x, float y);
//void square_candy_vertical(float x, float y);
//void yellow_horizontal(float x, float y);
//void yellow_vertical(float x, float y);
//void blue_candy_horizontal(float x, float y);
//void blue_candy_vertical(float x, float y);
//void input(int& mousex, int& mousey);
//void INPUT2(int x1, int Y1, int x2, int y2);
//int mousex = 0, mousey = 0;
//void wraped_jelly_bean(float x, float y);
//void wraped_square_candy(float x, float y);
//void wraped_yellow(float x, float y);
//void wraped_orange(float x, float y);
//void wraped_blue_candy(float x, float y);
//void initialize(int grid[row][column]);


#include<iostream>
using namespace std;

//we got this class from internet it is an sfml class used ti
class EllipseShape : public sf::Shape
{
public:

    explicit EllipseShape(const sf::Vector2f& radius = sf::Vector2f(0, 0)) :
        m_radius(radius)
    {
        update();
    }

    void setRadius(const sf::Vector2f& radius)
    {
        m_radius = radius;
        update();
    }

    const sf::Vector2f& getRadius() const
    {
        return m_radius;
    }

    virtual unsigned int getPointCount() const
    {
        return 30; // fixed, but could be an attribute of the class if needed
    }

    virtual sf::Vector2f getPoint(unsigned int index) const
    {
        static const float pi = 3.141592654f;

        float angle = index * 2 * pi / getPointCount() - pi / 2;
        float x = std::cos(angle) * m_radius.x;
        float y = std::sin(angle) * m_radius.y;

        return sf::Vector2f(m_radius.x + x, m_radius.y + y);
    }

private:

    sf::Vector2f m_radius;
};


void jelly_bean(float x, float y)
{
    if (y == 0)
        y = 130;
    else
        y = (y * 100) + 130;
    if (x == 0)
        x = 120;
    else
        x = (x * 100) + 120;

    sf::RectangleShape jelly_bean(sf::Vector2f(70, 20));
    jelly_bean.rotate(45);
    jelly_bean.setFillColor(sf::Color::Red);
    jelly_bean.setPosition(y, x);
    window.draw(jelly_bean);


}
void orange(float x, float y)
{
    EllipseShape orange(sf::Vector2f(30.0f, 40.0f));
    orange.setFillColor(sf::Color(255, 165, 0));
    if (y == 0)
        y = 125;
    else
        y = (y * 100) + 125;
    if (x == 0)
        x = 110;
    else
        x = (x * 100) + 110;


    orange.setPosition(y, x);
    window.draw(orange);

}
void square_candy(float x, float y)
{
    sf::RectangleShape square_candy(sf::Vector2f(60, 60));
    square_candy.setFillColor(sf::Color::Green);
    if (y == 0)
        y = 120;
    else
        y = (y * 100) + 120;
    if (x == 0)
        x = 120;
    else
        x = (x * 100) + 120;


    square_candy.setPosition(y, x);
    window.draw(square_candy);
}
void blue_candy(float x, float y)
{
    sf::CircleShape blue_candy(40.0f);
    blue_candy.setFillColor(sf::Color::Blue);
    if (y == 0)
        y = 110;
    else
        y = (y * 100) + 110;
    if (x == 0)
        x = 105;
    else
        x = (x * 100) + 105;

    blue_candy.setPosition(y, x);
    window.draw(blue_candy);
}
void yellow(float x, float y)
{
    sf::CircleShape yellow(40, 3);
    yellow.setFillColor(sf::Color::Yellow);
    if (y == 0)
        y = 110;
    else
        y = (y * 100) + 110;
    if (x == 0)
        x = 115;
    else
        x = (x * 100) + 115;
    yellow.setPosition(y, x);
    window.draw(yellow);

}
void candy_bomb(float x, float y)
{
    sf::CircleShape shape(40.f);
    shape.setFillColor(sf::Color::Red);
    shape.setOutlineThickness(10);
    shape.setOutlineColor(sf::Color::Blue);
    if (y == 0)
        y = 110;
    else
        y = (y * 100) + 110;
    if (x == 0)
        x = 110;
    else
        x = (x * 100) + 110;

    shape.setPosition(y, x);
    window.draw(shape);
    sf::CircleShape shape2(5.0f);
    shape2.setFillColor(sf::Color::Green);
    shape2.setPosition(y + 50, x + 50);
    window.draw(shape2);
    sf::CircleShape shape3(5.0f);
    shape3.setFillColor(sf::Color::Cyan);
    shape3.setPosition(y + 35, x + 35);
    window.draw(shape3);
    sf::CircleShape shape4(5.0f);
    shape4.setFillColor(sf::Color::White);
    shape4.setPosition(y + 20, x + 20);
    window.draw(shape4);
    sf::CircleShape shape5(5.0f);
    shape5.setFillColor(sf::Color::Yellow);
    shape5.setPosition(y + 50, x + 20);
    window.draw(shape5);
    sf::CircleShape shape6(5.0f);
    shape6.setFillColor(sf::Color::Yellow);
    shape6.setPosition(y + 20, x + 50);
    window.draw(shape6);

}

void  jelly_bean_vertical(float x, float y)
{
    if (y == 0)
        y = 130;
    else
        y = (y * 100) + 130;
    if (x == 0)
        x = 120;
    else
        x = (x * 100) + 120;

    sf::RectangleShape jelly_bean(sf::Vector2f(70, 20));
    jelly_bean.rotate(45);
    jelly_bean.setFillColor(sf::Color::Red);
    jelly_bean.setPosition(y, x);

    sf::RectangleShape vertical(sf::Vector2f(25, 3));
    vertical.rotate(90);
    window.draw(jelly_bean);
    for (int i = 0; i < 40; i = i + 10)
    {
        vertical.setPosition(y + i, x + i);
        window.draw(vertical);
    }


}
void  jelly_bean_horizontal(float x, float y)
{
    if (y == 0)
        y = 130;
    else
        y = (y * 100) + 130;
    if (x == 0)
        x = 120;
    else
        x = (x * 100) + 120;

    sf::RectangleShape jelly_bean(sf::Vector2f(70, 20));
    jelly_bean.rotate(45);
    jelly_bean.setFillColor(sf::Color::Red);
    jelly_bean.setPosition(y, x);

    sf::RectangleShape vertical(sf::Vector2f(25, 3));
    
    window.draw(jelly_bean);
    for (int i = 0; i < 40; i = i + 10)
    {
        vertical.setPosition(y + i - 10, x + i + 15);
        window.draw(vertical);
    }


}
void orange_horizontal(float x, float y)
{
    EllipseShape orange(sf::Vector2f(30.0f, 40.0f));
    orange.setFillColor(sf::Color(255, 165, 0));
    sf::RectangleShape horizontal(sf::Vector2f(40, 4));

    if (y == 0)
        y = 125;
    else
        y = (y * 100) + 125;
    if (x == 0)
        x = 110;
    else
        x = (x * 100) + 110;
    orange.setPosition(y, x);

    window.draw(orange);

    for (int i = 0; i < 60; i = i + 10)
    {
        horizontal.setPosition(y + 10, x + 10 + i);
        window.draw(horizontal);

    }

}
void orange_vertical(float x, float y)
{
    EllipseShape orange(sf::Vector2f(30.0f, 40.0f));
    orange.setFillColor(sf::Color(255, 165, 0));
    sf::RectangleShape vertical(sf::Vector2f(47, 4));
    vertical.rotate(90);

    if (y == 0)
        y = 125;
    else
        y = (y * 100) + 125;
    if (x == 0)
        x = 110;
    else
        x = (x * 100) + 110;
    orange.setPosition(y, x);

    window.draw(orange);

    for (int i = 0; i < 50; i = i + 10)
    {
        vertical.setPosition(y + 12 + i, x + 15);
        window.draw(vertical);

    }

}
void square_candy_horizontal(float x, float y)
{
    sf::RectangleShape square_candy(sf::Vector2f(60, 60));
    square_candy.setFillColor(sf::Color::Green);
    sf::RectangleShape horizontal(sf::Vector2f(60, 4));
    if (y == 0)
        y = 120;
    else
        y = (y * 100) + 120;
    if (x == 0)
        x = 120;
    else
        x = (x * 100) + 120;


    square_candy.setPosition(y, x);
    window.draw(square_candy);
    for (int i = 0; i < 60; i = i + 10)
    {
        horizontal.setPosition(y, x + i);
        window.draw(horizontal);
    }

}
void square_candy_vertical(float x, float y)
{
    sf::RectangleShape square_candy(sf::Vector2f(60, 60));
    square_candy.setFillColor(sf::Color::Green);
    sf::RectangleShape vertical(sf::Vector2f(60, 4));
    vertical.rotate(90);
    if (y == 0)
        y = 120;
    else
        y = (y * 100) + 120;
    if (x == 0)
        x = 120;
    else
        x = (x * 100) + 120;


    square_candy.setPosition(y, x);
    window.draw(square_candy);
    for (int i = 0; i < 60; i = i + 10)
    {
        vertical.setPosition(y + i + 5, x);
        window.draw(vertical);
    }

}
void yellow_horizontal(float x, float y)
{
    sf::CircleShape yellow(40, 3);
    yellow.setFillColor(sf::Color::Yellow);

    if (y == 0)
        y = 110;
    else
        y = (y * 100) + 110;
    if (x == 0)
        x = 115;
    else
        x = (x * 100) + 115;
    yellow.setPosition(y, x);
    window.draw(yellow);
    int j = 0;
    for (int i = 0; i < 50; i = i + 10)
    {

        sf::RectangleShape horizontal(sf::Vector2f(50 - i, 4));
        horizontal.setPosition(y + 15 + j, x + 50 - i);
        window.draw(horizontal);
        j = j + 5;
    }

}
void yellow_vertical(float x, float y)
{
    sf::CircleShape yellow(40, 3);
    yellow.setFillColor(sf::Color::Yellow);

    if (y == 0)
        y = 110;
    else
        y = (y * 100) + 110;
    if (x == 0)
        x = 115;
    else
        x = (x * 100) + 115;
    yellow.setPosition(y, x);
    window.draw(yellow);
    int j = 0;
    for (int i = 0; i < 20; i = i + 10)
    {

        sf::RectangleShape vertical(sf::Vector2f(40 + i, 4));
        vertical.rotate(90);
        vertical.setPosition(y + i + 30, x + 19 - j);
        window.draw(vertical);
        j = j + 9;
    }
    sf::RectangleShape vertical2(sf::Vector2f(40, 4));
    vertical2.rotate(90);
    vertical2.setPosition(y + 50, x + 19);
    window.draw(vertical2);

}
void blue_candy_horizontal(float x, float y)
{
    sf::CircleShape blue_candy(40.0f);
    blue_candy.setFillColor(sf::Color::Blue);
    if (y == 0)
        y = 110;
    else
        y = (y * 100) + 110;
    if (x == 0)
        x = 105;
    else
        x = (x * 100) + 105;


    blue_candy.setPosition(y, x);
    window.draw(blue_candy);
    int j = 0;
    for (int i = 0; i < 80; i = i + 20)
    {
        sf::RectangleShape horizontal(sf::Vector2f(70 - i, 3));
        horizontal.setPosition(y + 5 + j, x + 40 - j);
        window.draw(horizontal);
        j = j + 10;
    }
    int k = 0;
    for (int i = 0; i < 60; i = i + 20)
    {
        sf::RectangleShape horizontal(sf::Vector2f(50 - i, 3));
        horizontal.setPosition(y + 15 + k, x + 50 + k);
        window.draw(horizontal);
        k = k + 10;

    }
}
void blue_candy_vertical(float x, float y)
{
    sf::CircleShape blue_candy(40.0f);
    blue_candy.setFillColor(sf::Color::Blue);
    if (y == 0)
        y = 110;
    else
        y = (y * 100) + 110;
    if (x == 0)
        x = 105;
    else
        x = (x * 100) + 105;


    blue_candy.setPosition(y, x);
    window.draw(blue_candy);
    int j = 0;
    for (int i = 0; i < 80; i = i + 20)
    {
        sf::RectangleShape horizontal(sf::Vector2f(70 - i, 3));
        horizontal.rotate(90);
        horizontal.setPosition(y + 40 + j, x + 9 + j);
        window.draw(horizontal);
        j = j + 10;
    }
    int k = 0;
    for (int i = 0; i < 60; i = i + 20)
    {
        sf::RectangleShape horizontal(sf::Vector2f(50 - i, 3));
        horizontal.rotate(90);
        horizontal.setPosition(y + 30 - k, x + 19 + k);
        window.draw(horizontal);
        k = k + 10;
    }
}
void wraped_jelly_bean(float x, float y)
{
    int ori_x = x;
    int ori_y = y;

    if (y == 0)
        y = 101;
    else
        y = (y * 100) + 101;
    if (x == 0)
        x = 101;
    else
        x = (x * 100) + 101;
    sf::RectangleShape background(sf::Vector2f(98, 98));
    background.setFillColor(sf::Color(128, 0, 128));
    background.setPosition(y, x);
    window.draw(background);
    jelly_bean(ori_x, ori_y);
}
void wraped_square_candy(float x, float y)
{
    int ori_x = x;
    int ori_y = y;

    if (y == 0)
        y = 101;
    else
        y = (y * 100) + 101;
    if (x == 0)
        x = 101;
    else
        x = (x * 100) + 101;
    sf::RectangleShape background(sf::Vector2f(98, 98));
    background.setFillColor(sf::Color(128, 0, 128));
    background.setPosition(y, x);
    window.draw(background);
    square_candy(ori_x, ori_y);
}
void wraped_yellow(float x, float y)
{
    int ori_x = x;
    int ori_y = y;

    if (y == 0)
        y = 101;
    else
        y = (y * 100) + 101;
    if (x == 0)
        x = 101;
    else
        x = (x * 100) + 101;
    sf::RectangleShape background(sf::Vector2f(98, 98));
    background.setFillColor(sf::Color(128, 0, 128));
    background.setPosition(y, x);
    window.draw(background);
    yellow(ori_x, ori_y);
}
void wraped_orange(float x, float y)
{
    int ori_x = x;
    int ori_y = y;

    if (y == 0)
        y = 101;
    else
        y = (y * 100) + 101;
    if (x == 0)
        x = 101;
    else
        x = (x * 100) + 101;
    sf::RectangleShape background(sf::Vector2f(98, 98));
    background.setFillColor(sf::Color(128, 0, 128));
    background.setPosition(y, x);
    window.draw(background);
    orange(ori_x, ori_y);
}
void wraped_blue_candy(float x, float y)
{
    int ori_x = x;
    int ori_y = y;

    if (y == 0)
        y = 101;
    else
        y = (y * 100) + 101;
    if (x == 0)
        x = 101;
    else
        x = (x * 100) + 101;
    sf::RectangleShape background(sf::Vector2f(98, 98));
    background.setFillColor(sf::Color(128, 0, 128));
    background.setPosition(y, x);
    window.draw(background);
    blue_candy(ori_x, ori_y);
}

void display_candies(int grid[][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (grid[i][j] == 11)
                jelly_bean(i, j);
            else if (grid[i][j] == 17)
                yellow(i, j);
            else if (grid[i][j] == 19)
                square_candy(i, j);
            else if (grid[i][j] == 7)
                blue_candy(i, j);
            else if (grid[i][j] == 13)
                orange(i, j);
            else if (grid[i][j] == 22)
                jelly_bean_horizontal(i, j);
            else if (grid[i][j] == 34)
                yellow_horizontal(i, j);
            else if (grid[i][j] == 38)
                square_candy_horizontal(i, j);
            else if (grid[i][j] == 14)
                blue_candy_horizontal(i, j);
            else if (grid[i][j] == 26)
                orange_horizontal(i, j);
            else if (grid[i][j] == 33)
                jelly_bean_vertical(i, j);
            else if (grid[i][j] == 51)
                yellow_vertical(i, j);
            else if (grid[i][j] == 57)
                square_candy_vertical(i, j);
            else if (grid[i][j] == 21)
                blue_candy_vertical(i, j);
            else if (grid[i][j] == 39)
                orange_vertical(i, j);
            else if (grid[i][j] == 44)
                wraped_jelly_bean(i, j);
            else if (grid[i][j] == 68)
                wraped_yellow(i, j);
            else if (grid[i][j] == 76)
                wraped_square_candy(i, j);
            else if (grid[i][j] == 28)
                wraped_blue_candy(i, j);
            else if (grid[i][j] == 52)
                wraped_orange(i, j);
            else if (grid[i][j] == -3)
            {
                zero(i, j);
                //Sleep(50);
              
            }
                
            else if (grid[i][j] == 999)
                candy_bomb(i, j);
            
            //Sleep(99);
           // window.clear();


        }
    }
}

void input(int& mousex, int& mousey)
{
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        mousey = sf::Mouse::getPosition(window).x;
        mousex = sf::Mouse::getPosition(window).y;
        if (mousex > 900 && mousex < 992 && mousey>1300 && mousey < 1700)
        {
            save = 1;
        }
        mousex = (mousex / 100) - 1;
        mousey = (mousey / 100) - 1;
        if (mousex > 8 || mousey > 8)
        {
            mousex = -1;
            mousey = -1;
        }
        if (mousex < 0 || mousey < 0)
        {
            mousex = -1;
            mousey = -1;
        }
      


        
        Sleep(500);
        
    }

}

void zero(float x,float y)
{
    sf::RectangleShape line1(sf::Vector2f(90,5));
    sf::RectangleShape line2(sf::Vector2f(90, 5));
    

    line1.rotate(45);
    line2.rotate(135);
    if (y == 0)
        y = 110;
    else
        y = (y * 100) + 110;
    if (x == 0)
        x = 105;
    else
        x = (x * 100) + 105;

    line1.setPosition(y+10, x+12);
    line2.setPosition(y+75, x+17);
    window.draw(line1);
    window.draw(line2);
    
}
void highlight(int x, int y)
{
    if (x != -1 && y != -1)
    {
        sf::RectangleShape square(sf::Vector2f(80, 80));
        square.setFillColor(sf::Color::Transparent);
        square.setOutlineColor(sf::Color::White);
        square.setOutlineThickness(3.0);
        x++;
        y++;
        x = x * 100 +10;
        y = y * 100+ 10;
        square.setPosition(y, x);
        window.draw(square);
    }
}

void main_menu()
{
    sf::Font font;
    sf::Text text;
    sf::RectangleShape play(sf::Vector2f(100, 400));
    play.rotate(90);
    sf::RectangleShape loadgame(sf::Vector2f(100, 400));
    loadgame.rotate(90);
    play.setFillColor(sf::Color(30, 63, 90));
    loadgame.setFillColor(sf::Color(30, 63, 90));
    text.setOutlineThickness(4.0f);
    text.setOutlineColor(sf::Color::Red);
    if (!font.loadFromFile("Fresh Lychee.ttf"))
    {
        cout << "error";
    }
    text.setFont(font);
    text.setOutlineThickness(4.0f);
    
    text.setOutlineColor(sf::Color::Red);
    text.setString("Candy Crush");
    text.setCharacterSize(200);
    
    text.setPosition(440, 300);
    play.setPosition(1100, 570);
    loadgame.setPosition(1100, 710);
    play.setOutlineThickness(-7.0f);
    loadgame.setOutlineThickness(-7.0f);
    play.setOutlineColor(sf::Color::Yellow);
    loadgame.setOutlineColor(sf::Color::Blue);
    sf::Text text2;
    sf::Text text3;
    text2.setFont(font);
    text3.setFont(font);
    text2.setString("Play");
    text3.setString("Load game");
    text2.setCharacterSize(100);
    text3.setCharacterSize(98);
    text2.setPosition(825, 560);
    text3.setPosition(725, 700);
    window.draw(text);
    window.draw(play);
    window.draw(loadgame);
    window.draw(text2);
    window.draw(text3);

    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        int x, y;
        y = sf::Mouse::getPosition(window).x;
        x = sf::Mouse::getPosition(window).y;
        if (x > 570 && x < 666 && y>700 && y < 1100)
        {
            frontscreen = 1;
            window.clear();
        }
        else if (x > 710 && x < 806 && y>700 && y < 1100)
        {
            frontscreen = 2;
            window.clear();
        }



        
        Sleep(500);
        
    }

}
void showscore(int points, int turn)
{

    sf::Font font;
    if (!font.loadFromFile("Fresh Lychee.ttf"))
    {
        cout << "error";
    }
    sf::Text swaps;
    swaps.setFont(font);
    sf::Text turns;
    stringstream s1;
    s1 << turn;
    turns.setFont(font);
    turns.setString(s1.str());
    turns.setCharacterSize(100);
    turns.setPosition(1445, 200);
    sf::Text text2;
    text2.setFont(font);
    text2.setCharacterSize(100);
    text2.setString("Points");
    text2.setPosition(1370, 350);
    swaps.setCharacterSize(100);
    swaps.setPosition(1300, 100);
    sf::Text text;
    sf::Text target;
    target.setFont(font);
    target.setCharacterSize(100);
    target.setString("Target points");
    target.setPosition(1260, 590);
    sf::Text T;
    T.setFont(font);
    T.setCharacterSize(100);
    T.setString("80000");
    T.setPosition(1400, 700);
    text.setPosition(1445, 450);
    text.setFont(font);
    text.setCharacterSize(100);
    stringstream ss;
    ss << points;
    text.setString(ss.str());
    swaps.setString("Swaps left");
    window.draw(swaps);
    window.draw(text);
    window.draw(turns);
    window.draw(swaps);
    window.draw(text2);
    window.draw(target);
    window.draw(T);
}
void savebutton()
{
    sf::Font font;
    if (!font.loadFromFile("Fresh Lychee.ttf"))
    {
        cout << "error";
    }
    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(100);
    text.setString("Save");
    text.setPosition(1410, 885);
    sf::RectangleShape button(sf::Vector2f(95, 400));
    button.setPosition(1700, 900);
    button.rotate(90);
    button.setFillColor(sf::Color::Green);
    window.draw(button);
    window.draw(text);
   
}
void conclusion()
{
    window.clear();
    sf::Font font;
    if (!font.loadFromFile("Fresh Lychee.ttf"))
    {
        cout << "error";
    }
    window.clear();
    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(200);
    text.setPosition(700, 450);
    if(points>=80000)
        text.setString("You Won");
    else
        text.setString("You Lost");
    window.draw(text);
}