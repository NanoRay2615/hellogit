#include <iostream>
#include <vector>
#include "MyRectangle.h"
using namespace std;

int main()
{
	vector <MyRectangle> V;
	MyRectangle Rec1;
	cout << "Enter length: " << Rec1.getlength() << endl;
	int length1;
	cin >> length1;
	Rec1.setlength(length1);

	
	cout << "Enter width: " << Rec1.getwidth() << endl;
	int width1;
	cin >> width1;
	Rec1.setwidth(width1);

	Rec1.CalArea();

	V.push_back(Rec1);

	MyRectangle Rec2;
	cout << "Enter length: " << Rec2.getlength() << endl;
	int length2;
	cin >> length2;
	Rec2.setlength(length2);


	cout << "Enter width: " << Rec2.getwidth() << endl;
	int width2;
	cin >> width2;
	Rec2.setwidth(width2);
	Rec2.CalArea();
	V.push_back(Rec2);

	MyRectangle Rec3;
	cout << "Enter length: " << Rec3.getlength() << endl;
	int length3;
	cin >> length3;
	Rec3.setlength(length3);


	cout << "Enter width: " << Rec3.getwidth() << endl;
	int width3;
	cin >> width3;
	Rec3.setwidth(width3);
	Rec3.CalArea();
	V.push_back(Rec3);

	MyRectangle Rec4;
	cout << "Enter length: " << Rec4.getlength() << endl;
	int length4;
	cin >> length4;
	Rec4.setlength(length4);


	cout << "Enter width: " << Rec4.getwidth() << endl;
	int width4;
	cin >> width4;
	Rec4.setwidth(width4);
	Rec4.CalArea();
	V.push_back(Rec4);


	
		cout << "The area for each rectangle is: " << Rec1.CalArea() << endl;
		cout << "The area for each rectangle is: " << Rec2.CalArea() << endl;
		cout << "The area for each rectangle is: " << Rec3.CalArea() << endl;
		cout << "The area for each rectangle is: " << Rec4.CalArea() << endl;
	

	}
