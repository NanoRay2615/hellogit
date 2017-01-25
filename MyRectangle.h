#ifndef MyRectangle
#define MyRectangle

class MyRectangle
{
private:
	int length;
	double width;

public:
	MyRectangle();
	void setlength(int);
	int getlength();
	void setwidth(double);
	double getwidth();
	double CalArea();
};
#endif
