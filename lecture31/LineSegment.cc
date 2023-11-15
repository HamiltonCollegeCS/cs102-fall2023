#include "LineSegment.h"
#include "Point.h"
#include <iostream>

using namespace std;

LineSegment::LineSegment(Point p1, Point p2) {
    _p1 = p1;
    _p2 = p2;
}

Point LineSegment::get_p1() const {
    return _p1;
}

Point LineSegment::get_p2() const {
    return _p2;
}