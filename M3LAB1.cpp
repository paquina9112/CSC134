/*
CSC-134
M3LAB1
Alexis Paquin
2/26/2026
Using program 3 as a guide for my "game show"
*/

#include <iostream>
#include <string>
using namespace std;

void chooseThrow();
void chooseRun();

int main() {

  string choice; 

  // question
  cout << "Do you choose to throw or run the football?" << endl;
  cout << "Type Throw or Run:"; 
  cin >> choice;

  if ("Throw" == choice) {
    chooseThrow();
  }
  else if ("Run" == choice) {
    chooseRun();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; 

} // end of the main() method

void chooseThrow() {
  // this function is called in main if the user chooses Throw.
  cout << "You chose to throw the football." << endl;
  cout << "You win...a touchdown!" << endl;
}

void chooseRun() {
  // this function is called in main if the user chooses Run.
  cout << "You chose to run with the football." << endl;
  cout << "You win...a first down!" << endl;
}