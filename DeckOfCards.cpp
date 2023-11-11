#include "DeckOfCards.h"
#include <iostream>

DeckOfCards::DeckOfCards()
{
  currentCard = 0;
  while(dealtDeck.empty() == 0)
  {
    dealtDeck.pop_back();
  }
  
  // Heart Cards
  for(int i = 0; i < 13; i++)
  {
    deck.push_back(Card(i, 0));
  }

  // Diamond Cards
  for(int i = 0; i < 13; i++)
  {
    deck.push_back(Card(i, 1));
  }

  // Clubs Cards
  for(int i = 0; i < 13; i++)
  {
    deck.push_back(Card(i, 2));
  }

  // Spades Cards
  for(int i = 0; i < 13; i++)
  {
    deck.push_back(Card(i, 3));
  }
}

void DeckOfCards::shuffle()
{
  currentCard = 0;
  while(dealtDeck.empty() == 0)
  {
    dealtDeck.pop_back();
  }
  
  srand(time(0));
  
  for(int i = 0; i < 52; i++)
  {
    int swapIndex = rand() % 52;

    std::swap(deck[i], deck[swapIndex]);
  }
}

Card DeckOfCards::dealCard()
{
  dealtDeck.push_back(deck[currentCard]);
  currentCard++;
  return deck[currentCard - 1];

  
  /*
  if(moreCards() != 0)
  {
    for(int i = 0; i < 52; i++)
    {
      std::cout << deck[i].toString() << std::endl;
    }
    
  }
  */
}

bool DeckOfCards::moreCards() const
{
  if(dealtDeck.size() != 52)
  {
    return true;
  }
  else
  {
    return false;
  }
}