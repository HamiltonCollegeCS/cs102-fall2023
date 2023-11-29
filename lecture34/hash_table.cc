/**
 * Play around with vector and iterators
 * 
 * @file vector_and_iterators.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 27, 2023
*/
#include <iostream>
#include <cmath>
#include <climits>
#include <cassert>
#include <vector>
#include <list>
#include <unordered_map>

using namespace std;

// what is the output?
int main() {
    unordered_map<string,int> hash_table;
    hash_table["Ben"] = 9;
    if (hash_table.find("Ben") != hash_table.end()) {
        cout << "Found Ben" << endl;
    } else {
        cout << "Didn't find" << endl;
    }

    return 0;
}
