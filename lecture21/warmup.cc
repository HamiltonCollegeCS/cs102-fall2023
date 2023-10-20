/**
 * count how many odds
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 20, 2023
*/
#include <iostream>

using namespace std;

int count_odds(int array[], int size) {
    if (size == 0) {
        return 0;
    }
    int fairy = count_odds(array, size - 1);
    if (array[size - 1] % 2 == 1) {
        return fairy + 1;
    } else {
        return fairy;
    }
}

// executes program
int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    
    int odds = count_odds(array, size);

    cout << "There are " << odds << " odd numbers" << endl;
    cout << endl;
    return 0;
}