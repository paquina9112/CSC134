/*
CSC - 134
M2T2
Alexis Paquin
2/9/2026
Receipt calculator
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables
    string meal_name = "Burger Platter";
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
    cout << "Tip amount? (min 0)" << endl;
    cin >> tip_amount;

    // Calulate values
    sub_total = num_meals * meal_price;
    tax_amount = sub_total * tax_rate;
    total_price = sub_total + tax_amount + tip_amount;

    //Print results
    cout << setprecision(2) << fixed;
    cout << "YOUR ORDER" << endl << "-------------------------------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    cout << "Tip: \t\t\t$" << tip_amount << endl;
    cout << "Tax: \t\t\t$" << tax_amount << endl;
    cout << "-------------------------------" << endl;
    cout << "Total: \t\t\t$" << total_price << endl;
    cout << "THANK YOU COME AGAIN!" << endl;

    return 0;
}