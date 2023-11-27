/**
 * Using vector
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 27, 2023
*/
#include <iostream>
#include <cmath>
#include <climits>
#include <cassert>
#include <vector>

using namespace std;

ostream & operator<<(ostream & out, const vector<int> & vec) {
    if (vec.size() > 0) {
        out << vec[0];
    }
    for (size_t i = 1; i < vec.size(); i++) {
        out << " " << vec[i];
    }
    return out;
}

// what is the output?
int main() {
    vector<int> mine = {5, 3, 2, 1};
    cout << "before insert: " << mine << endl;
    mine.insert(mine.begin() + 2, 4);
    cout << "after  insert: " << mine << endl;
    return 0;
}
