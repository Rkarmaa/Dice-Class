// ==============================================
// Ramatu Kamara
// March 2024
// Dice.cpp
// The Dice class defintions
// ==============================================

#include <iostream>
#include "Dice.h"
using namespace std;

// ==============================================
// Dice
// initializes default number of sizes to 6
// Parameters:
//  None
// Return Values:
//  None
// ==============================================
Dice::Dice ( void )
{
    srand(time(NULL));
    sides = 6;
}

// ==============================================
//  Dice
// Parameters:
//  int s - value for number of sides on dice
// Return Values:
//  None
// ==============================================
Dice::Dice( int s )
{
    srand(time(NULL));
    if ( s < 2 || s > 1000)
    {
        cout << "Number of sides must be within 2 - 1000" << endl;
        cout << "Setting to default number of sides: 6" 
        << endl;
        sides = 6;
    }
    else 
        sides = s;
}

// ==============================================
// roll
// Parameters:
//  None
// Return Values:
//  randomized integer value in the range of the
//  die
// ==============================================
int Dice::roll ( void )
{
    int outcome = rand() % sides + 1;
    return outcome;
} 

