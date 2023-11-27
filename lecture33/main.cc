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

using namespace std;

class Point {
public:
    Point(int x, int y) {
        _x = x;
        _y = y;
    }

    void print(ostream & out) const {
        out << "(" << _x << "," << _y << ")";
    }

private:
    int _x;
    int _y;
};

ostream & operator<<(ostream & out, const Point & point) {
    point.print(out);
    return out;
}

int main() {
    Point p(1, 2);
    Point q(3, 4);
    cout << "p=" << p << ", q=" << q << endl;
    return 0;
}