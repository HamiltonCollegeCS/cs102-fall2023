/**
 * vtable lookups
 * 
 * @file bear.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date December 8, 2023
*/
#include <iostream>
#include <ostream>
#include <cmath>
#include <climits>
#include <cassert>
#include <vector>

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

class Otter : public Animal {
public:
    Otter() : Animal("Otter") {
    }
    void make_sound() const {
        cout << "Weeeeeeeeeeeeee!" << endl;
    }
};

class No : public Animal {
public:
    No() : Animal("No") {
    }
};

void make_sound(Animal * animal) {
    animal->make_sound();
}

int main() {
    Bear bear;
    Otter otter;
    No no;

    // virtual functions allow you to do things like this, without having
    // to write lots of duplicate code.
    vector<Animal *> v_animals;
    v_animals.push_back(&bear);
    v_animals.push_back(&otter);
    v_animals.push_back(&no);

    for (Animal * animal : v_animals) {
        animal->make_sound();
    }

    //cout << "no pointer: ";
    //Animal another_animal = bear;
    //another_animal.make_sound();
    return 0;
}