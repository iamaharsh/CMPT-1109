#include <iostream>
using namespace std;
class Movie {
private:
    string name;
    string mpaaRating;
    int terribleCount;
    int badCount;
    int okCount;
    int goodCount;
    int greatCount;
public:
    Movie(string nameInput, string MPAAinput) {
        name = nameInput;
        mpaaRating = MPAAinput;
        terribleCount = 0;
        badCount = 0;
        okCount = 0;
        goodCount = 0;
        greatCount = 0;
    }
    Movie() {
        terribleCount = 0;
        badCount = 0;
        okCount = 0;
        goodCount = 0;
        greatCount = 0;
    }
    void addRating(int category) {
        if (category == 1)
            terribleCount++;
        else if (category == 2)
            badCount++;
        else if (category == 3)
            okCount++;
        else if (category == 4)
            goodCount++;
        else if (category == 5)
            greatCount++;
        else
            cout << "Not correct category please try again." << endl;
            
    }
    void setName(string a) {
        name = a;
    }
    void setMPAA(string a) {
        mpaaRating = a;
    }
    string getName() {
        return name;
    }
    string getMPAA() {
        return mpaaRating;
    }
    double getAverage() {
        return(terribleCount * 1.0 +
            badCount * 2.0 +
            okCount * 3.0 +
            goodCount * 4.0 +
            greatCount * 5.0) / 5.0;
    }
};


int main()
{
    Movie movie1("300", "R");
    movie1.addRating(1);
    movie1.addRating(1);
    movie1.addRating(3);
    movie1.addRating(3);
    movie1.addRating(5);
    cout << movie1.getName() << endl; //300
    cout << movie1.getMPAA() << endl;  //R
    cout << movie1.getAverage() << endl;  //2.6

    Movie movie2;
    movie2.setName("The GodFather"); 
    movie2.setMPAA("PG-13");
    movie2.addRating(1);
    movie2.addRating(3);
    movie2.addRating(5);
    movie2.addRating(5);
    movie2.addRating(5);
    cout << movie2.getName() << endl;  //The Godfather
    cout << movie2.getMPAA() << endl;  //PG-13
    cout << movie2.getAverage() << endl;  //3.8
    return 0;
}

