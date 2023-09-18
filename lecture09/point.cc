/**
 * Make a Point class
 * 
 * @file point.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 18, 2023
*/
#include <iostream>

using namespace std;

class Point {
public:
    Point(int x, int y) {
        _x = x;
        _y = y;
    }

    // getters, get the values of attributes of the class
    int get_x() {
        return _x;
    }

    int get_y() {
        return _y;
    }

    // setters, set the values of attributes of the class
    void set_x(int x) {
        _x = x;
    }

    void set_y(int y) {
        _y = y;
    }
    
private:
    int _x; // attributes
    int _y;
};

int main() {
    Point point(5, 7); // x/y-coordinates
    cout << "point=(" << point.get_x() << "," << point.get_y() << ")" << endl;
    point.set_x(100);
    point.set_y(999);
    cout << "point=(" << point.get_x() << "," << point.get_y() << ")" << endl;
    return 0;
}