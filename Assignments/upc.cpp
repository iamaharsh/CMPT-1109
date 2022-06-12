#include <iostream>
using namespace std;
void printMenu() {
	cout << "Check Digit Calculator\n--------------------\n1. EAN - 8 \n2. UPC - A\n3. EAN - 13\n4. EAN - 14\n5. SSCC\n-------------------- ";
}
void printDigitsline(int type) {
	if (type == 1)
		cout << endl << "Enter first 7 digits of your product code: ";
	else if (type == 2)
		cout << endl << "Enter first 11 digits of your product code: ";
	else if (type == 3)
		cout << endl << "Enter first 12 digits of your product code: ";
	else if (type == 4)
		cout << endl << "Enter first 13 digits of your product code: ";
	else if (type == 5)
		cout << endl << "Enter first 17 digits of your product code: ";
}

int main() {
	printMenu();
	int upcType;
	int digits;

	cout << "Choose your product code type:";
	cin >> upcType;

	printDigitsline(upcType);
	cin >> digits;

	return 0;
}