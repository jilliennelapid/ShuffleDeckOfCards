#include "Card.h"
#include <vector>

std::vector<std::string> Card::faceNames = 
{
  "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight",
  "Nine", "Ten", "Jack", "Queen", "King"
};

std::vector<std::string> Card::suitNames =
{
  "Hearts", "Diamonds", "Clubs", "Spades"
};

// Constructors

// User defined Constructor
Card::Card()
{
  face = 0;
  suit = 0;
}

Card::Card(int _face, int _suit)
{
  face = _face;
  suit = _suit;
}

// get Functions (to allow access to seeing private data fields)
int Card::getFace() const
{
  return face;
}

int Card::getSuit() const
{
  return suit;
}

// Displays a given card in the form "face of suit"
// ex. Ace of Spades
std::string Card::toString() const
{
  return faceNames[face] + " of " + suitNames[suit];
}