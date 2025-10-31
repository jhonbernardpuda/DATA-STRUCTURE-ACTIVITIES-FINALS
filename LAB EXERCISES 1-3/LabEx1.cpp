#include <iostream>
using namespace std;

int main () {
	int array[] = {1, 2, 3, 4, 5};
	int index;
	
	cout << "Enter array index: ";
	cin >> index;
	
	if (index < 5) {
		cout << "Value: " << array[index];
	} else {
		cout << "Invalid index!";
	}

/*
OBSERVATION:
Accessing invalid index (array[5])
 -the program will output a random value for index5.

Why C++ does not automatically check array bounds?
 -because C++ was made for speed, efficiency, and reliability, automatically checking array bounds will add extra instructions everytime and array is accessed, making the program to slow down
 -it leaves the responsibility for the programmer to modify and prevent index errors.


REFLECTION:
How can array index errors cause unpredictable results?
 -they can overwrite memory used by other variables, sometimes the work, but outputs random values. Making debugging hard.

What are good programming practices to prevent them?
 -validate user input before accessing an array.
 -use if-else statements that ensures the program only accesses memory inside the valid range. This will make the program to output error message instead of random values if the index is invalid.
 -use loops with correct index limits.
 -test with different inputs, especially boundary values (like the first and last index).
*/

	return 0;
}
