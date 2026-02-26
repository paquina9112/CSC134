/*
CSC-134
M3LAB2
Alexis Paquin
2/26/2026
Grade conversion
*/


#include <iostream>
#include <string>
using namespace std;

void gradeA();
void gradeB();
void gradeC();
void gradeD();
void gradeF();

int main() {

    // user input for number grade
    int num_grade;

    cout << "Enter your numerical grade: ";
    cin >> num_grade;

    // number to letter conversion
    if (num_grade >= 90) {
        gradeA();
    }
    else if (num_grade <= 89 && num_grade >= 80) {
        gradeB();
    }
    else if (num_grade <= 79 && num_grade >= 70) {
        gradeC();
    }
    else if (num_grade <= 69 && num_grade >= 60) {
        gradeD();
    }
    else if (num_grade <= 59 && num_grade >= 0) {
        gradeF();
    }
    else {
        cout << "Invalid grade entered." << endl;
    }

    return 0;
}

// output for letter grades
void gradeA() {
    cout << "Your letter grade is: A" << endl;
}

void gradeB() {
    cout << "Your letter grade is: B" << endl;
}

void gradeC() {
    cout << "Your letter grade is: C" << endl;
}

void gradeD() {
    cout << "Your letter grade is: D" << endl;
}
void gradeF() {
    cout << "Your letter grade is: F" << endl;
}