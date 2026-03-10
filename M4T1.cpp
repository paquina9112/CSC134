/*
CSC-134
M4T1
Alexis Paquin
3/9/2026
*/

#include <iostream>
using namespace std;
  
int main() {

    // program 5-3
    // Using simple while loop

    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;
        //i = i + 1;
        i++; // shorter version
    }
    cout << "That's all!" << endl;

    // program 5-6
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    // print a table header
    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {
        cout << num << "\t" << num * num << endl;

        num++; // increase number of times ran
    }

    return 0;
}