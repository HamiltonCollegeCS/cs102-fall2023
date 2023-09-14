/**
 * Warmup: make an array
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 13, 2023
*/
#include <iostream>
#include <string>

using namespace std;


int main() {
    // make an array containing room for 6 ints
    // with only the first 3 ints initialized
    // those ints should be initialized to 1, 2, 3
    int my_array[6];
    my_array[0] = 1;
    my_array[1] = 2;
    my_array[2] = 3;
    for (int i = 0; i < 6; i++) {
        cout << my_array[i] << endl;
    }
    return 0;
}
