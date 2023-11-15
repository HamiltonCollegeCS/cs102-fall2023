#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) {
    _x = x;
    _y = y;
}

Point::Point() {
    _x = 0;
    _y = 0;
}

void Point::print(ostream & out) const {
    out << "(" << _x << "," << _y << ")";
}