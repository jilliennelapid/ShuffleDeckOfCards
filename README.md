# ShuffleDeckOfCards
A C++ program using header files and classes to make "decks" of cards (from vectors).
The aspects of one class are used in another class in order to define individual cards (one class) that are in a deck (another class).

## Card.h
    * Header file contains the class Card and its constructors and function prototypes.
    * Meant for Card.cpp
    
## Card.cpp
    * .cpp file that implements the class Card and defines the functions, data fields, and constructors.
    * The constructors create objects that are meant to be individual cards in a deck.
    * get methods are present if the user would like to see the face or suit of the card.
    
## DeckOfCards.h
    * Header file contains the class DeckOfCards and its constructors and function prototypes.
    * Meant for DeckOfCards.cpp
    
## DeckOfCards.cpp
    * .ccp file that implements the class DeckOfCards and defines the functions, data fields, and constructors.
    * Uses vectors to represent decks of cards, with the data type being of type Card from the Card class.
    
    * First creates a deck, making all 13 cards in a row for each suit.
    * Then, shuffles the deck using srand.
    * A final method prints the cards in a formatted way to "deal" the cards
    
## testCards.cpp
    * Creates an object which is a deck of cards.
    * Prints out the original deck, shuffles it, then returns the shuffled deck.
