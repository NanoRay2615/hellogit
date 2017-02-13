#include <iostream>
#include "MyRectangle.h"


	
	void MyRectangle::setlength(int l)
	{
		length = l;
	}

	void MyRectangle::setwidth(double w)
	{
		width = w;
	}

	int MyRectangle::getlength()
	{
		return length;
	}

	double MyRectangle::getwidth()
	{
		return width;
	}

	double MyRectangle::CalArea()
	{
		double total;
		total = length * width;
		return total;
	}

	MyRectangle::MyRectangle()
	{
		length = 0;
		width = 0;

	}


