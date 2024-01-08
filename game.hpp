#ifndef GAME_HPP
#define GAME_HPP
#include <SFML/Graphics.hpp>
#include "vaisseaux/joueur/joueur.hpp"

class Game
{
private :
    sf::RenderWindow window;
    sf::Event event;

    int largeur;
    int hauteur;

    Player *m_player;
    
public :
    Game();
    ~Game();
    void game();
    void gameLoop();
    void gameShow();

};

#endif