/*
CSC - 134
M5HW
Alexis Paquin
4/9/2026
*/

#include <iostream>
using namespace std;

int main() {

    // Question 1 - average rainfall for 3 months
    cout << "Question 1:" << endl;

    // Variables
    string month1, month2, month3;
    double month1num, month2num, month3num, average;

    // Input and output
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> month1num;
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> month2num;
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> month3num;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << (month1num + month2num + month3num) / 3 << " inches" << endl;


    // Question 2 - Volume of block
    cout << "\nQuestion 2:" << endl;

    // Variable
    double length, width, height;

    // Input and output
    cout << "Enter length of block: ";
    cin >> length;
    cout << "Enter width of block: ";
    cin >> width;
    cout << "Enter height of block: ";
    cin >> height;
    cout << "The volume of the block is " << length * width * height << " cubic units." << endl;


    // Question 3 - number to roman numerals
    cout << "\nQuestion 3:" << endl;

    // Variable
    int number;

    // Input
    cout << "Enter a number (1-10): ";
    cin >> number;

    // Switch statement
    switch (number) {
        case 1:
            cout << "I" << endl;
            break;
        case 2:
            cout << "II" << endl;
            break;
        case 3:
            cout << "III" << endl;
            break;
        case 4:
            cout << "IV" << endl;
            break;
        case 5:
            cout << "V" << endl;
            break;
        case 6:
            cout << "VI" << endl;
            break;
        case 7:
            cout << "VII" << endl;
            break;
        case 8:
            cout << "VIII" << endl;
            break;
        case 9:
            cout << "IX" << endl;
            break;
        case 10:
            cout << "X" << endl;
            break;
        default:
            cout << "Invalid input." << endl;
    }


    // Question 4 - Geometry calculator
    cout << "\nQuestion 4:" << endl;

    

    // Question 5 - 
    cout << "\nQuestion 5:" << endl;


    // Question 6 - 
    cout << "\nQuestion 6:" << endl;

}

