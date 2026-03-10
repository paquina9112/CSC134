/*
CSC-134
M3HW - Gold
Alexis Paquin
3/2/2026
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // Question 1 - chat bot
    cout << "Question 1:" << endl;

    // Variables
    string user_ans;

    //Output and input
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> user_ans;

    // if else statement
    if (user_ans == "yes") {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    }
    else if (user_ans == "no") {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    }
    else {
        cout << "If you’re not sure… that’s OK." << endl;
    }


    // Question 2 - receipt
    cout << "\nQuestion 2:" << endl;

    // Declare variables
    string meal_name = "Burger Platter";
    int num_meals;
    double meal_price;
    int in_out;
    double sub_total;
    double tax_rate = 0.08;
    double tip_amount;
    double tax_amount;
    double total_price;

    // Get user input
    cout << "Welcome to the CSC 134 Grill!" << endl;
    cout << "Today's special is " << meal_name << endl;
    cout << endl;
    cout << "What is the cost of your meal?" << endl;
    cin >> meal_price;
    cout << "How many would you like?" << endl;
    cin >> num_meals;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go." << endl;
    cin >> in_out;

    // Calculate values
    sub_total = num_meals * meal_price;

    if (in_out == 1) {
        tip_amount = sub_total * .15;
    }
    else {
        cout << "Tip amount? (min 0)" << endl;
        cin >> tip_amount;
    }

    // Calulate values
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

    
    // Question 3 - Football simulator
    cout << "\nQuestion 3:" << endl;

    string choice; 

    // question
    cout << "Do you choose to throw or run the football?" << endl;
    cout << "Type Throw or Run:"; 
    cin >> choice;

    if ("throw" == choice)
        cout << "Interception! You've lost the game." << endl;
    else 
    {
        cout << "You win...a first down!" << endl;
        cout << "Do you want to kick or run the football?" << endl;
        cin >> choice;

        if ("kick" == choice)
            cout << "You win...a field goal!" << endl;
        else
        {
            cout << "You're at the ten yard line!" << endl;
            cout << "Do you want to throw or run the football?" << endl;
            cin >> choice;

            if ( "run" == choice)
                cout << "Sorry. You came up short." << endl;
            else
                cout << "You win...a touchdown!" << endl;
        }
    }

    cout << "Thank you for playing!" << endl;


    // Question 4 - Math practice
    cout << "\nQuestion 4:" << endl;

    // random number generator
    unsigned seed = time(0); 
    srand(seed);
    int num1 = rand() % 10; // 0-9
    int num2 = rand() % 10; // 0-9
    int answer;

    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> answer;

    if (answer == num1 + num2) {
        cout << "Correct" << endl;
    } 
    else {
        cout << "Incorrect" << endl;
    }

    return 0;
}