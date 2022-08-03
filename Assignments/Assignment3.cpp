#include<iostream>
using namespace std;
class Polynomial{
private:
    double* arr;
    int coefficient;
    
public:

//Default Constructor
Polynomial()
{

}
//Constructor
Polynomial(double x)
{

}
//Constructor
Polynomial(double a[], int size){

}
//Copy Constructor
Polynomial(Polynomial &x)
{

}
void operator+(Polynomial x){

}
void operator*(Polynomial x){
    
}
void operator-(Polynomial x){

}
void print(){

}
double evaluate(){

}
friend const Polynomial operator+(const Polynomial& p1, const Polynomial& p2);
friend const Polynomial operator-(const Polynomial& p1, const Polynomial& p2);
friend const Polynomial operator*(const Polynomial& p1, const Polynomial& p2);
~Polynomial(){
    delete[] arr;
}
};
int main(){

    return 0;
}
