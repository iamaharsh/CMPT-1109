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
            cout << "Not correct score";
            
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
        return(terribleCount * 1 +
            badCount * 2 +
            okCount * 3 +
            goodCount * 4 +
            greatCount * 5) / 5.0;
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
    movie1.getName(); //300
    movie1.getMPAA(); //R
    cout << movie1.getAverage(); //2.6

    Movie movie2;
    movie2.setName("The GodFather"); 
    movie2.setMPAA("PG-13");
    movie2.addRating(1);
    movie2.addRating(3);
    movie2.addRating(5);
    movie2.addRating(5);
    movie2.addRating(5);
    movie2.getName(); //The Godfather
    movie2.getMPAA(); //PG-13
    cout << movie1.getAverage(); //3.8
    return 0;
}

