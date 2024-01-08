#include "vaisseaux.hpp"

Vaisseaux::Vaisseaux()
{
}

Vaisseaux::~Vaisseaux()
{

}

//get
int Vaisseaux::getX()
{
    return m_x;
}

int Vaisseaux::getY()
{
    return m_y;
}

int Vaisseaux::getHauteur()
{
    return m_hauteur;
}

int Vaisseaux::getLargeur()
{
    return m_largeur;
}

//set
void Vaisseaux::setX(int X)
{
    m_x = X;
}

void Vaisseaux::setY(int Y)
{
    m_y = Y;
}