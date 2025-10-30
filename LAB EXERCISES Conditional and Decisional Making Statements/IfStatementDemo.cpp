#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0)
        cout << "The number is positive";
    
//QUESTIONS:
//1. What happens if the input is 0 or negative?
//   -The program does nothing.

//2. How does the program decide whether to execute the statement?    
//   -if the condition is satisfied or evaluates to true, it executes the statement inside if. If it's false, it will skip the statement.

    return 0;
}
