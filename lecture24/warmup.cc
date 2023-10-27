/**
 * Fill with 1's
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 25, 2023
*/
#include <iostream>

using namespace std;

void fill_with_ones(int array[], int size) {
    if (size > 0) {
        fill_with_ones(array, size - 1);
        array[size - 1] = 1;
    }
}

// executes program
int main() {
    int array[] = {80, 1, 50, 60, 23};
    int size = 5;
    
    fill_with_ones(array, size);

    cout << "After :";
    for (int i = 0; i < size; i++) {
        cout << " " << array[i];
    }
    cout << endl;

    return 0;
}