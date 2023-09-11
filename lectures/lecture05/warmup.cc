#include <iostream>
#include <string>

using namespace std;

bool trust(string name, int age) {
    //if (age <= 30 || name == "Colleen")
    //    return true;
    //else
    //    return false;
    return age <= 30 || name == "Colleen";
}

int main() {
    string name;
    int age = 0;
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    if (trust(name, age))
        cout << "Trust" << endl;
    else
        cout << "Don't trust" << endl;
    return 0;
}
