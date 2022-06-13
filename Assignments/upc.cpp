#include <iostream>
using namespace std;
void printMenu() {
	cout << "Check Digit Calculator\n--------------------\n1. EAN - 8 \n2. UPC - A\n3. EAN - 13\n4. EAN - 14\n5. SSCC\n--------------------\n";
}

void printDigitsline(int type) {
	if (type == 1)
		cout << endl << "Enter first 7 digits of your product code:";
	else if (type == 2)
		cout << endl << "Enter first 11 digits of your product code:";
	else if (type == 3)
		cout << endl << "Enter first 12 digits of your product code:";
	else if (type == 4)
		cout << endl << "Enter first 13 digits of your product code:";
	else if (type == 5)
		cout << endl << "Enter first 17 digits of your product code:";
}

int length(long long int code) {
	int len = 0;
	for (code = abs(code); code != 0; len++, code /= 10) continue;
	return len;
}

int checkDigits(int type, long long int code) {
	int oddSum = 0;
	int evenSum = 0;
	int digit;

	if (type == 1) {
		for (int i = 0; i < 7; i++) {
			if (i % 2 == 0)
				oddSum += code % 10;
			else if (i % 2 == 1)
				evenSum += code % 10;

			code /= 10;
		}
		int sum = evenSum + (oddSum * 3);
		if (sum % 10 == 0)
			return 0;
		digit = (10 - ((sum) % 10));
		return digit;
	}
	else if (type == 2) {
		for (int i = 0; i < 11; i++) {
			if (i % 2 == 0)
				oddSum += code % 10;
			else if (i % 2 == 1)
				evenSum += code % 10;

			code /= 10;
		}
		int sum = evenSum + (oddSum * 3);
		if (sum % 10 == 0)
			return 0;
		digit = (10 - ((sum) % 10));
		return digit;
	}
	else if (type == 3) {
		for (int i = 0; i < 12; i++) {
			if (i % 2 == 0)
				evenSum += code % 10;
			else if (i % 2 == 1)
				oddSum += code % 10;

			code /= 10;
		}
		int sum = (evenSum * 3) + oddSum;
		if (sum % 10 == 0)
			return 0;
		digit = (10 - ((sum) % 10));
		return digit;
	}
	else if (type == 4) {
		for (int i = 0; i < 13; i++) {
			if (i % 2 == 0)
				oddSum += code % 10;
			else if (i % 2 == 1)
				evenSum += code % 10;

			code /= 10;
		}
		int sum = evenSum + (oddSum * 3);
		if (sum % 10 == 0)
			return 0;
		digit = (10 - ((sum) % 10));
		return digit;
	}
	else if (type == 5) {
		for (int i = 0; i < 17; i++) {
			if (i % 2 == 0)
				oddSum += code % 10;
			else if (i % 2 == 1)
				evenSum += code % 10;

			code /= 10;
		}
		int sum = evenSum + (oddSum * 3);
		if (sum % 10 == 0)
			return 0;
		digit = (10 - ((sum) % 10));
		return digit;
	}

}

int main() {
	printMenu();

	int upcType;
	long long int digits;

	cout << "Choose your product code type:";
	cin >> upcType;

	if (upcType < 1 || upcType>5) {
		cout << "Error " << upcType << " is an invalid menu choice.";
		return 0;
	}

	printDigitsline(upcType);
	cin >> digits;

	if (upcType == 1) {
		if (length(digits) != 7){
			cout << "You should have entered 7 digits, but you enetered " << length(digits) << " digits.";
			return 0;
		}
	}
	else if (upcType == 2) {
		if (length(digits) != 11) {
			cout << "You should have entered 11 digits, but you enetered " << length(digits) << " digits.";
			return 0;
		}
	}
	else if (upcType == 3) {
		if (length(digits) != 12) {
			cout << "You should have entered 12 digits, but you enetered " << length(digits) << " digits.";
			return 0;
		}
	}
	else if (upcType == 4) {
		if (length(digits) != 13) {
			cout << "You should have entered 13 digits, but you enetered " << length(digits) << " digits.";
			return 0;
		}
	}
	else if (upcType == 4) {
		if (length(digits) != 17) {
			cout << "You should have entered 17 digits, but you enetered " << length(digits) << " digits.";
			return 0;
		}
	}

	cout << endl << "--------------------" << endl;
	
	cout <<  "The check digit is: " << checkDigits(upcType, digits) << endl << "The product code is " << digits << checkDigits(upcType, digits);

	return 0;
}