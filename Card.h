/**
 * Card Header file
 * 
 * Cards have a SUIT, a VALUE, and an ENHANCEMENT.
 * 
 * Example: Eight (eight chips) of diamonds (suit = diamonds) with enhancment mult (+4 mult) and no red seal
 * 
 * With this in mind, a card needs chip value, suit, enhancement, and red seal (boolean)
*/


#include <string>

class Card{

protected:
    int chipValue;
    std::string suit;
    std::string enhancement = "None";

public:
    /**
     * Requires: nothing
     * Modifies:
     * Effects: Creates an Card class
     */
    Card();



    
};
