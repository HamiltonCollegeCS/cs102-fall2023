/**
 * vtable lookups
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date December 8, 2023
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

    cout << "w/ pointer: ";
    Animal * animal = &bear;
    animal->make_sound();

    // is allowed, because a Bear is a kind of Animal.
    //cout << "no pointer: ";
    //Animal another_animal = bear;
    //another_animal.make_sound();

    // not allowed, because an Animal is not necessarily a Bear
    //Bear another_bear = another_animal;
    return 0;
}