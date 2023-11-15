#ifndef POINT_H
#define POINT_H
#include <ostream>

class Point {
public:
    Point(int x, int y);
    Point();

    void print(std::ostream & out) const;

private:
    int _x;
    int _y;
};
#endif // POINT_H