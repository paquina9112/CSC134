/*
CSC-134
M2T1
Alexis Paquin
2/7/2026
"Checkout" machine
*/

#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;


int main() {

    //Set up variables
    string first_name, last_name, full_name;
    string product = "apples";
    int amount;
    double cost_each = 0.99;
    double total_cost;

    //Greet customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they would like to purchase
    cout << "How many " << product << " would you like today?";
    cin >> amount;

    // Calculate total price
    total_cost = amount * cost_each;

    // Formatting: Set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // Give the result
    cout << "For " << amount << " " << product << endl;
    cout << "That will be " << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; // no errors

}