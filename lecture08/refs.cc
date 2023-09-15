/**
 * References
 * 
 * @file refs.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 15, 2023
*/
#include <iostream>
#include <string>

using namespace std;

void get_age(int age) {
    age = 39;
    cout << "address of age(get_age): " << &age << endl;
}

// executes program
int main() {
    /*
    int age = 21;
    cout << "address of age(main): " << &age << endl;
    get_age(age);
    cout << "Strash is " << age << " years old" << endl;
    return 0;
    */

    /*
    int age = 21;
    int & strash_age = age;
    age = 39;
    cout << "Strash age: " << strash_age << endl;
    cout << &age << endl;
    cout << &strash_age << endl;
    */

    string name = "Strash";
    string & new_name = name;
    name = "StrashyMcStrashFace";
    cout << "new_name=" << new_name << endl;

    return 0;
}