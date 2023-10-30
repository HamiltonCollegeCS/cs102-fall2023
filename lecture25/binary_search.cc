/**
 * Implement binary search
 * 
 * @file binary_search.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 27, 2023
*/
#include <iostream>

using namespace std;

int binary_search(int array[], int x, int start, int end) {
    cout << "start=" << start << ", end=" << end << endl;
    cin.get();
    if (end < start) {
        return -1;
    }
    int mid = (start + end) / 2; // not end / 2, not (end - start) / 2.
    if (array[mid] == x) {
        return mid;
    } else if (array[mid] < x) {
        return binary_search(array, x, mid + 1, end);
    } else {
        return binary_search(array, x, start, mid - 1);
    }
}

// executes program
int main() {
    int array[] = {40, 50, 100, 118, 340, 1023, 2000};
    int size = 7;
    //cout << binary_search(array, 1023, 0, 6) << endl;
    cout << binary_search(array, 2000, 0, 6) << endl;

    return 0;
}