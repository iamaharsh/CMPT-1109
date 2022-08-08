#include<iostream>
using namespace std;
class Polynomial{
private:
    double* coeff;
    int numCoeff;
public:
    //Default Constructor
    Polynomial()
    {
        numCoeff = 1;
        coeff = new double[numCoeff];
        coeff[0] = 0;
    }
    //Constructor
    Polynomial(double x)
    {
        numCoeff = 1;
        coeff = new double[numCoeff];
        coeff[0] = x;
    }
    //Constructor
    Polynomial(double x[], int size)
    {
        numCoeff = size;
        coeff = new double[numCoeff];
        for (int i = 0; i < numCoeff; i++)
            coeff[i] = x[i];
    }
    //Copy Constructor
    Polynomial(Polynomial &x)
    {
        if (numCoeff != x.numCoeff) {
            delete[] coeff;
            numCoeff = x.numCoeff;
            coeff = new double[numCoeff];
        }
        for (int i = 0; i < numCoeff; i++) {
            coeff[i] = x.coeff[i];
        }
    }
    //Friend function

    friend const Polynomial operator+(const Polynomial& p1, const Polynomial& p2);
    friend const Polynomial operator-(const Polynomial& p1, const Polynomial& p2);
    friend const Polynomial operator*(const Polynomial& p1, const Polynomial& p2);

    Polynomial& operator=(Polynomial x) {
        if (numCoeff != x.numCoeff) {
            delete[] coeff;
            numCoeff = x.numCoeff;
            coeff = new double[numCoeff];
        }
        for (int i = 0; i < numCoeff; i++) {
            coeff[i] = x.coeff[i];
        }
        return *this;
    }
    
    void print(){

    }
    void set(double coeff, int exp) 
    {
        if (exp >= numCoeff) {
            cout << "This polynomnial does not have such a high exponent.";
            exit(0);
        }
        else {
            this->coeff[exp] = coeff;
        }
    }
    double get(int exp) 
    {
        if (exp >= numCoeff) {
            cout << "This polynomnial does not have such a high exponent.";
            exit(0);
        }
        else {
            return coeff[exp];
        }
 
    }
    double evaluate(double x)
    {
        double result = 0;
        for (int i = 0; i < numCoeff; i++) {
            result += coeff[i] * pow(x, i);
        }
        return result;
    }
    
    ~Polynomial(){
        delete[] coeff;
    }
};
int main(){
    double a[] = { 4,3,2,1 };
    double b[] = { 3,2,1 };
    Polynomial p1(a, 4);
    Polynomial p2(b, 3);
    return 0;
}

const Polynomial operator+(const Polynomial& p1, const Polynomial& p2) {
    Polynomial sum;
    if (p1.numCoeff >= p2.numCoeff)
        sum.numCoeff = p1.numCoeff;
    else
        sum.numCoeff = p2.numCoeff;
    delete[] sum.coeff;
    sum.coeff = new double[sum.numCoeff];
    for (int i = 0; i < sum.numCoeff; i++)
    {
        sum.coeff[i] = 0;
        if (i < p1.numCoeff) {
            sum.coeff[i] += p1.coeff[i];
        }
        if (i < p2.numCoeff) {
            sum.coeff[i] += p2.coeff[i];
        }
    }
    return sum;
}
const Polynomial operator-(const Polynomial& p1, const Polynomial& p2) {
    Polynomial diff;
    if (p1.numCoeff >= p2.numCoeff) {
        diff.numCoeff = p1.numCoeff;
    }
    else {
        diff.numCoeff = p2.numCoeff;
    }
    delete[] diff.coeff;
    diff.coeff = new double[diff.numCoeff];
    for (int i = 0; i < diff.numCoeff; i++) {
        diff.coeff[i] = 0;
        if (i < p1.numCoeff) {
            diff.coeff[i] += p1.coeff[i];
        }
        if (i < p2.numCoeff) {
            diff.coeff[i] -= p2.coeff[i];
        }
    }
    return diff;
}
const Polynomial operator*(const Polynomial& p1, const Polynomial& p2) {
    Polynomial product;
    product.numCoeff = p1.numCoeff + p2.numCoeff;
    delete[] product.coeff;
    product.coeff = new double[product.numCoeff];
    for (int i = 0; i < product.numCoeff; i++) {
        product.coeff[i] = 0;
    }
    for (int i = 0; i < p1.numCoeff; i++) {
        for (int j = 0; j < p2.numCoeff; j++) {
            product.coeff[i + j] += p1.coeff[i] * p2.coeff[j];
        }
    }
    return product;
}