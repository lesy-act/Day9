#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include"Shape.h"
#include"Point.h"
class Triangle :public Shape,Point
{
private:
	int m_ID = 0;
	Point m_PointA;
	Point m_PointB;
	Point m_PointC;
public:
	Triangle();
	Triangle(Point& pointA, Point& pointB, Point& pointC);
	double getPerimeter()override;
	double getArea()override;
	void fromString(const std::string& s)override;
	std::string toString()override;
	void setPointA(const Point& pA);
	void setPointB(const Point& pB);
	void setPointC(const Point& pC);
	Point getPointA()const;
	Point getPointB()const;
	Point getPointC()const;
};


#endif // !TRIANGLE_H_
