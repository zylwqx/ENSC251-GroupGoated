#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "Hand.hpp"

class Player {
private:
    std::string name;
    Hand hand;

public:
    Player(const std::string& playerName);

    const std::string& getName() const;
    Hand& getHand();
    const Hand& getHand() const;
};

#endif