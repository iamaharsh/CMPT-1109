#include <iostream>
using namespace std;

const int ROWS = 4;
int COLUMNS_PER_ROW[ROWS] = { 5,4,6,3 };
int main()
{
    int menuchoice;
    cout << "1: Login User \n2: Logoff a user\n3: Search User";
    cin >> menuchoice;

    int** arr = new int* [ROWS];
    arr[0] = new int[5];
    arr[1] = new int[6];
    arr[2] = new int[4];
    arr[3] = new int[3];

    int user_id = 49193;
    int machine = 2;
    int lab = 3;

    //simulate a login operation
    arr[lab - 1][machine - 1] = user_id;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS_PER_ROW[i]; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    return 0;
}

