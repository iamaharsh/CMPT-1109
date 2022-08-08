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
    double evaluate(){

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

}
const Polynomial operator*(const Polynomial& p1, const Polynomial& p2) {

}
const Polynomial operator-(const Polynomial& p1, const Polynomial& p2) {

}