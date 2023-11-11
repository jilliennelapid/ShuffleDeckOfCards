#include <iostream>
#include "DeckOfCards.h"

using namespace std;

int main() 
{
  DeckOfCards deck1;

  while(deck1.moreCards())
  {
    cout << deck1.dealCard().toString() << endl;
  }

  deck1.shuffle();

  cout << "-----------------------" << endl << "After Shuffling" << endl << "-----------------------" << endl;

  while(deck1.moreCards())
  {
    cout << deck1.dealCard().toString() << endl;
  }
}