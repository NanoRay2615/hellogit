#ifndef MyRectangle
#define MyRectangle_H

class MyRectangle
{
private:
	int length;
	double width;

public:
	
	void setlength(int);
	int getlength();
	void setwidth(double);
	double getwidth();
	double CalArea();
	MyRectangle();
};
#endif
