#ifndef DECK_HPP
#define DECK_HPP

#include "card.hpp"

struct Node {
    Card card;
    Node* next;
};

class Deck {
private:
    Node* head;
    int numCards;

    void clear();
public:
    Deck();
    Deck(const Deck& other);
    Deck& operator=(const Deck& other);
    ~Deck();

    int getNumCards() const;
    bool isEmpty() const;

    void fillStandardDeck(); // empties and fill a new deck
    void shuffle(); // randomly reorders the deck

    Card drawTopCard(); // take top card on DRAW pile

    Card peekTopCard(); // LOOK AT top card on DISCARD pile

    void addCard (Card c); // ADD to DISCARD pile

};

#endif