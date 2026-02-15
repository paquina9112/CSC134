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
    cout << "-----------------------------------------" << endl;
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
    cout << "-------------------------------------------" << endl;
    cout << "The volume of the crate is " << volume << " cubic feet." << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;



    // Question 3 - pizza slices
    cout << "\nQuestion 3:" << endl;

    // Variables
    int num_pizza, slices, people, total_slices, slices_eaten, slices_left;
    const int slices_per_person = 3;

    // Input
    cout << "How many pizzas are you ordering?" << endl;
    cin >> num_pizza;
    cout << "How many slices are in each pizza?" << endl;
    cin >> slices;
    cout << "How many people will be there?" << endl;
    cin >> people;

    // Calculations
    total_slices = num_pizza * slices;
    slices_eaten = people * slices_per_person;
    slices_left = total_slices - slices_eaten;

    // Output
    cout << "You will have " << slices_left << " slices left over." << endl;



    // Question 4 - FTCC cheer
    cout << "\nQuestion 4:" << endl;

    // Variables
    string school = "FTCC", team = "Trojans", letsGo = "Let's go";
    string cheer1 = letsGo + " " + school;
    string cheer2 = letsGo + " " + team;

    // Output
    cout << cheer1 << endl;
    cout << cheer1 << endl;
    cout << cheer1 << endl;
    cout << cheer2 << endl;

    return 0;

}