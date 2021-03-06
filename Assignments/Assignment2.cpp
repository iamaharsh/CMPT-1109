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
	void setNum(int numerator)
	{
		this->numerator = numerator;
	}

	int getNum()
	{
		return numerator;
	}

	void setDenom(int denom)
	{
		this->denominator = denominator;
	}

	int getDenom()
	{
		return denominator;
	}

	//Member functions to do calculation
	double add(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		return ((a * d * 1.0 + b * c * 1.0) / (b * d * 1.0));
	}
	double substract(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		return ((a * d * 1.0 - b * c * 1.0) / (b * d * 1.0));
	}
	double multiply(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		return ((a * c * 1.0) / (b * d * 1.0));
	}
	double divide(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		return ((a * d * 1.0) / (c * b * 1.0));
	}
	bool less(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		if ((a * d * 1.0) < (c * b * 1.0))
			return true;
		else
			return false;
	}
	double negative() {
		int a, b;
		a = getNum();
		b = getDenom();

		return ((-1 * a * 1.0) / b * 1.0);
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

	cout << " Rational Number#2 :" << endl;
	cout << "Enter Numerator :";
	cin >> n2;
	cout << "Enter Denominator :";
	cin >> d2;

	rationalNumber rational1(n1, d1);
	rationalNumber rational2(n2, d2);

	cout << rational1.add(rational2) << endl;

	cout << rational1.substract(rational2) << endl;

	cout << rational1.multiply(rational2) << endl;

	cout << rational1.divide(rational2) << endl;

	cout << rational1.less(rational2) << endl;

	cout << rational1.negative() << endl;

	cout << rational2.negative() << endl;
	return 0;
}