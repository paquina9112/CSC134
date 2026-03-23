/*
CSC - 134
M4HW1 - 
Alexis Paquin
3/22/2026
Multipliction table
*/

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int first_num, answer;
    // second_num = 5;
    // answer = first_num * second_num;

    cout << "Enter a number between 1 and 12:";
    cin >> first_num;

    for ( int i=1; i<=12; i++ ) {
        
        answer = first_num * i;
        cout << first_num << " times " << i << " is " << answer << endl;

    }

}

