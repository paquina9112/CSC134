/*
CSC-134
M2HW - Gold
Alexis Paquin
2/12/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Question 1 - banking transactions
    cout << "Question 1:" << endl;

    // Variables
    string name;
    int number;
    double startingBalance, deposit, withdrawal, finalBalance;

    //Formatting
    cout << setprecision(2) << fixed << showpoint;

    // Input
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "What is your account number? ";
    cin >> number;
    cout << "What is your current balance? $";
    cin >> startingBalance;
    cout << "How much would you like to deposit? $";
    cin >> deposit;
    cout << "How much would you like to withdraw? $";
    cin >> withdrawal;

    // Calculations
    finalBalance = startingBalance + deposit - withdrawal;

    // Output
    cout << "Name on account: " << name << endl;
    cout << "Account number: " << number << endl;
    cout << "Current balance: $" << finalBalance << endl;


    // Question 2
    cout << "Question 2:" << endl;


    // Question 3
    cout << "Question 3:" << endl;


    // Question 4
    cout << "Question 4:" << endl;


    return 0;

}