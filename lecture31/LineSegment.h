#ifndef LINESEGMENT_H
#define LINESEGMENT_H
#include <ostream>
#include "Point.h"

class LineSegment {
public:
    LineSegment(Point p1, Point p2);
    LineSegment() = delete;

    Point get_p1() const;
    Point get_p2() const;

private:
    Point _p1;
    Point _p2;
};
#endif // LINESEGMENT_H