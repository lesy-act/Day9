#ifndef POINT_H_
#define POINT_H_
#include<cmath>
#include<iostream>
class Point
{
private:
	int m_x;
	int m_y;
public:
	Point();
	Point(int x, int y);
	Point(const Point& obj);
	void setX(int x);
	void setY(int y);
	int getX()const;
	int getY()const;
	~Point();
	Point operator+(const Point& secondPoint);
	Point operator-(const Point& secondPoint);
	Point operator*(const Point& secondPoint);
	Point operator/(const Point& secondPoint);
	Point operator+=(const Point& secondPoint);
	Point operator-=(const Point& secondPoint);
	Point operator*=(const Point& secondPoint);
	Point operator/=(const Point& secondPoint);
	static double getDistance(const Point& firstPoint, const Point& secondPoint);
};

#endif // !POINT_H_

