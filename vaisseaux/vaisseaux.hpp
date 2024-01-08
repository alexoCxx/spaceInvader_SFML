#ifndef VAISSEAUX_HPP
#define VAISSEAUX_HPP
#include <SFML/Graphics.hpp>
#include "munition.hpp"

class Vaisseaux
{
protected :
    int m_x;
    int m_y;
    int m_largeur;
    int m_hauteur;

public :
    //fonction
    Vaisseaux();
    ~Vaisseaux();

    //get
    int getX();
    int getY();
    int getHauteur();
    int getLargeur();

    //set
    void setX(int X);
    void setY(int Y);

};
#endif