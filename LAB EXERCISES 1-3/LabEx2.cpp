#include <iostream>
using namespace std;

int main () {
	double sales[] = {12.25, 32.50, 16.90, 23.00, 45.6};
	double averageSales, total;
	
	for (int i = 0; i < 5; i++) {
		cout << sales[i] << endl;
		total += sales[i];
	}
	
	averageSales = total / 5;
	cout << "Average sales: " << averageSales;

/*
OBSERVATION:
What values are assigned to the uninitialized elements?
 -(3.11261e-322) for index 3, and (8.48798e-314) for index 4.

What happens if you specify a size smaller than the number of initial values?
 -it says error, because there's too many initial value that does not match the declared size.
*/

	return 0;
}
