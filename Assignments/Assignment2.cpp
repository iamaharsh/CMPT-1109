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

		return ((a * d + b * c) / (b * d));
	}
	double substract(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		return ((a * d - b * c) / (b * d));
	}
	double multiply(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		return ((a * c) / (b * d));
	}
	double divide(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		return ((a * d) / (c * b));
	}
	bool less(rationalNumber x) {
		int a, b, c, d;
		a = getNum();
		b = getDenom();
		c = x.getNum();
		d = x.getDenom();

		if ((a * d) < (c * b))
			return true;
		else
			return false;
	}
	double negative() {
		int a, b;
		a = getNum();
		b = getDenom();

		return ((-1 * a) / b);
	}
	
};

void input() {

}
void output() {

}

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