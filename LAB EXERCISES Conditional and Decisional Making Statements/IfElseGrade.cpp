#include <iostream>
using namespace std;

int main() {
    int grade;
    
    cout << "Enter your grade: ";
    cin >> grade;
    
    if (grade >= 75)
        cout << "Result: Congrats! Pasado ka!";
    else
        cout << "Result: Aray ko! Bagsak ka!";
    
//QUESTIONS:
//1. What happens if the input is 0 or negative?
//   -it changes the program from two-way selection to one-way selection.

//2. Can you nest another if inside this structure? 
//   -yes, it's called nested if, it's used for multiple checking conditions such as adding a grade level. 
// Example: grade >= 95 - Ang galing!
//          grade >= 85 - Above average
//          grade >= 75 - Average

    return 0;
}
