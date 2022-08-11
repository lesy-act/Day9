#include"Triangle.h"
Triangle::Triangle()
{
	m_PointA = { 0,0 };
	m_PointB = { 0,0 };
	m_PointC = { 0,0 };
}
Triangle::Triangle(Point& pointA, Point& pointB, Point& pointC)
{
	m_PointA = pointA;
	m_PointB = pointB;
	m_PointC = pointC;
}
double Triangle::getPerimeter()
{
	double a = getDistance(m_PointA, m_PointB);
	double b = getDistance(m_PointA, m_PointC);
	double c = getDistance(m_PointC, m_PointB);
	return a + b + c;
}
double Triangle::getArea()
{
	double a = getDistance(m_PointA, m_PointB);
	double b = getDistance(m_PointA, m_PointC);
	double c = getDistance(m_PointC, m_PointB);
	double s = (a + b + c) / 2;
	return std::sqrt(s * (s - a) * (s - b) * (s - c));
}
void Triangle::fromString(const std::string& s)
{
	std::stringstream ss(s);
	std::string token;
	std::vector<std::string>newVec;
	while (ss >> token)
	{
		newVec.push_back(token);
	}
	if (stoi(newVec[0]) == m_ID && newVec.size() == 7)
	{
		m_shapeInfo.first = newVec[0];
		newVec.erase(newVec.begin());
		m_PointA = { std::stoi(newVec[0]),std::stoi(newVec[1]) };
		m_PointB = { std::stoi(newVec[2]),std::stoi(newVec[3]) };
		m_PointC = { std::stoi(newVec[4]),std::stoi(newVec[5]) };
		m_shapeInfo.second = newVec;
	}
}
std::string Triangle::toString()
{
	std::string res = std::to_string(m_ID)
		+ " "
		+ std::to_string(m_PointA.getX()) + " "
		+ std::to_string(m_PointA.getY()) + " "
		+ std::to_string(m_PointB.getX()) + " "
		+ std::to_string(m_PointB.getY()) + " "
		+ std::to_string(m_PointC.getX()) + " "
		+ std::to_string(m_PointC.getY());
	return res;
}
void Triangle::setPointA(const Point& pA)
{
	m_PointA = pA;
}
void Triangle::setPointB(const Point& pB)
{
	m_PointB = pB;
}
void Triangle::setPointC(const Point& pC)
{
	m_PointC = pC;
}
Point Triangle::getPointA()const
{
	return m_PointA;
}
Point Triangle::getPointB()const
{
	return m_PointB;
}
Point Triangle::getPointC()const
{
	return m_PointC;
}
