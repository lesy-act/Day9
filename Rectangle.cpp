#include"Rectangle.h"
Rectangle::Rectangle()
{
	m_height = 0;
	m_width = 0;
}

Rectangle::Rectangle(Point& centerPoint, int height, int width)
{
	m_centerPoint = centerPoint;
	m_height = height;
	m_width = width;
}

double Rectangle::getPerimeter()
{
	return(m_height + m_width) * 2;
}

double Rectangle::getArea()
{
	return m_height * m_width;
}

void Rectangle::fromString(const std::string& s)
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
		m_width = { std::stoi(newVec[2])};
		m_height = { std::stoi(newVec[3]) };
		m_shapeInfo.second = newVec;
	}
}

std::string Rectangle::toString()
{
	std::string res = std::to_string(m_ID) 
		+ " "
		+ std::to_string(m_centerPoint.getX()) + " "
		+ std::to_string(m_centerPoint.getY()) + " " 
		+ std::to_string(m_width) + " " 
		+ std::to_string(m_height);
	return res;
}

void Rectangle::setCenterPoint(const Point& p)
{
	m_centerPoint = p;
}

Point Rectangle::getCenterPoint()const
{
	return m_centerPoint;
}

void Rectangle::setHeight(const int height)
{
	m_height = height;
}

int Rectangle::getHeight()const
{
	return m_height;
}

void Rectangle::setWidth(const int width)
{
	m_width = width;
}

int Rectangle::getWidth()const
{
	return m_width;
}

