#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 5;
    
    cout << "a == b: " << (a == b) << endl;
    cout << "a != c: " << (a != c) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "b > c: " << (b > c) << endl;
    cout << "(a + c) <= b: " << ((a + c) <= b) << endl;
    
    cout << "'A' < 'a': " << ('A' < 'a') << endl;
    // 'A' is less than 'a' because they are compared based on their ASCII values. Their value is 'A' = 65 and 'a' = 97, so 65 < 97 is true, so it outputs 1
    
//QUESTIONS:
//1. What data types can be compared using relational operators?
//   -int, char, float, and double

//2. How does ASCII value affect character comparisons?    
//   -When comparing characters, it compares their ASCII value, not the letter.

//3. Why does C++ return 1 for true and 0 for false?
//   -C++ uses boolean values to represent truth in numbers
//   -1 means true, 0 means false

    return 0;
}
