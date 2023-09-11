/**
 * Conditions for buying a car
 * 
 * @file car.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 8, 2023
*/
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Decide when to buy a car
 * 
 * @param color a string representing the color of the car
 * @param year the year the car was manufactured
 * @return true if you should buy the car, false otherwise
 */
bool buy(string color, unsigned int year) {
    // again, don't do this:
    // if (true)
    //     return true;
    // else
    //     return false;

    return (year < 1970 && color == "black") ||
            (year == 1972 && color == "red") ||
            (year != 1972 && (color == "blue" || color == "green"));
}

// controls execution of program
int main() {
    string color;
    cout << "Color: ";
    cin >> color;
    int year = 0;
    cout << "Year: ";
    cin >> year;
    if (buy(color, year)) {
        cout << "Buy" << endl;
    } else {
        cout << "Don't buy" << endl;
    }
    return 0;
}
