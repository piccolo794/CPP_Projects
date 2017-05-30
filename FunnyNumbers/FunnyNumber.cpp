
#include <stdio.h>
#include <string>
#include "Number.h"
#include "FunnyNumber.h"

using namespace std;

string reverse();
//Precondition: value is filled
//PostCondition: the characters in value are reversed


//******CONSTRUCTORS
FunnyNumber::FunnyNumber () : Number()
{    // Intentionally left blank
}

FunnyNumber::FunnyNumber(string val) : Number(val)
{    // Intentionally left blank
}

//******ACCESSORS & MUTATORS
string FunnyNumber::getValue() const
{
    return (value);
}

void FunnyNumber::print(ostream& stream) const
{
    stream << value;
}

void FunnyNumber::read(istream& stream)
{
    stream >> value;
}



//******OVERLOADED OPERATORS

FunnyNumber FunnyNumber::operator+ (const FunnyNumber& other) const
{
    //Postcondition: Returns a "funny number", such that 2 + 2 = 22, 100 + 1 = 1001, etc.

    string final = value + other.getValue();
    
    return (final);
}


//virtual bool operator== (const FunnyNumber& other) const;
// Overloads the Operator ==
//Precondition: Assumes other is filled
//Postcondition: Returns true if two funny numbers both use the same
// digits, regardless of numeric value. I.E.
// 100 == 101 (both use 0 and 1),
// 123321 == 231, 112 != 223 (one uses 1 and 2, the other uses 2 and 3).
// Returns false if not.

void FunnyNumber::reverse()
{
    string temp;
    
    for (int i = static_cast<int>(value.length())-1; i>=0; i--)
    {
        temp+=value[i];
    }
    
    value = temp;

}
//PostCondition: the characters in value are reversed,
// E.g. 1234 becomes 4321, 1200 becomes 21, 0 stays 0.


