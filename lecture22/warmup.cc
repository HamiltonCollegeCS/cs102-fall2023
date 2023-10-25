/**
 * Write is_increasing
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 23, 2023
*/
#include <iostream>

using namespace std;

bool is_increasing(int array[], int size) {
    if (size <= 1) {
        return true;
    }

    return array[size - 1] > array[size - 2] && is_increasing(array, size - 1);
}

// executes program
int main() {
    int array[] = {1, 2, 3, 4, 5, 60, 60, 80, 100};
    int size = 9;
    
    bool yep = is_increasing(array, size);

    cout << "The array is " << (yep ? "" : "not ") << "increasing" << endl;
    cout << endl;
    return 0;
}