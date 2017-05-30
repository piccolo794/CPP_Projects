//
//  Number.cpp
//  Implementation File
//  Project_5
//
//  Created by Sam Niemoeller on 5/29/17.
//  Copyright © 2017 SamNiemoeller. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "Number.h"


//******CONSTRUCTORS
Number::Number () : value("0")
{    // Intentionally left blank
}

Number::Number(string val) : value(val)
{    // Intentionally left blank
}

//******ACCESSORS & MUTATORS
string Number::getValue() const
{
    return (value);
}

void Number::print(ostream& stream) const
{
    stream << value;
}

void Number::read(istream& stream)
{
    stream >> value;
}


//******OVERLOADED OPERATORS

ostream& operator <<(ostream& outs, const Number& n)
{
    n.print(outs);
    return (outs);
}

istream& operator >>(istream& ins, Number& n)
{
    n.read(ins);
    return(ins);
}

// Operator +
Number Number::operator+ (const Number& other) const
{
    string tempFinal, final;
    
    int num1_size = (static_cast<int>(value.length()) - 1);
    int num2_size = (static_cast<int>((other.getValue()).length()) - 1);
    
    int digit1, digit2, carry = 0;
    
    //adds the two string numbers. This algorithm is broken into three parts
    //to accommodate strings of different lengths.
    for (; num1_size>=0 && num2_size >=0; num1_size--, num2_size--)
    {
        digit1 = static_cast<int> (value[num1_size] - '0');
        digit2 = digittoint((other.getValue())[num2_size]);
        
        digit1+=(digit2+carry);
        carry = digit1/10;
        if (carry !=0)
            digit1-=10;
        tempFinal+=char(digit1+'0');
    }
    
    while (num1_size>=0)
    {
        digit1 = static_cast<int>(value[num1_size] - '0');
        digit1+=carry;
        carry = digit1/10;
        if (carry !=0)
            digit1-=10;
        tempFinal+=char(digit1+'0');
        num1_size--;
    } //while

    while (num2_size>=0)
    {
        digit1 = static_cast<int>((other.getValue())[num2_size] - '0');
        digit1+=carry;
        carry = digit1/10;
        if (carry !=0)
            digit1-=10;
        tempFinal+=static_cast<char>(digit1+'0');
        num1_size--;
    } //while
    
    //reverse digits in string to be in correct order
    for (int i = static_cast<int>(tempFinal.length())-1; i>=0; i--)
    {
        final+=tempFinal[i];
    }
    
    return (final);
}

bool Number::operator== (const Number& other) const
{
    return (value == other.getValue());
}
