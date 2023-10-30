/**
 * Codelet 15: X marks the spot
 * 
 * @file codelet15.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 27, 2023
*/
#include <iostream>

using namespace std;

string mark_x(string input, int size) {
    if (size == 0) {
        return "";
    } else if (input[size - 1] == ' ') {
        return mark_x(input, size - 1) + "X";
    } else {
        return mark_x(input, size - 1) + input[size - 1];
    }
}

// executes program
int main() {
    cout << mark_x("hello there", 11) << endl;
    cout << mark_x("well well well", 14) << endl;

    return 0;
}