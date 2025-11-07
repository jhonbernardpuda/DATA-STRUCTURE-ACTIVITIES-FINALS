#include <iostream>
using namespace std;

int main () {
	double sales[] = {12.25, 32.50, 16.90, 23.00, 45.68};
//	double total, averageSales;
	
	for (int i = 0; i < 5; i++) {
		cout << sales[i] << " ";
	//	total += sales[i];
	}
/*	
	averageSales = total / 5;
	cout << "\nAverage Sales: " << averageSales;
*/	
	return 0;
}
