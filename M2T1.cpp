/*
CSC-134
M2T1
Alexis Paquin
2/7/2026
"Checkout" machine
*/

#include <iostream>
using namespace std;


int main() {

    //Set up variables
    string first_name, last_name, full_name;
    string product = "apples";
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
}