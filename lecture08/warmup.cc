/**
 * Warmup: What is the output?
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 15, 2023
*/
#include <iostream>
#include <string>

using namespace std;

void make_greeting(string & greeting) {
    greeting = "Good morning";
}

// executes program
int main() {
    string my_greeting;
    make_greeting(my_greeting);
    my_greeting += " CS 102!";
    cout << my_greeting << endl;
    return 0;
}
