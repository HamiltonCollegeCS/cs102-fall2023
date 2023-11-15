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

int main() {
    int * mine = new int[3];
    mine[0] = 2;
    mine[1] = 4;
    mine[2] = 6; // invalid write (of 4 bytes)
    for (int i = 0; i <= 2; i++) {
        cout << mine[i] << " "; // invalid read (of 4 bytes)
    }
    cout << endl;
    delete[] mine; // mismatched new / delete.
    return 0;
}
