/**
 * Warmup: What is the output?
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 18, 2023
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// implement function pay
/**
 * @brief pay purchase price from my money
 * 
 * @param money how much money I have
 * @param purchase how much the purchase is
 */
void pay(double & money, double purchase) {
    money -= purchase;
}

// executes program
int main() {
    double money = 100.0;
    double purchase = 1.0;
    while (purchase != 0.0) {
        cout << "Enter a purchase (0 to end): ";
        cin >> purchase;
        pay(money, purchase);
    }
    cout << "You have " << setprecision(2) << fixed << "$" << money << " left!" << endl;
    return 0;
}
