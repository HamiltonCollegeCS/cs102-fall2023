/**
 * Warmup: Don't trust anyone over 30, unless their name is
 *         Colleen
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 8, 2023
*/
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Compute whether we trust someone or not.
 * 
 * @param name name of person entering information
 * @param age age of person
 * @return true if person is trustworthy, false otherwise
 */
bool trust(string name, int age) {
    // Don't do this:
    //if (age <= 30 || name == "Colleen")
    //    return true;
    //else
    //    return false;

    // Do this instead:
    return age <= 30 || name == "Colleen";
}

int main() {
    string name;
    int age = 0;
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    if (trust(name, age))
        cout << "Trust" << endl;
    else
        cout << "Don't trust" << endl;
    return 0;
}
