/**
 * inheritance
 * 
 * @file main.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date December 1, 2023
*/
#include <iostream>
#include <ostream>
#include <cmath>
#include <climits>
#include <cassert>

using namespace std;

// Note: the below does not conform completely to style guidelines, 
// primarily so that it fits on the screen
class Animal {
public:
    Animal(unsigned int age) {
        _age = age;
    }
    unsigned int get_age() const {
        return _age;
    }
    virtual void make_sound() const = 0;
private:
    unsigned int _age;
};

class Cat : public Animal {
public:
    Cat(unsigned int age) : Animal(age) {
    }
    void make_sound() const {
        cout << "meow!!!" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(unsigned int age) : Animal(age) {
    }
    void make_sound() const {
        cout << "woof!!!" << endl;
    }
};

int main() {
    Cat cat(3 /* age */);
    Dog dog(7);
    cout << "The cat has age " << cat.get_age() << endl;
    cat.make_sound();
    cout << "The dog has age " << dog.get_age() << endl;
    dog.make_sound();
    return 0;
}