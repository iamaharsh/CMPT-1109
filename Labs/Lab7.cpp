#include <iostream>
using namespace std;
class Movie {
    string name;
    string mpaaRating;

};
int main()
{
    Movie movie1("300", "R");
    movie1.addrating(1);
    movie1.addrating(1);
    movie1.addrating(3);
    movie1.addrating(3);
    movie1.addrating(5);
    movie1.getName();
    movie1.getMPAA();
    cout << movie1.getAverage(); //3.2

    Movie movie2;
    movie2.setName("The GodFather");
    movie2.setMPAA("PG-13");
    movie2.addRating(1);
    movie2.addRating(3);
    movie2.addRating(5);
    movie2.addRating(5);
    movie2.addRating(5);
    movie2.getName();
    movie2.getMPAA();
    cout << movie1.getAverage(); //3.8
}

