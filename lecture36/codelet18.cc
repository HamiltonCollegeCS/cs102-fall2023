#include <iostream>

using namespace std;

class Vehicle {
public:
    Vehicle(const string & name, const unsigned int speed) {
        _name = name;
        _speed = speed;
    }
    string get_name() const {
        return _name;
    }
    unsigned int speed() const {
        return _speed;
    }
    virtual void go() const = 0;
private:
    string _name;
    unsigned int _speed;
};

class Car : public Vehicle {
public:
    Car(const unsigned int speed) : Vehicle("Car", speed) {
    }
    void go() const {
        cout << "vroom!" << endl;
    }
};

class Plane : public Vehicle {
public:
    Plane(const unsigned int speed) : Vehicle("Plane", speed) {
    }
    void go() const {
        cout << "whoosh!" << endl;
    }
};

int main() {
    Car car(65);
    Plane plane(550);
    cout << car.get_name() << "s travel at " << car.speed() << "mph" << endl;
    car.go();
    cout << plane.get_name() << "s travel at " << plane.speed() << "mph" << endl;
    plane.go();
    return 0;
}