/**
 * Write maximum() method.
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 10, 2023
*/
#include <iostream>
#include <cmath>
#include <climits>
#include <cassert>
#include "Point.h"

// NO! Stop! Don't do it! Ahhhhhhhh...
//#include "Point.cc"

using namespace std;

ostream & operator<<(ostream & out, const Point & point) {
    point.print(out);
    return out;
}

// executes program
int main() {
    Point point(4, 5);
    //point.print();
    cout << point << endl;
    return 0;
}