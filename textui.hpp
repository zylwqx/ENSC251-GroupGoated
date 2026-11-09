#ifndef TEXTUI_HPP
#define TEXTUI_HPP

#include <vector>
#include <string>
#include "game.hpp"
#include "hand.hpp"

class TextUI {
public:
    void displayHeader() const;
    void displayTableState(const Game& game) const;
    void displayHand(const Hand& hand) const;

    std::vector<std::string> promptPlayerSetup() const;

    int promptPlayerAction(const Player& player) const; // number based card choice (0 to draw, 1 to play card 1, etc.)

    int promptSuitSelection() const; // pick suit when 8 is played

    void promptNextPlayerTurn(const std::string& nextPlayerName) const; // "pass to next" player screen

    void showMessage(const std::string& message) const;
    void clearScreen() const;
};

#endif