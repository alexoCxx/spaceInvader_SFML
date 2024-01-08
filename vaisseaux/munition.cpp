#include "munition.hpp"

Munition::Munition(int m_x, int m_y)
{
    m_largeur = 20;
    m_hauteur = 50;
    m_munition.setSize(sf::Vector2f(m_largeur, m_hauteur));
    m_vitesse = 3;
    m_x;
    m_y;
}

Munition::~Munition()
{

}

void Munition::update()
{
    m_munition.setPosition(sf::Vector2f(m_x, m_y));
}

bool Munition::fire(sf::Clock &clock)
{
    if (clock.getElapsedTime() == time)
    {
        déplacement();

        return true;
    }
    clock.restart();
    return false;
}

void Munition::déplacement()
{
    setY(getY() + m_vitesse);
}

//get
sf::RectangleShape Munition::getMution()
{
    return m_munition;
}

int Munition::getLargeur()
{
    return m_largeur;
}

int Munition::getHauteur()
{
    return m_hauteur;
}

int Munition::getX()
{
    return m_x;
}

int Munition::getY()
{
    return m_y;
}

//set
void Munition::setY(int Y)
{
    m_y = Y;
}

void Munition::setX(int X)
{
    m_x = X;
}

void Munition::setTime(float temps)
{
    time = sf::seconds(temps);
}