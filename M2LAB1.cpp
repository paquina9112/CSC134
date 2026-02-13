/*
CSC-134
M2LAB1
Alexis Paquin
2/12/2026
Calculating the volume, cost, customer charge, and profit of any size crate.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Constants for cost and amount charged
    const double costPerCubicFoot = 0.23;
    const double chargePerCubicFoot = 0.50;

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

    return 0;
}
