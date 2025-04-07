# balatroScoreCalculator
C++ program to calculate the minimum and maximum probable score of a Balatro hand, taking into account jokers, hand rank, and special cards


### List of files that will be needed

There is a HAND, which has CARDS and SIZE. Those cards have a SUIT, a VALUE, and an ENHANCEMENT. Later on we can add a DRAW, which has a list of CARDS to choose from to create a HAND.

There is a DECK which has a SIZE

There is the PLANET, which has different scoring LEVELS for different HANDS. These are the base level that the jokers and cards start from

There are the jokers. A NUMBER of jokers, starting at zero, that have different effects. Some change the score during DURING HAND, some POST HAND. They effect CHIP and/or MULT, and can be additive or multiplicative. 

