#include <iostream>
using namespace std;
class Movie {
private:
    string name;
    string mpaaRating;
    // declaring dyanmic array
    int *arr;
    
public:
    Movie(string nameInput, string MPAAinput) {
        name = nameInput;
        mpaaRating = MPAAinput;
        //intiliazing dynamic array
        arr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    Movie() {
        //intiliazing dynamic array
         arr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    void addRating(int category) {
        if (category < 1 || category > 5)
        {
            cout << "Bad category. Plz try again" << endl;
        }
        else
            arr[category - 1]++;
            
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
        int sum = 0;
        int sum2 = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += arr[i] * (i+1);
            sum2 += arr[i];
        }
        return sum/(sum2*1.0);
        
    }
    //copy constructor
    Movie(Movie &y){
        //deep copy
        this->arr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            this->arr[i] = y.arr[i];
        }
        
    }
    //Operator Equal Member function
    void operator=(Movie x){
        for (int i = 0; i < 5; i++)
        {
            this->arr[i] = x.arr[i];
        }
        
    }
    ~Movie(){
        delete []arr;
    }
};
int main(){
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

    //Deep Copying
    movie1 = movie2;
    movie1.addRating(5);
    cout << movie1.getAverage()<< endl; //4
    cout << movie2.getAverage()<< endl; //3.8
    return 0;
}