#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int loop = 1;
    while (loop == 1) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int x1 = 0;
        int x2 = 0;

        cout << "Enter a: " << endl;
        cin >> a;
        cout << "Enter b: " << endl;
        cin >> b;
        cout << "Enter c: " << endl;
        cin >> c;

        d = (b * b) - (4 * a * c);

        if (a == 0) {
            cout << "Not a quadratic equation";
            if (b == 0) {
                cout << "Both a and b are equal to 0 this is not an equation." << endl;
            }
            else {
                x1 = (-1 * c) / b;
                cout << "The solution to the equation is: " << x1 << endl;
            }
        }
        else if (d < 0) {
            cout << "No real answer";
        }
        else if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "Root 1 is: " << x1 << " and root 2 is: " << x2 << endl;
        }
        else {
            x1 = (-b) / (2 * a);
            cout << "Both roots are the same and equal to: " << x1 << endl;
        }
        cout << "Press 1 if you want to keep solving an equation, press any other number to exit: ";
        cin >> loop;
    }
    return 0;

}

