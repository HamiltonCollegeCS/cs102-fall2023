/**
 * write all_same
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 25, 2023
*/
#include <iostream>

using namespace std;

bool all_same(int array[], int size) {
    return size <= 1 || ((array[size - 1] == array[size - 2]) 
        && all_same(array, size - 1));
}

// executes program
int main() {
    int array[] = {3, 3, 3, 5};
    int size = 4;
    
    bool yep = all_same(array, size);

    cout << "The array is " << (yep ? "" : "not ") << "the same" << endl;
    return 0;
}