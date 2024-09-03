//
// Created by BCIT on 2024-09-03.
//

#include <iostream> //header file to use cout
#include "gcd.h"

using namespace std; //use std namespace to avoid needing to write `std::` with cout

int main() {

    cout << "please insert 2 numbers" << endl;

int a,b;

cin >> a >> b;

    cout << "greatest commom denominator is " << prototype(a, b) << endl;

    return 0;
}