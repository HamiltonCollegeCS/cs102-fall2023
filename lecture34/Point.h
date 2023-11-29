#ifndef POINT_H
#define POINT_H
#include <iostream>

template <typename T>
class Point {
public:
    Point(T x, T y) {
        _x = x;
        _y = y;
    }

    void print(std::ostream & out) const {
        out << "(" << _x << "," << _y << ")";
    }

private:
    T _x;
    T _y;
};

#endif