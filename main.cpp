#include"Point.h"
int main()
{
	Point p1(3, 4);
	Point p2(4, 3);
	std::cout << Point::getDistance(p1,p2);
	return 0;
}