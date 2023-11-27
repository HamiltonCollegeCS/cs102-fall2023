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
#include <map>

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
    //list<int> mine = {5, 3, 2, 1}; // This also works!

    // Testing push_back, pop_back, and showing capacity
    /*
    cout << "before: " << mine << endl;
    cout << "capacity=" << mine.capacity() << endl;
    mine.push_back(0);
    cout << "after : " << mine << endl;
    cout << "capacity=" << mine.capacity() << endl;
    mine.pop_back();
    */

    // working with iterators
    /*
    vector<int>::iterator it = mine.begin();
    cout << *it << endl;

    // last element
    cout << *(mine.end() - 1) << endl;
    */

    // Using iterators in for loops
    /*
    for (vector<int>::iterator it = mine.begin(); it != mine.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    */

    // ranged for loops
    /*
    for (int x : mine) {
        cout << x << " ";
    }
    cout << endl;
    */

    // maps / use binary search trees, can use any type as key as
    // long as there is a comparison operator, and any type for value.
    map<string,vector<int>> dict;
    dict["hi"] = {10};
    dict["hello"] = {40};

    // search for keys in the map
    if (dict.find("hi") == dict.end()) {
        cout << "not in the dictionary" << endl;
    } else {
        cout << "in the dictionary" << endl;
    }

    // can iterate through dictionaries too.
    for (map<string,vector<int>>::iterator it = dict.begin(); it != dict.end(); it++) {
        cout << "key=" << it->first << " value=" << it->second << endl;
    }
    cout << endl;

    return 0;
}
