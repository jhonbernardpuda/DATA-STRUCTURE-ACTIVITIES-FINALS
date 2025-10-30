#include <iostream>
using namespace std;

int main() {
    int grade;
    
    cout << "Enter your grade: ";
    cin >> grade;
    
    if (grade >= 90) {
        cout << "Excellent!";
    } else {
        if (grade >= 80) {
            cout << "Very Good!";
        } else {
            if (grade >= 75) {
                cout << "Satisfactory";
            } else {
                cout << "Fail";
            }
        }
    } 

//QUESTIONS:
//1. How does nesting differ from a simple if-else chain?
//   -in nested if, one condition is tested inside another, while in an if-else chain, each condition is checked separately at the same level. Nested if is like opening a door after passing through another.

//2. What’s the advantage of using nested conditions?
//   -it allows you to make more specific decisions based on previous results. They help you test another condition only when a certain condition is true.

    return 0;
}
