#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Card.h"

class DeckOfCards
{
  private:
    std::vector<Card> deck;
    std::vector<Card> dealtDeck;

    int currentCard;

  public:
    DeckOfCards();

    void shuffle();

    Card dealCard();

    bool moreCards() const;
};
#endif