#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) {
    _x = x;
    _y = y;
}

void Point::print(ostream & out) const {
    out << "(" << _x << "," << _y << ")";
}