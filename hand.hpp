#ifndef HAND_HPP
#define HAND_HPP

#include <vector>
#include "card.hpp"

class Hand{
private:
    std::vector<Card> cards;

public:
    Hand();
    ~Hand();

    void addCard(const Card& c); // add a card to players hand

    Card removeCard(int index); // removes card number # (cards listed out like 1. ace of spades 2. three of clubs etc)

    const Card& getCard(int index) const;

    int size() const;
    bool isEmpty() const; // true when player wins

    void sortHand(); // sorts players hands
    void printHand() const; // shows players hands
};

#endif