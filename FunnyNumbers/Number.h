#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <string>

using namespace std;

class Number {
public:
    // Make a number with value 0
    Number();
    // Make a number with value val
    Number(string val);

    // Get the number's value
    virtual string getValue() const;

    // Print this number to the stream
    virtual void print(ostream& stream) const;

    // Read this number from the stream
    virtual void read(istream& stream);

    // Overload the insertion operator
    friend ostream& operator <<(ostream& outs, const Number& n);

    // Overload the extraction operator
    friend istream& operator >>(istream& ins, Number& n);

    // Operator +
    virtual Number operator+ (const Number& other) const;

    // Operator ==
    virtual bool operator== (const Number& other) const;


protected:
    string value;
};

#endif // NUMBER_H
