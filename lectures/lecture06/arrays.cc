/**
 * Experiment with arrays
 * 
 * @file arrays.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 11, 2023
*/
#include <iostream>
#include <string>

using namespace std;

// executes program
int main() {
    // c-style arrays.

    /*
    string colors[] = {"red", "green", "blue"};
    //valid indices are 0, 1, 2
    for (int i = 0; i < 3; i++) {
        cout << "Color: colors[" << i << "] = " << colors[i] << endl;
    }
    */

    // can specify a size
    /*
    int increasing[600] = {1, 4, 5, 10, 13, 100};
    for (int i = 0; i < 600; i++) {
        //increasing[i] = 12345678;
        cout << increasing[i] << endl;
    }
    */

    // if you don't initialize the array, you get what the OS gives you
    /*
    int increasing[600];
    for (int i = 0; i < 600; i++) {
        cout << increasing[i] << endl;
    }
    */

    // How do declare an array:
    // type name[optional size] = optional initializer;

    // can I resize the array or not? -> cannot resize
    // choose the size you need in advance, and stick with it.

    // can only store items of the same type:
    // string people[] = {65, "Chidi", "Eleanor", "Michael"}; // nope
    string people[] = {"Tahani", "Chidi", "Eleanor", "Michael"}; // yep

    return 0;
}