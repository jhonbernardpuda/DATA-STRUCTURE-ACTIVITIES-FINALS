#include <iostream>
using namespace std;

int main() {
    int grade, courseCode;
    
    cout << "Enter your grade: ";
    cin >> grade;
    cout << "Enter course code: ";
    cin >> courseCode;
    
    if (grade >= 75 && grade <= 100) {
        cout << "Result: Pasado ka! Congrats!";
    } else if (grade >= 0 && grade < 75) {
        cout << "Result: Bagsak ka! aray koh!";
    } else {
        cout << "Invalid grade input!";
    }
    cout << endl;
    
    switch(courseCode) {
        case 1:
            cout << "Course: Fundamentals is Programming";
            break;
        case 2:
            cout << "Course: Intermediate Programming";
            break;
        case 3:
            cout << "Course: Data Structures and Algorithms";
            break;
        default:
            cout << "Invalid course code input!";
    }

    return 0;
}
