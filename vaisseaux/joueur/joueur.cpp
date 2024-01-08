#include "joueur.hpp"

Player::Player(int m_x, int m_y)// : m_munition(nullptr)
{
    //m_munition = new Munition(m_x + m_largeur/2, m_y);
    up = false;
    down = false;
    right = false;
    left = false;
    vitesse = 8;
    texture.loadFromFile("ressource/Vaisseaux1.png");
    texture.setSmooth(true);
    sprite.setTexture(texture);
}

Player::~Player()
{
    //delete m_munition;
}

void Player::update()
{
    sprite.setPosition(m_x,m_y);
    sprite.setTextureRect(sf::IntRect(m_largeur,m_hauteur, m_largeur, m_hauteur));
}

void Player::input(sf::Keyboard::Key &key, bool chekPres)
{
    if (chekPres)
    {
        if (key == sf::Keyboard::Z)
            up = true;

        else if (key == sf::Keyboard::S)
            down = true;

        else if (key == sf::Keyboard::Q)
            left = true;

        else if (key == sf::Keyboard::D)
           right = true;
    }
    else if (!chekPres)
    {
        up = false;
        down = false;
        right = false;
        left = false;
    }
}

void Player::chekInput()
{
    if (up)
    {
        setY(getY() - vitesse);
    }
    if (down)
    {
        setY(getY() + vitesse);
    }
    if (left)
    {
        setX(getX() - vitesse);
    }
    if (right)
    {
        setX(getX() + vitesse);
    }
    if (up && left)
    {
        setY(getY() - vitesse / 1.5);
        setX(getX() - vitesse / 1.5);
    }
    if (up && right)
    {
        setY(getY() - vitesse / 1.5);
        setX(getX() + vitesse / 1.5);
    }
    if (down && left)
    {
        setY(getY() + vitesse / 1.5);
        setX(getX() - vitesse / 1.5);
    }
    if (down && right)
    {
        setY(getY() + vitesse / 1.5);
        setX(getX() + vitesse / 1.5);
    }
}

//get
sf::Sprite Player::getSprite()
{
    return sprite;
}