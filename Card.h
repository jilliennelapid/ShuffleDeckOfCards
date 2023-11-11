#ifndef CARD_H
#define CARD_H

#include <vector>
#include <string>

class Card
{
  private:
    int face, suit;
    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;

  public:
    Card();

    Card(int _face, int _suit);


    int getFace() const;

    int getSuit() const;


    std::string toString() const;
};
#endif