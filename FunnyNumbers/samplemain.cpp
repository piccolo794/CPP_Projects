/*
 Project_5.cpp
 Student: Samantha Niemoeller
 Main and Number.h written by Prof. Jupe
 for CS 52 Project 5
 
 Created on 5/29/17.
 */

#include <iostream>
#include "Number.h"
#include "FunnyNumber.h"

using namespace std;

int main()
{
    cout<<"Math with regular ints:"<<endl;
    uint num1 = 2800000000;
    uint num2 = 3000000000;
    cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    cout<<"ouch...!"<<endl;
    
    
//    cout<<endl;
//    cout<<"We can handle really large values."<<endl;
//    Number n1, n2;
//    cout<<"Enter a really big positive integer: ";
//    //    n1.read(cin);
//    //    n1.print(cout); cout<<endl;
//    cin>>n1;
//    cout<<"Enter another really big integer:    ";
//    cin>>n2;
//    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
//    n1 = Number("123456789012345678901234567890");
//    n2 = Number("213456789012345678901234567890");
//    if (n1 == n2) {
//        cout<<n1<<" == "<<n2<<endl;
//    } else {
//        cout<<n1<<" != "<<n2<<endl;
//    }
//    cout<<endl;
    
    cout<<"We can do fancy math too."<<endl;
    FunnyNumber f1, f2;
    cout<<"Enter a positive integer: ";
    cin>>f1;
    cout<<"Enter another positive integer: ";
    cin>>f2;
    cout<<f1<<" + "<<f2<<" = "<<f1+f2<<endl;
    
//    f1 = FunnyNumber("123456789012345678901234567890");
//    f2 = FunnyNumber("999999999912345678901234567890000000000000000");
//    if (f1 == f2) {
//        cout<<f1<<" == "<<f2<<endl;
//    } else {
//        cout<<f1<<" != "<<f2<<endl;
//    }
    
    f2.reverse();
    cout<<"Reversed value "<<f2<<endl;
    
    return 0;
}
