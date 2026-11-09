#ifndef HAND_HPP
#define HAND_HPP

#include "card.hpp"
// node struct
struct CardNode {
    Card card;
    CardNode* next;

    CardNode(Card c) : card(c), next(nullptr) {}
};

class Hand {
private:
    CardNode* head;
    int numCards;

    void clear();

public:
    Hand();
    Hand(const Hand& other);
    Hand& operator=(const Hand& other);
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