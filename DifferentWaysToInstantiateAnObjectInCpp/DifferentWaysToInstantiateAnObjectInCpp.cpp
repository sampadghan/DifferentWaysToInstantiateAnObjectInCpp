#include <iostream>
#include "Point.h"

int main()
{
	//std::cout << "Hello World!\n";
	//1)creating object
	Point p;
	Point my;
	//2)Creating object with default constructor static
	Point p1(10,20);
	Point myp1(30,40);
	//3)Creating object with default constructor dynamic
	Point* p2 = new Point();
	//deleteing it
	delete p2;
	//setting it to null pointer
	p2 = nullptr;
	//4)
	Point p3 = Point(1,1);
	Point myp3 = Point(2,2);
	return 0;
}