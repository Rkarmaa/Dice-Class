// ==============================================
// Ramatu Kamara
// March 2024
// Dice.h
// The Dice class declaration
// ==============================================
// full ADT
/* 
The Dice class imitates the characteristics of an
actual die. We are allowed to specify the number
of sides as long as it is within the range of 
2-1000, or it will roll in the range of the default
number of sides--6.
Default Constructor: Sets the number of sides of 
the die to be 6.
Constructor with sides: Allows for the number of sides
to be alter and will set to default if falls outside of
range.
roll: Randomly choses a number within the range of sides
on the die and returns it as an integer.
*/

class Dice 
{
    private:
    int sides;
    public:
        Dice        ( void );
        Dice        ( int s );
    int roll        ( void );
};