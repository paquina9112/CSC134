/*
CSC - 134
M5T2
Alexis Paquin
3/30/2026
*/

#include <iostream>
using namespace std;

void printResult(int number, int result) {
    cout << number << " squared = " << result << endl;
}

int square(int number) {
    int result;
    result = number * number;
    return result;
}

int main() {
    // count numbers
    // find result for each
    int count = 1;
    int result;

    // this will be squares
    while (count <= 10) {
        result = square(count);
        printResult(count, result);
        count++;
    }


}
