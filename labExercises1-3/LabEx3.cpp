#include <iostream>
using namespace std;

int main () {
	int list1[10] = {0};
	int list2[10] = {8, 5, 12};
	int list3[3] = {5, 6, 3};
	int list4[25] = {4, 7};
//	int list5[5] = {4, , 7, 9};
	
	cout << "list1:";
	for (int i = 0; i < 10; i++) {
		cout << " " << list1[i];
	}
	cout << endl;
	
	cout << "list2:";
	for (int i = 0; i < 10; i++) {
		cout << " " << list2[i];
	}
	cout << endl;
	
	cout << "list3:";
	for (int i = 0; i < 3; i++) {
		cout << " " << list3[i];
	}
	cout << endl;
	
	cout << "list4:";
	for (int i = 0; i < 25; i++) {
		cout << " " << list4[i];
	}
	cout << endl;
/*
	cout << "list5:";
	for (int i = 0; i < 5; i++) {
		cout << " " << list5[i];
	}
*/ 
    return 0;
}
