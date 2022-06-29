#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    ifstream inStream;
    inStream.open("answers.txt");
    if (inStream.fail()) {
        cout << "Something is wrong!" << endl;
    }
    else {
        cout << "Everything is ok." << endl;
    }

    while (true) {
        cout << "Plz, enter your next next question" << endl;
        string question;
        cin >> question;

        string answer;
        if (inStream >> answer)
            cout << answer << endl;
        else {
            inStream.close();
            inStream.open("answers.txt");
            inStream >> answer;
            cout << answer << endl;
        }
        //inStream >> answer;

        //cout << answer << endl;
    }

    return 0;
}
