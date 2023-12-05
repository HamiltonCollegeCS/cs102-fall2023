/**
 * vtable lookups
 * 
 * @file bear.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date December 4, 2023
*/
#include <iostream>
#include <ostream>
#include <cmath>
#include <climits>
#include <cassert>

using namespace std;

class Animal {
public:
    Animal(const string & name) {
        _name = name;
    }
    string get_name() const {
        return _name;
    }
    virtual void make_sound() const {
        cout << "generic animal sound!" << endl;
    }
private:
    string _name;
};

class Bear : public Animal {
public:
    Bear() : Animal("Bear") {
    }
    void make_sound() const {
        cout << "Roar!" << endl;
    }
};

int main() {
    Bear bear;
    bear.make_sound();

    Animal * animal = &bear;
    animal->make_sound();
    return 0;
}