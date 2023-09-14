/**
 * More experiments with arrays
 * 
 * @file arrays.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 13, 2023
*/
#include <iostream>
#include <string>

using namespace std;

//int array_size = 6;
// global variables should only be constant -> unchanging
// and should have name in UPPER_CASE naming convention.

//const int ARRAY_SIZE = 6;

#define ARRAY_SIZE 6

const int ARRAY[] = {1, 2, 3};
// vs.
//#define ARRAY  // don't know how to do this

// can't do this, due to local scope of other array:
// int[] my_fill() {
//     int other_array[] = {1, 2, 3};
//     return other_array;
//}

/**
 * @brief Fill in an array of a given size
 * 
 * @param other_array The array to fill in
 * @param size the size of the other array (unused)
 */
void my_fill(int other_array[], int size) {
     other_array[0] = 1;
     other_array[1] = 2;
     other_array[2] = 3;
}

// executes program
int main() {
    // write a function to fill an array
    // local to main
    int my_array[6];
    my_fill(my_array, 6);

    for (int i = 0; i < 6; i++) {
        // access to i
        // scope of i, is this for loop (local scope, local to for loop)
        int j = 0;
        cout << i << endl;
    }

    // can't do this
    //cout << i << endl;
    //cout << j << endl;

    {
        int j = 0;
    }

    //can't do this
    //cout << j << endl;
    
    return 0;
}