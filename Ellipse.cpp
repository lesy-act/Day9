#include"Ellipse.h"
Ellipse::Ellipse()
{
	m_centerPoint = { 0,0 };
	m_Radius = {0,0};
}
Ellipse::Ellipse(const Point& centerPoint, const Point Radius)
{
	m_centerPoint = centerPoint;
	m_Radius = Radius;
}
void Ellipse::setCenterPoint(const Point& centerPoint)
{
	m_centerPoint = centerPoint;
}
Point Ellipse::getCenterPoint()const
{
	return m_centerPoint;
}
void Ellipse::setRadius(const Point& Radius)
{
	m_Radius = Radius;
}
Point Ellipse::getRadius()const
{
	return m_Radius;
}
double Ellipse::getPerimeter()
{
	double r = std::sqrt(pow(m_Radius.getX(), 2) + pow(m_Radius.getY(), 2));
	return r * 4;
}
double Ellipse::getArea()
{
	return (m_Radius.getX() * m_Radius.getY()) / 2;
}
void Ellipse::fromString(const std::string& s)
{
	std::stringstream ss(s);
	std::string token;
	std::vector<std::string>newVec;
	while (ss >> token)
	{
		newVec.push_back(token);
	}
	if (stoi(newVec[0]) == m_ID && newVec.size() == 5)
	{
		m_shapeInfo.first = newVec[0];
		newVec.erase(newVec.begin());
		m_centerPoint = { std::stoi(newVec[0]),std::stoi(newVec[1]) };
		m_Radius = { std::stoi(newVec[2]) ,std::stoi(newVec[3]) };
		m_shapeInfo.second = newVec;
	}
}
std::string Ellipse::toString()
{
	std::string res = std::to_string(m_ID)
		+ " "
		+ std::to_string(m_centerPoint.getX()) + " "
		+ std::to_string(m_centerPoint.getY()) + " "
		+ std::to_string(m_Radius.getX())+ " "
		+ std::to_string(m_Radius.getY());
	return res;
}