#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include"Shape.h"
#include"Point.h"

class Rectangle :public Shape
{
private:
	int m_ID = 1;
	Point m_centerPoint;
	int m_height;
	int m_width;
public:
	Rectangle();
	Rectangle(Point& centerPoint, int height, int width);
	double getPerimeter()override;
	double getArea()override;
	void fromString(const std::string& s)override;
	std::string toString()override;
	void setCenterPoint(const Point& p);
	Point getCenterPoint()const;
	void setHeight(const int height);
	int getHeight()const;
	void setWidth(const int width);
	int getWidth()const;
};
#endif // !RECTANGLE_H_
