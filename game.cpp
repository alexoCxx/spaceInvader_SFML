#include "game.hpp"
#include <iostream>

Game::Game() : m_player(nullptr)
{
    largeur = 1200;
    hauteur = 1000;
    m_player = new Player(largeur / 2, hauteur / 1.2);
}

Game::~Game()
{
}

void Game::game()
{
    m_player->setX(largeur / 2);
    m_player->setY(hauteur / 1.2);

    window.create(sf::VideoMode(largeur,hauteur), "space invader");

    while (window.isOpen())
    {
        this->gameLoop();

        this->gameShow();
    }
}

void Game::gameLoop()
{
    sf::Clock clock;

    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();
        }
        else if (event.type == sf::Event::KeyPressed)
        {
            m_player->input(event.key.code, true);
            m_player->input(event.key.code, true);
        }
        else if (event.type == sf::Event::KeyReleased)
        {
            m_player->input(event.key.code, false);
            m_player->input(event.key.code, false);
        }
    }
    m_player->chekInput();

    m_player->update();

    std::cout << "X/Y : " << m_player->getX() << m_player->getY() << std::endl;
}

void Game::gameShow()
{
    window.clear(sf::Color(255,255,255));

    window.draw(m_player->getSprite());

    window.display();
}