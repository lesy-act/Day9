#ifndef CIRCLE_H_
#define CIRCLE_H_
#include"Point.h"
#include"Shape.h"
class Circle :public Shape
{
private:
	int m_ID = 2;
	Point m_centerPoint;
	int m_Radius;
public:
	Circle();
	Circle(const Point& centerPoint, const int Radius);
	void setCenterPoint(const Point& centerPoint);
	Point getCenterPoint()const;
	void setRadius(const int Radius);
	int getRadius()const;
	double getPerimeter()override;
	double getArea()override;
	void fromString(const std::string& s)override;
	std::string toString()override;
};
#endif // !CIRCLE_H_
