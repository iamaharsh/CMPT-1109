#include <iostream>
using namespace std;
#include <fstream>
int NEXT_CHAPTER = 18;
int get_next_number() {
    if (NEXT_CHAPTER == 0) {
        NEXT_CHAPTER = 18;
        return NEXT_CHAPTER--;
    }
    return NEXT_CHAPTER--;
}
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
        //cin.ignore();
        //string answer;

        char anAnswer[100];

        /*if (inStream >> answer)
            cout << answer << endl;
        else {
            inStream.close();
            inStream.open("answers.txt");
            inStream >> answer;
            cout << answer << endl;
        }
        inStream >> answer;

        cout << answer << endl;*/

        int counter = 0;
        bool ignore_the_N = false;
        inStream.get(anAnswer[counter++]);

        while (!inStream.eof()) {
            // I need to read the whole line
            if (anAnswer[counter - 1] == '\n') {
                //provide answer
                cout << anAnswer << endl;
                counter = 0;
            }
            else if (anAnswer[counter - 1] == '#') {
                // let us get the next number and 
                //it to the answer array
                int x = get_next_number();
                if (x >= 10) {
                    anAnswer[counter - 1] = '1';
                    anAnswer[counter] = (x - 10) + '0'; // '6'
                }
                else {
                    anAnswer[counter - 1] = x + '0';
                }
                ignore_the_N = true;
            }
            else if (ignore_the_N && anAnswer[counter - 1] == 'N') {
                counter--;
                inStream.get(anAnswer[counter]);
                continue;
            }
            //continue reading the character
            inStream.get(anAnswer[counter++]);
        }
    }

    return 77;
}
