#ifndef JOUEUR_HPP
#define JOUEUR_HPP
#include "../vaisseaux.hpp"
#include <iostream>

class Player: public Vaisseaux
{
private :
    //Munition *m_munition;
    sf::Texture texture;
    sf::Sprite sprite;
    int vitesse;
    bool up;
    bool down;
    bool right;
    bool left;
    
public :
    //fontion
    Player(int m_x, int m_y);
    ~Player();
    void update();
    void input(sf::Keyboard::Key &key, bool chekPres);
    void chekInput();

    //get
    sf::Sprite getSprite();

    //set
};

#endif