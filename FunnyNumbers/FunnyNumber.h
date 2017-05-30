#ifndef FUNNYNUMBER_H
#define FUNNYNUMBER_H

#include <stdio.h>
#include "Number.h"

class FunnyNumber : public Number {
    
    // Your code here
  
public:
    
// Make a number with value 0
FunnyNumber();

// Make a number with value val
FunnyNumber(string val);

// Get the number's value
virtual string getValue() const;

// Print this number to the stream
virtual void print(ostream& stream) const;

// Read this number from the stream
virtual void read(istream& stream);

virtual FunnyNumber operator+ (const FunnyNumber& other) const;
//Overloads the Operator +
//Precondition: Assumes other is filled
//Postcondition: Returns a "funny number", such that 2 + 2 = 22, 100 + 1 = 1001, etc.
    
    
//virtual bool operator== (const FunnyNumber& other) const;
    // Overloads the Operator ==
    //Precondition: Assumes other is filled
    //Postcondition: Returns true if two funny numbers both use the same
    // digits, regardless of numeric value. I.E.
    // 100 == 101 (both use 0 and 1),
    // 123321 == 231, 112 != 223 (one uses 1 and 2, the other uses 2 and 3).
    // Returns false if not.

void reverse();
//Precondition: value is filled
//PostCondition: the characters in value are reversed,
    // E.g. 1234 becomes 4321, 1200 becomes 21, 0 stays 0.
    
};

#endif /* FUNNYNUMBER_H */
