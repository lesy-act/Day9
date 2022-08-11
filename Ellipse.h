#ifndef ELLIPSE_H_
#define ELLIPSE_H_
#include"Shape.h"
#include"Point.h"
class Ellipse :public Shape,Point
{
private:
	int m_ID = 3;
	Point m_centerPoint;
	Point m_Radius;
public:
	Ellipse();
	Ellipse(const Point& centerPoint, const Point Radius);
	void setCenterPoint(const Point& centerPpoint);
	Point getCenterPoint()const;
	void setRadius(const Point& Radius);
	Point getRadius()const;
	double getPerimeter()override;
	double getArea()override;
	void fromString(const std::string& s)override;
	std::string toString()override;
};
#endif // !ELLIPSE_H_
