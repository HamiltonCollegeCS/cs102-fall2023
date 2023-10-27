#include <iostream>
#include <iomanip>

using namespace std;

class ShavingsCard {
public:
    ShavingsCard() {
        _total = 0;
    }

    void pay(double amount) {
        _total += (amount == int(amount)) ? 0 : int(amount + 1) - amount;
    }

    double total_shavings() {
        return _total;
    }
private:
    double _total;
};

// executes program
int main() {
    ShavingsCard shavings_card;
    double price = 0.0;
    cout << "Enter the purchase price (0.0 to end): ";
    cin >> price;
    while (price > 0.0) {
        shavings_card.pay(price);
        // I added setprecision and fixed so that it's prints 2 digits after .
        cout << "You've saved a total of: $" << setprecision(2) << fixed
             << shavings_card.total_shavings() << endl;
        cout << "Enter the purchase price (0.0 to end): ";
        cin >> price;
    }
    return 0;
}