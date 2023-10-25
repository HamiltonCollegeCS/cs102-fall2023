/**
 *   Solving Tower of Hanoi
 *   @file main.cpp
 *   @author Darren Strash
 *   @collaborators Built with help of C111 class
 *   @date October 2, 2023
 *
 */
#include "Stack.h"
#include <iostream>

using namespace std;

Stack<int> peg1, peg2, peg3;

void move_all(Stack <int> &temp_stack, Stack<int> &peg) {
    while (temp_stack.size() > 0) {
        peg.push(temp_stack.pop());
    }
}

void pop_push_print(Stack<int> &peg, Stack<int> &temp_stack) {
    if (peg.size() > 0) {
        int disk = peg.pop();
        temp_stack.push(disk);
        cout << disk;
    } else {
        cout << " ";
    }
}

void print_stacks(Stack<int> &peg1, Stack<int> &peg2, Stack<int> &peg3) {
    cout << "Tower of Hanoi:" << endl << "--" << endl << endl;
    Stack<int> temp1, temp2, temp3;
    while (peg1.size() > 0 || peg2.size() > 0 || peg3.size() > 0) {
        pop_push_print(peg1, temp1);
        cout << "\t\t\t";
        pop_push_print(peg2, temp2);
        cout << "\t\t\t";
        pop_push_print(peg3, temp3);
        cout << endl;
    }
    cout << "-\t\t\t-\t\t\t-" << endl;

    move_all(temp1, peg1);
    move_all(temp2, peg2);
    move_all(temp3, peg3);
}



























int moves = 0;

void hanoi(int num_to_move, Stack<int> & source, Stack<int> & temp, Stack<int> & dest) {
    if (num_to_move > 0) {
        hanoi(num_to_move - 1, source, dest, temp);
        dest.push(source.pop());
        moves++;
        //cin.get();
        //print_stacks(peg1, peg2, peg3);
        hanoi(num_to_move - 1, temp, source, dest);
    }
}























int main() {
    //Stack<int> peg1, peg2, peg3;
    for (int disk = 7; disk > 0; disk--) {
        peg1.push(disk);
    }

    print_stacks(peg1, peg2, peg3);

    hanoi(peg1.size(), peg1, peg2, peg3);

    print_stacks(peg1, peg2, peg3);

    cout << moves << " moves " << endl;
    return 0;
}
