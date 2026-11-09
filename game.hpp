#ifndef GAME_HPP
#define GAME_HPP

#include "deck.hpp"
#include "player.hpp"

class game {
private:
    deck drawpile; // face down pile to draw from
    deck discardpile; // face up pile to play cards on
    
    player players[4]; // store up to 4 players
    int numplayers; // actual number of players (so not all 4 need to be used)
    
    int currentplayerindex; // index of turns (p1 = 1, p2 = 2, etc.)
    int activesuit; // tracks current active suit (1=hearts, etc.)

    void reshufflediscardintodraw();// discard back to draw pile

public:
    game();
    bool setupgame(const std::string names[], int count);
    player& getcurrentplayer();
    const player& getcurrentplayer() const;
    
    card gettopdiscard() const;
    
    int getactivesuit() const;
    int getnumplayers() const;
    bool playturn(int cardindex, int declaredsuit = -1);   
    bool drawcardforcurrentplayer();   
    void nextturn();
    bool isgameover() const;
    const player* getwinner() const;
};

#endif