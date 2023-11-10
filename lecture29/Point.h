#include <ostream>
// header file

class Point {
public:
    Point(int x, int y);
    void print(std::ostream & out) const;

private:
    int _x;
    int _y;
};