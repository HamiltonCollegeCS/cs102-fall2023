/**
 * Dynamically allocate an array with 3 ints
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 29, 2023
*/
#include <iostream>

using namespace std;

// executes program
int main() {
    // dynamically allocate an array with space for 3 ints
    // fill the array with ints 20, 30, 100
    //int * array = nullptr; // if you don't have an address yet

    // ask the operating system for sufficient memory for 3 ints
    int * array = new int[3];

    // it is a memory address
    //cout << array << endl;

    // not allowed
    //array = {20, 30, 100}; 

    // can fill in memory
    array[0] = 20;
    array[1] = 30;
    array[2] = 100;
    for (int i = 0; i < 3; i++) {
        cout << " " << array[i];
    }
    cout << endl;

    // release the memory back to the operating system
    delete[] array;

    // now the memory no longer belongs to you
    // accessing it in any way is a memory error.
    
    return 0;
}