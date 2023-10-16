/**
 * recursion!
 * 
 * @file recursion.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 6, 2023
*/
#include <iostream>

using namespace std;

// n! = n * (n-1) * (n-2) * ... * 1 
int iterative_factorial(int n) {
    int total = 1;
    for (int i = 1; i <= n; i++) {
        total *= i;
    }
    return total;
}

int recursive_factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * recursive_factorial(n - 1);
}

int func() {
    return func();
}

// executes program
int main() {
    //func();
    cout << "5! = " << recursive_factorial(5) << endl;

    return 0;
}