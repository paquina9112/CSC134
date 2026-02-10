/*
CSC - 134
M2T2
Alexis Paquin
2/9/2026
Recipt calculator
*/

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    string meal_name = "Burger PLatter";
    int num_meals;
    double meal_price = 5.99;
    double sub_total;
    double tax_rate = 0.08;
    double tip_amount;
    double tax_amount;
    double total_price;

    // Get user input
    cout << "Welcome to the CSC 134 Grill!" << endl;
    cout << "Today's special is " << meal_name << endl;
    cout << endl;
    cout << "How many would you like" << endl;
    cin >> num_meals;

    // Calulate values
    sub_total = num_meals * meal_price;

    //Print results
    cout << "YOUR ORDER" << endl << "------------------" << endl;
    cout << num_meals << " x " << "$" << meal_price << endl;
    cout << "Subtotal: $" << sub_total << endl;

    return 0;
}