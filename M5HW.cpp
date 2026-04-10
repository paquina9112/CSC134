/*
CSC - 134
M5HW - Silver
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

    const double pi = 3.14159;
    int choice;
    double radius, circleArea;
    double rectLength, rectWidth, rectArea;
    double triBase, triHeight, triArea;

    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        circleArea = pi * (radius * radius);
        cout << "The area of the circle is " << circleArea << endl;
    } else if (choice == 2) {
        cout << "Enter the length of the rectangle: ";
        cin >> rectLength;
        cout << "Enter the width of the rectangle: ";
        cin >> rectWidth;
        rectArea = rectLength * rectWidth;
        cout << "The area of the rectangle is " << rectArea << endl;
    } else if (choice == 3) {
        cout << "Enter the base of the triangle: ";
        cin >> triBase;
        cout << "Enter the height of the triangle: ";
        cin >> triHeight;
        triArea = triBase * triHeight * 0.5;
        cout << "The area of the triangle is " << triArea << endl;
    } else if (choice == 4) {
        cout << "Ending program." << endl;
    } else {
        cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }


    // Question 5 - 
    cout << "\nQuestion 5:" << endl;


    // Question 6 - 
    cout << "\nQuestion 6:" << endl;

}

