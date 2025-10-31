#include <iostream>
using namespace std;

int main () {
	int list1[10] = {0};
	int list2[10] = {8, 5, 12};
	int list3[3] = {5, 6, 3};
	int list4[25] = {4, 7};
	//int list5[5] = {4, , 7, 9};
	
	cout << "list 1: ";
	for (int i = 0; i < 10; i++) {
		cout << list1[i] << " ";
	} cout << endl;
	
	cout << "list 2: ";
	for (int i = 0; i < 10; i++) {
		cout << list2[i] << " ";
	} cout << endl;
	
	cout << "list 3: ";
	for (int i = 0; i < 3; i++) {
		cout << list3[i] << " ";
	} cout << endl;
	
	cout << "list 4: ";
	for (int i = 0; i < 25; i++) {
		cout << list4[i] << " ";
	}
	
	/*
	cout << "list 5: ";
	for (int i = 0; i < 5; i++) {
		cout << list5[i] << " ";
	}
    */

/*	
OBSERVATION:
Uninitialized components:
 -list 1 = 0 0 0 0 0 0 0 0 0 0
 -list 2 = 8 5 12 0 0 0 0 0 0 0
 -list 3 = 5 6 3
 -list 4 = 4 7 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

Initializing invalid value: int list5[5] = {4, , 7, 9};
 -[Error] expected primary-expression before ',' token
Explain why the compiler raises an error.
 -leaving a blank before ',' is syntax error, array initializers must have valid expressions separated by commas.
 */

	return 0;
}
