/**
 * Should I walk the dog?
 * 
 * @file walk.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 11, 2023
*/
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Determine if a dog should walk.
 * 
 * @param wee true if and only if the dog needs to wee
 * @param bored true if and only if the dog is bored
 * @param thorn true if and only if the dog has a thorn in its paw
 * @return true if the dog should walk, false otherwise 
 */
bool should_walk(bool wee, bool bored, bool thorn) {
    return (!wee && bored && !thorn) || wee;
}

// executes program
int main() {
    // Should I walk the dog?
    // w: needs to wee
    // b: bored
    // t: thorn in paw

    bool wee = false;
    bool bored = false;
    bool thorn = false;
    cin >> wee >> bored >> thorn;
    if (should_walk(wee, bored, thorn)) {
        cout << "Take the dog for a walk!" << endl;
    } else {
        cout << "Don't take the dog for a walk." << endl;
    }

    return 0;
}