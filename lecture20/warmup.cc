/**
 * counting 3's
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 18, 2023
*/
#include <iostream>

using namespace std;

// write the recursive function count_threes

int count_threes(int array[], int size) {
    if (size == 0) {
        return 0;
    }
    return count_threes(array, size - 1) + (array[size - 1] == 3);
    // conditional: boolean_expression ? if_true : if_false;
    // return size == 0 ? 0 : count_threes(array, size - 1) + (array[size - 1] == 3);
}

int linear_search(int array[], int size, int x) {
    if (size == 0) {
        return -1;
    }
    int fairy = linear_search(array, size - 1, x);
    if (fairy != -1) {
        return fairy;
    } else {
        if (array[size - 1] == x) {
            return size - 1;
        } else {
            return -1;
        }
    }
}

// executes program
int main() {
    //int some_threes[] = {1, 3, 4, 5, 9, 3, 3};
    //int size = 7;
    //cout << "there are " << count_threes(some_threes, size) << " 3's" << endl;

    int array[] = {2, 3, 3, 1, 100, 4, 5};
    int size = 7;
    cout << "the index of the first 5 is: " << linear_search(array, size, 5) << endl;

    return 0;
}