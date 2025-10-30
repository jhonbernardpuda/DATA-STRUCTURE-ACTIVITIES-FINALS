#include <iostream>
using namespace std;

int main() {
    int grade;
    
    cout << "Enter your grade: ";
    cin >> grade;
    
    if (grade >= 75) {
        cout << "Pasado ka! Congrats!" << endl;
        cout << "Nice ipagpatuloy mo lang";
    } else {
        cout << "Bagsak ka! aray koh!" << endl;
        cout << "Bawi sa finals.";
    }

//QUESTIONS: LAB 3
//1. What happens if the input is 0 or negative?
//   -it changes the program from two-way selection to one-way selection.

//2. Can you nest another if inside this structure? 
//   -yes, it's called nested if, it's used for multiple checking conditions such as adding a grade level. 
// Example: grade >= 95 - Ang galing!
//          grade >= 85 - Above average
//          grade >= 75 - Average

//QUESTIONS: LAB 4
//1. What error occurs if braces are omitted?
//   -the other statements will run no matter what, even if the condition is false.

//2. Why are compound statements useful in decision-making?
//   -they allow you to group multiple statements into one block, ensuring that all related actions are executed together when a condition is true or false.

    return 0;
}
