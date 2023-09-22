/**
 * Making edits in a document
 * 
 * @file point.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 20, 2023
*/
#include <iostream>

using namespace std;

const int MAX_EDITS = 1;

void print_edits(int edits[], int size) {
    cout << "Edits: ";
    if (size > 0) {
        cout << edits[0];
    }
    for (int i = 1; i < size; i++) {
        cout << " " << edits[i];
    }
    cout << endl;
}

int main() {

    int edits[MAX_EDITS] = {};
    int size = 0;

    // fill and empty an array of "edits", which are integers 1 to 5
    // You should make them in the order 1 2 3 4 5
    int edit = 1;
    while (edit != 0) {
        cout << "Give me an edit (0 to end): ";
        cin >> edit;
        if (edit != 0) {
            edits[size++] = edit;
            print_edits(edits, size);
        }
    }
    cout << "size=" << size << endl;
    // and remove them in the order 5 4 3 2 1
    while (size != 0) {
        --size;
        print_edits(edits, size);
    }
    cout << "size=" << size << endl;
    
    return 0;
}