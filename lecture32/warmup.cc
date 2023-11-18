/**
 * What is the memory error?
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 13, 2023
*/
#include <iostream>
#include <cmath>
#include <climits>
#include <cassert>

using namespace std;

class Point {
public:
    Point() {
        _x = 0;
        _y = 0;
        //cout << "calling constructor with no arguments" << endl;
    }

    Point(int x, int y) {
        _x = x;
        _y = y;
        //cout << "Calling constructor with x=" << x << ", y=" << y << endl;
    }

    Point(const Point & other) {
        _x = other._x;
        _y = other._y;
        //cout << "Calling copy constructor" << endl;
    }

    const Point & operator=(const Point & other) {
        _x = other._x;
        _y = other._y;
        //cout << "calling operator=" << endl;
        return *this;
    }

    int get_x() const {
        return _x;
    }

    int get_y() const {
        return _y;
    }

private:
    int _x;
    int _y;
};

ostream & operator<<(ostream & out, const Point & point) {
    //cout << "Calling operator <<" << endl;
    return out << "(" << point.get_x() << "," << point.get_y() << ")";
}

int main() {
    Point p(4, 3); // constructor w/ 2 int arguments.
    Point q = p; //constructor with a Point? -> copy constructor. maybe operator= ?
    Point r; // constructor with no argument
    r = p = q; // operator=
    cout << "p=" << p << " q=" << q << " r=" << r << endl; // operator<<

    Point * um = nullptr; // no method called.
    Point points[2]; // constructor w / no arguments.
    return 0;
}
