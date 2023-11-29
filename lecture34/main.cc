/**
 * templates
 * 
 * @file main.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 27, 2023
*/
#include <iostream>
#include <ostream>
#include <cmath>
#include <climits>
#include <cassert>
#include "Point.h"

using namespace std;

//typedef double T;



template <typename T>
ostream & operator<<(ostream & out, const Point<T> & point) {
    point.print(out);
    return out;
}

int main() {
    Point<int> p(1, 2);
    Point<int> q(3, 4);
    cout << "p=" << p << ", q=" << q << endl;

    Point<string> r("Darren", "Strash");
    cout << "r=" << r << endl;
    return 0;
}