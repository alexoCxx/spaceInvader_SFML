#ifndef MUNITION_HPP
#define MUNITION_HPP
#include <SFML/Graphics.hpp>

class Munition
{
private :
    sf::RectangleShape m_munition;
    sf::Time time;
    int m_largeur;
    int m_hauteur;
    int m_vitesse;
    int m_x;
    int m_y;

public :
    //fontion
    Munition(int m_x, int m_y);
    ~Munition();
    void update();
    bool fire(sf::Clock &clock);
    void déplacement();

    //get
    sf::RectangleShape getMution();
    int getLargeur();
    int getHauteur();
    int getX();
    int getY();

    //set
    void setY(int Y);
    void setX(int X);
    void setTime(float temps);
};

#endif