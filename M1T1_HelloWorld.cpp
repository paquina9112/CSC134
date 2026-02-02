/*
CSC-134
M1T1 - Hello World
Alexis Paquin
2/1/2026
*/

//magic words
#include <iostream>
using namespace std;

int main() {
    //Greet the user
    cout << "Hello, user!" << endl;
    cout << "What's your name?" << endl;
    string name;
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    return 0;
}