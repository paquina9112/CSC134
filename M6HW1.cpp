/*
CSC - 134
M6HW1
Alexis Paquin
4/27/2026
*/

#include <iostream>
#include <string>
using namespace std;

void chooseThrow();
void chooseRun();
void chooseKick();
void choosePunt();
void chooseTimeout();


int main() {

  int choice; 

    // question
    cout << "Football Play Menu:" << endl;
    cout << "1. Throw the football" << endl;
    cout << "2. Run with the football" << endl;
    cout << "3. Punt the football" << endl;
    cout << "4. Kick the football" << endl;
    cout << "5. Call a timeout" << endl;
    cout << "6. Quit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    if (choice == 1) {
      chooseThrow();
    }
    else if (choice == 2) {
      chooseRun();
      cout << "Pick a new choice between 3 or 4 or 5." << endl;
      cin >> choice;
      if (choice == 3) {
        choosePunt();
      }
      else if (choice == 4) {
        chooseKick();
      }
      else if (choice == 5) {
        chooseTimeout();
        cout << "Pick a new choice between 1 or 4." << endl;
        cin >> choice;
        if (choice == 1) {
          chooseThrow();
        }
        else if (choice == 4) {
          chooseKick();
        }
      }
    }
    else if (choice == 3) {
      choosePunt();
    }
    else if (choice == 4) {
      chooseKick();
    }
    else if (choice == 5) {
      chooseTimeout();
      cout << "Pick a new choice between 1 or 2 or 4." << endl;
      cin >> choice;
      if (choice == 1) {
        chooseThrow();
      }
      else if (choice == 2) {
        chooseRun();
        cout << "Pick a new choice between 1 or 4." << endl;
        cin >> choice;
        if (choice == 1) {
          chooseThrow();
        }
        else if (choice == 4) {
          chooseKick();
        }
      }
    }
    else if (choice == 6) {
      cout << "Thank you for playing!" << endl;
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

void chooseKick() {
  // this function is called in main if the user chooses Kick.
  cout << "You chose to kick the football." << endl;
  cout << "You win...a field goal!" << endl;
}

void choosePunt() {
  // this function is called in main if the user chooses Punt.
  cout << "You chose to punt the football." << endl;
  cout << "You give the ball to the other team." << endl;
}

void chooseTimeout() {
  // this function is called in main if the user chooses Timeout.
  cout << "You chose to call a timeout." << endl;
  cout << "You get a break, but the other team gets to rest too." << endl;
}