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
    first_num = 5;
    // second_num = 5;
    // answer = first_num * second_num;

    for ( int i=1; i<=12; i++ ) {
        answer = first_num * i;
        cout << first_num << " times " << i << " is " << answer << endl;

    }

}

