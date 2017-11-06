/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aparsons
 *
 * Created on November 2, 2017, 1:22 PM
 */

#include <iostream>
using namespace std;

int square_area(float A)
{
    return A*A;
}

int rectangle_area(float A,float B)
{
    return A*B;
}

void exceptions(float A, float B)
{
    if(A <= 0 || B <= 0)
    {
        throw string("ab");
    }
}

int main(void) {
float a, b, r;
cout<<"Enter the size of both sides."<<endl;
cin >> a;
cin >> b;

try
{
exceptions(a,b);
float rsquare = square_area(a);
float rrectangle = rectangle_area(a,b);
cout << rsquare << endl << rrectangle << endl;
}
catch(string e)
{
    cout<<"Your input is not valid. The area can't be negative."<<endl;
}
return 0; }

