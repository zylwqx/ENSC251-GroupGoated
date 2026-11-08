#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>

class Card {
private:
    int rank; // 1 = Ace, 2-10, 11 = Jack, 12 = Queen, 13 = King
    int suit; // 0 = Clubs, 1 = Diamonds, 2 = Hearts, 3 = Spades

public:
    Card(int newRank, int newSuit);

    int getRank() const; 
    int getSuit() const;

    bool isValid() const;
    bool isEight() const; // 8 is wild card
    bool matches(const Card& other) const; // match rank or suit

    static std::string suitName(int suit); 

    bool operator==(const Card& other) const;
    bool operator!=(const Card& other) const;

    friend std::ostream& operator<<(std::ostream& out, const Card& c);
};

#endif