/**
 * Print out 1 2 4 5 6 7 8 9
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 25, 2023
*/
#include <iostream>

using namespace std;

void print_one_to_nine(int num = 1) {
    if (num == 1000000) {
        cout << num << endl;
        return;
    }
    cout << num << " ";
    print_one_to_nine(num + 1);
}

// executes program
int main() {
    //Print out 1 2 4 5 6 7 8 9 ... 1000000
    print_one_to_nine();

    return 0;
}