#include <iostream>

#include <cmath>

using namespace std;

int * bill(int whole) {
    static int bills[4];

    bills[0] = whole / 20;
    whole = whole % 20;
    bills[1] = whole / 10;
    whole = whole % 10;
    bills[2] = whole / 5;
    whole = whole % 5;
    bills[3] = whole;

    return bills;
}

int * coin(int part) {
    static int coins[4];

    coins[0] = part / 25;
    part = part % 25;
    coins[1] = part / 10;
    part = part % 10;
    coins[2] = part / 5;
    part = part % 5;
    coins[3] = part;

    return coins;
}

int main() {
    char cont = 'y';
    do{
        float cost;
        float cash;
        float change;

        cout << "Enter purchase amount : $";
        cin >> cost;
        cout << "Enter amount tendered: $";
        cin >> cash;
        change = cash - cost;
        int rem = change / 1;
        cout << "Amount of purchase: $" << cost;
        cout << "\nAmount tendered: $" << cash;
        cout << "\nChange Due: $" << change;

        int * billy = bill(change / 1);
        int * coiny = coin(100 * (change - rem));
        cout << "\nBills\n";
        cout << billy[0] << " - $20's\t" << billy[1] << " - $10's\t" << billy[2] << " - $5's\t" << billy[3] << " - $1's";
        cout << "\nCoins\n";
        cout << coiny[0] << " - quarter(s)\t" << coiny[1] << " - dime(s)\t" << coiny[2] << " - nickel(s)\t" << coiny[3] << " - penny(ies)";
        cout << "\nContinue (y or n)?";
        cin >> cont;

    }while (cont == 'y');
}