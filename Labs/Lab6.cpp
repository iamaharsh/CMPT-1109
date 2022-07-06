#include <iostream>
using namespace std;

const int ROWS = 4;
int COLUMNS_PER_ROW[ROWS] = { 5,6,4,3 };
int** arr;
void display();
int main()
{
    arr = new int* [ROWS];
    arr[0] = new int[5];
    arr[1] = new int[6];
    arr[2] = new int[4];
    arr[3] = new int[3];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS_PER_ROW[i]; j++) {
            arr[i][j] = 0;
        }
    }


    int menuchoice;
    do {
        
        cout << "1: Login User \n2: Logoff a user\n3: Search User\n4: Exit" << endl;
        cin >> menuchoice;
        switch (menuchoice) {
        case 1: {
            int user_id = 49193;
            int machine = 2;
            int lab = 3;
            cout << "enter id, lab & machine" << endl;
            cin >> user_id >> lab >> machine;
            arr[lab - 1][machine - 1] = user_id;
            display();
            break;
        }
              /*case 2: {

              }
              case 3: {

              }*/
        default:
            break;
        }
    }while (menuchoice != 4);

    delete [] arr[0];
    delete [] arr[1];
    delete [] arr[2];
    delete [] arr[3];
    delete[] arr;

    return 0;
}

void display() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS_PER_ROW[i]; j++) {
            if (arr[i][j] == 0)
                cout << "empty";
            else
                cout << arr[i][j] << " ";
        }cout << endl;
    }
}
