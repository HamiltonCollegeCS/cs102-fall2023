/**
 * Codelet 16: TheGarlicClove
 * 
 * @file codelet16.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 3, 2023
*/
#include <iostream>

using namespace std;

class Article {
public:
    Article() {
    }

    Article(string org, string title, string snippet) {
        _org = org;
        _title = title;
        _snippet = snippet;
    }

    void print() {
        cout << _org << ": " << _title << endl;
        cout << _snippet << "..." << endl;
    }

private:
    string _org;
    string _title;
    string _snippet;
};

// executes program
int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "How many news articles would you like? ";
    int items = 0;
    cin >> items;
    // throw away '\n'
    cin.get();
    cout << endl;

    Article * articles = new Article[items];
    for (int i = 0; i < items; i++) {
        string org, title, snippet;
        cout << "Enter a news organization: ";
        getline(cin, org);
        cout << "Enter an article title: ";
        getline(cin, title);
        cout << "Enter an article snippet: ";
        getline(cin, snippet);
        articles[i] = Article(org, title, snippet);
        cout << endl;
    }

    cout << "Welcome to TheGarlicClove's news feed!" << endl;
    cout << "And now, for the news of the day..." << endl << endl;

    for (int i = 0; i < items; i++) {
        cout << i+1 << ".) ";
        articles[i].print();
        cout << endl;
    }

    int option = 0;
    cout << "Enter an article number (q to quit): ";
    cin >> option;
    // Fun fact: if cin doesn't read an int, it sets it to 0.
    while (option != 0) {
        cout << "Made you look! -- " << name << endl;
        cout << "Enter an article number (q to quit): ";
        cin >> option;
    }

    cout << endl << "Thanks for choosing TheGarlicClove...signing off!" << endl;

    delete[] articles;

    return 0;
}