#include"Circle.h"
Circle::Circle()
{
	m_centerPoint = { 0,0 };
	m_Radius = 0;
}

Circle::Circle(const Point& centerPoint, const int Radius)
{
	m_centerPoint = centerPoint;
	m_Radius = Radius;
}

void Circle::setCenterPoint(const Point& centerPoint)
{
	m_centerPoint = centerPoint;
}

Point Circle::getCenterPoint()const
{
	return m_centerPoint;
}
void Circle::setRadius(const int Radius)
{
	m_Radius = Radius;
}
int Circle::getRadius()const
{
	return m_Radius;
}
double Circle::getPerimeter()
{
	return (2 * m_Radius) * 3.14;
}
double Circle::getArea()
{
	return (m_Radius * m_Radius) * 3.14;
}
void Circle::fromString(const std::string& s)
{
	std::stringstream ss(s);
	std::string token;
	std::vector<std::string>newVec;
	while (ss >> token)
	{
		newVec.push_back(token);
	}
	if (stoi(newVec[0]) == m_ID && newVec.size() == 4)
	{
		m_shapeInfo.first = newVec[0];
		newVec.erase(newVec.begin());
		m_centerPoint = { std::stoi(newVec[0]),std::stoi(newVec[1]) };
		m_Radius = { std::stoi(newVec[2])};
		m_shapeInfo.second = newVec;
	}
}
std::string Circle::toString()
{
	std::string res = std::to_string(m_ID)
		+ " "
		+ std::to_string(m_centerPoint.getX()) + " "
		+ std::to_string(m_centerPoint.getY()) + " "
		+ std::to_string(m_Radius);
	return res;
}