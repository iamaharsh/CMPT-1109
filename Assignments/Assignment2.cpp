#include <iostream>
#include <fstream>
using namespace std;

class rationalNumber {
private:
	int numerator;
	int denominator;
	int ratnumber;
public:
	//Constructors
	rationalNumber(int num, int denom) {
		numerator = num;
		denominator = denom;
	}
	rationalNumber(int num) {
		numerator = num;
		denominator = 1;
	}

	//Setter Getter
	void rationalNumber setNum(int numerator)
	{
		this->numerator = numerator;
	}

	int rationalNumber getNum()
	{
		return numerator;
	}

	void rationalNumber setDenom(int denom)
	{
		this->denominator = denominator;
	}

	int rationalNumber getDenom()
	{
		return denominator;
	}


	float add() {

	}
	float substract() {

	}
	float multiply() {

	}
	float divide() {

	}
	bool less() {

	}
	float negative(float number) {
		return -number;
	}
	void input() {
		
	}
	void output() {

	}
};

int main() {
	int n1, d1, n2, d2;

	cout << "Rational Number#1 :" << endl;
	cout << "Enter Numerator :";
	cin >> n1;
	cout << "Enter Denominator :";
	cin >> d1;

	cout << " Rational Number#2 ::" << endl;
	cout << "Enter Numerator :";
	cin >> n2;
	cout << "Enter Denominator :";
	cin >> d2;

	rationalNumber(n1, d1);
	rationalNumber(n2, d2);
	return 0;
}