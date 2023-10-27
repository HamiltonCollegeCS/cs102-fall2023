/**
 * Codelet 14: paths through Cells
 * 
 * @file codelet14.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 27, 2023
*/
#include <iostream>

using namespace std;

class Cell {
public:
    Cell(int data) {
        _data = data;
        _east = nullptr;
        _south = nullptr;
    }
    int _data;
    Cell * _east;
    Cell * _south;
};

string get_path(Cell * start, Cell * finish) {
    if (start == nullptr) {
        return "";
    } else if (start == finish) {
        return to_string(finish->_data);
    }
    string fairy_path = get_path(start->_east, finish);
    if (fairy_path.empty()) {
        fairy_path = get_path(start->_south, finish);
    } 
    return to_string(start->_data) + " " + fairy_path;
}

// executes program
int main() {
    Cell cell1(1);
    Cell cell15(15);
    Cell cell4(4);
    Cell cell5(5);
    Cell cell7(7);
    Cell cell18(18);
    Cell cell9(9);
    Cell cell23(23);
    Cell cell42(42);

    // incoming to 15
    cell1._east = &cell15;

    // incoming to 5
    cell1._south = &cell5;

    // incoming to 7
    cell15._south = &cell7;

    // incoming to 18
    cell4._south = &cell18;

    // incoming to 23
    cell7._south = &cell23;
    cell9._east = &cell23;

    // incoming to 42
    cell18._south = &cell42;
    cell23._east = &cell42;

    // start and finish
    Cell * start = &cell1;
    Cell * finish = &cell42;

    cout << get_path(start, finish) << endl;

    return 0;
}