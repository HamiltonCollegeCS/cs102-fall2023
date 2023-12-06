#include <iostream>

using namespace std;

class CrustyBakable {
public:
    CrustyBakable(const string & name) {
        _name = name;
    }
    void prepare() {
        cout << "Preparing the " << _name << "." << endl;
        make_dough();
        custom_steps();
        cout << "Baking the " << _name << "." << endl;
    }
    void make_dough() {
        cout << "Making the dough for the crust." << endl;
    }

    virtual void custom_steps() = 0;
    void eat() {
        cout << "Eating the " << _name << "!" << endl;
    }
private:
    string _name;
};

class Pizza : public CrustyBakable {
public:
    Pizza() : CrustyBakable("pizza") {}
    void custom_steps() {
        cout << "Chopping and placing toppings." << endl;
    }
};

class Pie : public CrustyBakable {
public:
    Pie() : CrustyBakable("pie") {}
    void custom_steps() {
        cout << "Making the filling." << endl;
    }
};

int main() {
    Pizza pizza;
    Pie pie;
    pizza.prepare();
    pie.prepare();
    pizza.eat();
    pie.eat();
    return 0;
}