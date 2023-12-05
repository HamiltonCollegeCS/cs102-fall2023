/**
 * More inheritance
 * 
 * @file airplane.cc
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

class Airplane {
public:
    Airplane() {
        _flaps_ok = false;
    }
    void systems_check() {
        flap_check();
        custom_checks();
    }
    virtual void custom_checks() = 0;
    void flap_check() {
        cout << "Checking the flaps" << endl;
        _flaps_ok = true;
    }
private:
    bool _flaps_ok;
};

class Airbus : public Airplane {
public:
    Airbus () {
    }
    void custom_checks() {
        systems_check();
    }
};

class Boeing : public Airplane {
public:
    Boeing() {
        _autopilot_ok = false;
    }
    void check_autopilot() {
        cout << "Checking autopilot" << endl;
        _autopilot_ok = true;
    }
    void custom_checks() {
        check_autopilot();
    }
private:
    bool _autopilot_ok;
};

int main() {
    //Airbus airbus;
    //airbus.systems_check();
    Boeing boeing;
    boeing.systems_check();

    return 0;
}