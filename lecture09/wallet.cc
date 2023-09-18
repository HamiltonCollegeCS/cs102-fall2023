/**
 * Make a wallet class
 * 
 * @file wallet.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 18, 2023
*/
#include <iostream>

using namespace std;

class Wallet {
public:
    /**
     * @brief Construct a new Wallet object
     * 
     * @param money 
     */
    Wallet(double money) {
        _money = money;
    }

    void pay(double purchase) {
        _money -= purchase;
    }

    double get_remaining() {
        return _money;
    }

private:
    double _money; // attribute
};

// executes program
int main() {
    Wallet my_wallet(100.0);
    my_wallet.pay(5);
    cout << "My wallet has: $" << my_wallet.get_remaining() << " remaining" << endl;
    return 0;
}