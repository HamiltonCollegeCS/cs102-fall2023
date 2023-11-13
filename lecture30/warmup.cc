/**
 * Write maximum() method.
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

class Integer {
public:
    Integer(const int value) {
        _value = value; 
    }

    int get_value() const {
        return _value;
    }

    Integer operator+(const Integer & other) const {
        return Integer(_value + other._value);
    }

    bool operator<(const Integer & other) const {
        return _value < other._value;
    }

private:
    int _value;
};

// why return type, name, arguments?
// return type ostream &: allows chaining of <<, and not allowed to make a copy (same output stream)
// operator<<: function, that overloads << (you can even call it directly with operator<<)
// ostream & out: use any output stream (e.g,, cout); not allowed to make a copy
// const Integer & the_int: (const = the_int won't change), & saves time, no copy.
ostream & operator<<(ostream & out, const Integer & the_int) {
    return out << the_int.get_value();
}

int main() {
    Integer x(200);
    Integer y(100);
    cout << "x=" << x << ",y=" << y << endl;
    cout << "x + y = " << (x + y) << endl;
    cout << "x < y = " << (x < y) << endl;
    return 0;
}
