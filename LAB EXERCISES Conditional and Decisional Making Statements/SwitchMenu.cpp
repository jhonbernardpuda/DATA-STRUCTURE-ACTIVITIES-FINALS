#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "1. Compute Area of Circle" << endl;
    cout << "2. Compute Area of Rectangle" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch(choice) {
        case 1:
          cout << "Area of Circle";
          break;
        case 2:
          cout << "Area of Rectangle";
          break;
        case 3:
          cout << "Goodbye!";
          break;
        default:
          cout << "Invalid choice.";
    }

//QUESTIONS:
//1. What happens if you omit a break statement?
//   -he program will continue executing the next case even if it doesn’t match the choice.

//2. When would you prefer a switch over nested ifs?
//   -when you need to compare one variable to many constant values
//   -it makes a code cleaner, easier to read, and faster than writing many if, else if statements.

    return 0;
}
