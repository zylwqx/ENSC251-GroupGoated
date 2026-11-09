#ifndef GAME_HPP
#define GAME_HPP

#include "deck.hpp"
#include "player.hpp"

class Game {
private:
    Deck drawpile; // face down pile to draw from
    Deck discardpile; // face up pile to play cards on
    
    Player players[4]; // store up to 4 players
    int numplayers; // actual number of players (so not all 4 need to be used)
    
    int currentplayerindex; // index of turns (p1 = 1, p2 = 2, etc.)
    int activesuit; // tracks current active suit (1=hearts, etc.)

    void reshufflediscardintodraw();// discard back to draw pile

public:
    Game();
    bool setupgame(const std::string names[], int count);
    Player& getcurrentplayer();
    const Player& getcurrentplayer() const;
    
    Card gettopdiscard() const;
    
    int getactivesuit() const;
    int getnumplayers() const;
    bool playturn(int cardindex, int declaredsuit = -1);   
    bool drawcardforcurrentplayer();   
    void nextturn();
    bool isgameover() const;
    const Player* getwinner() const;
};

#endif