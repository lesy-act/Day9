#include"Point.h"
Point::Point()
{
	m_x = 0;
	m_y = 0;
}

Point::Point(int x, int y)
{
	m_x = x;
	m_y = y;
}

Point::Point(const Point&obj)
{
	m_x = obj.m_x;
	m_y = obj.m_y;
}

Point::~Point()
{

}

void Point::setX(int x) 
{
	m_x = x;
}

void Point::setY(int y)
{
	m_y = y;
}

int Point::getX()const
{
	return m_x;
}

int Point::getY()const
{
	return m_y;
}
Point Point::operator+(const Point& secondPoint)
{
	m_x += secondPoint.m_x;
	m_y += secondPoint.m_y;
	return *this;
}

Point Point::operator-(const Point& secondPoint)
{
	m_x -= secondPoint.m_x;
	m_y -= secondPoint.m_y;
	return *this;
}

Point Point::operator*(const Point& secondPoint)
{
	m_x *= secondPoint.m_x;
	m_y *= secondPoint.m_y;
	return *this;
}

Point Point::operator/(const Point& secondPoint)
{
	if (secondPoint.m_x != 0 || secondPoint.m_y != 0)
	{
		m_x /= secondPoint.m_x;
		m_y /= secondPoint.m_y;
		return *this;
	}
	std::cout << "Division by zero" << std::endl;
	return Point();

}

Point Point::operator+=(const Point& secondPoint)
{
	m_x = m_x + secondPoint.m_x;
	m_y = m_y + secondPoint.m_y;
	return *this;
}

Point Point::operator-=(const Point& secondPoint)
{
	m_x = m_x - secondPoint.m_x;
	m_y = m_y - secondPoint.m_y;
	return *this;
}

Point Point::operator*=(const Point& secondPoint)
{
	m_x = m_x * secondPoint.m_x;
	m_y = m_y * secondPoint.m_y;
	return *this;
}

Point Point::operator/=(const Point& secondPoint)
{
	if (secondPoint.m_x != 0 || secondPoint.m_y != 0)
	{
		m_x = m_x / secondPoint.m_x;
		m_y = m_y / secondPoint.m_y;
		return *this;
	}
	std::cout << "Division by zero" << std::endl;
	return Point();

}

double Point::getDistance(const Point& firstPoint, const Point& secondPoint)
{
	int x = secondPoint.m_x - firstPoint.m_x;
	int y = secondPoint.m_y - firstPoint.m_y;
	return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
}
