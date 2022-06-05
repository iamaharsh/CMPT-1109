#include <iostream>
using namespace std;
void draw_lefttriangle(int s, char c);
void draw_righttriangle(int s, char c);
void draw_triangle(int s, char c);
void draw_upsidedowntriangle(int s, char c);
void draw_diamond(int s, char c);
int main()
{
	int choice;
	int size;
	char character;

	cout << "Press 1 to draw a triangle, 2 to draw a diamond: ";
	cin >> choice;

	cout << endl << "What type of character do you want to draw with: ";
	cin >> character;

	cout << endl << "Enter the size of your shape: ";
	cin >> size;
	
	if (choice == 1)
		draw_triangle(size, character);
	else if(choice == 2)
		draw_diamond(size, character);
	return 0;
	
}
void draw_lefttriangle(int s, char c){
	for (int i = 0; i < s; i++) {
		for (int j = s-1; j > i; j--)
			cout << ' ';
		for (int k = 0; k <= i; k++)
			cout << c;
		cout << endl;
	}
}

void draw_righttriangle(int s, char c) {
	for (int i = 0; i < s; i++) {
		for (int j = 0; j <= i; j++)
			cout << c;
		cout << endl;
	}
}

void draw_triangle(int s, char c) {
	for (int i = 0; i < s; i++) {
		for (int j = s-1; j > i; j--)
			cout << ' ';
		for (int k = 0; k <= i; k++)
			cout << c;
		if (i > 0) {
			for (int l = 1; l <= i; l++)
				cout << c;
		}
		cout << endl;
	}
}
void draw_upsidedowntriangle(int s, char c) {
	for (int i = 0; i < s; i++) {
		for (int j = 0; j <= i; j++)
			cout << ' ';
		for (int k = s-1; k >= i; k--)
			cout << c;
		for (int l = s-1; l > i; l--)
			cout << c;
		cout << endl;
	}
}
void draw_diamond(int s, char c){
	draw_triangle(s, c);
	draw_upsidedowntriangle(s-1, c);
}
