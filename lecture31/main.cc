/**
 * A line segment class
 * 
 * @file main.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 13, 2023
*/
#include <iostream>
#include <cmath>
#include <climits>
#include <cassert>
#include "LineSegment.h"
#include "Point.h"

using namespace std;

ostream & operator<<(ostream & out, const Point & point) {
    point.print(out);
    return out;
}

int main() {
    Point p(1, 2);
    Point q(3, 4);
    LineSegment segment(p, q);
    cout << "p1=" << segment.get_p1() << ",p2=" << segment.get_p2() << endl;
    return 0;
}