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



    // Question 2 - crate sales
    cout << "\nQuestion 2:" << endl;

    // Constants for cost and amount charged
    const double costPerCubicFoot = 0.30;
    const double chargePerCubicFoot = 0.52;

    // Variables
    double length, width, height, volume, cost, charge, profit;

    // Set output formatting
    cout << setprecision(2) << fixed << showpoint;

    // Get user input for crate dimensions
    cout << "Enter the length of the crate (in feet): ";
    cin >> length;
    cout << "Enter the width of the crate (in feet): ";
    cin >> width;
    cout << "Enter the height of the crate (in feet): ";
    cin >> height;

    // Calculate volume, cost to produce, charge, profit
    volume = length * width * height;
    cost = volume * costPerCubicFoot;
    charge = volume * chargePerCubicFoot;
    profit = charge - cost;

    // Display results
    cout << "The volume of the crate is " << volume << " cubic feet." << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;



    // Question 3
    cout << "\nQuestion 3:" << endl;


    // Question 4
    cout << "\nQuestion 4:" << endl;


    return 0;

}