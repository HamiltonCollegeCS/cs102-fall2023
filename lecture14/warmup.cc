/**
 * What will the output be?
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 2, 2023
*/
#include <iostream>

using namespace std;

// executes program
int main() {
    // what is the output?

    int odds[] = {1, 3, 5, 7};
    int evens[5] = {2, 4, 6, 8, 10};

    // outputs 7
    int * hmmm = odds;
    cout << "hmmm[3]=" << hmmm[3] << endl;

    // outputs 6
    hmmm = evens;
    cout << "hmmm[2]=" << hmmm[2] << endl;

    // outputs 8
    hmmm = evens + 1;
    cout << "hmmm[2]=" << hmmm[2] << endl;

    // outputs 6 again.
    hmmm = hmmm - 1;
    cout << "hmmm[2]=" << hmmm[2] << endl;

    // prints 45
    int my_int = 45;
    hmmm = &my_int;
    cout << "hmmm[0]=" << hmmm[0] << endl;
    // reads deep into memory that doesn't belong to use
    //cout << "hmmm[10000]=" << hmmm[10000] << endl;
    return 0;
}