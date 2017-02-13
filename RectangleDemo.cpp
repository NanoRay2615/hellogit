#include <iostream>
#include <vector>
#include "MyRectangle.h"
using namespace std;

int linearSearch(auto data, auto key);//prototype

int main()
{
	int size = 4;
	int count=0;
	
	vector <MyRectangle> V;


	MyRectangle Rec1;
	
		
	
	Rec1.setlength(12);
	Rec1.setwidth(12);
	V.push_back(Rec1);
	
	Rec1.setlength(14);
	Rec1.setwidth(10);
	V.push_back(Rec1);
	
	Rec1.setlength(10);
	Rec1.setwidth(8.5);
	V.push_back(Rec1);
	
	Rec1.setlength(20);
	Rec1.setwidth(10.5);
	V.push_back(Rec1);

	int result = linearSearch(V,10);
	
	for (int i = 0; i < V.size(); i++)
	{ cout << "The area for each rectangle is: " << V[i].CalArea()<< endl;
}
cout << "The linear search found at index: " << result << endl;
}

int linearSearch(auto Data,auto key)
  {
	for (int i=0; i < Data.size(); i++)
	{
	if (Data[i].getlength() == key)
	{
	return i;
	}
 }
return -1;
}
	


	

		
	


