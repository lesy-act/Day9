#ifndef SHAPE_H_
#define	SHAPE_H_
#include<string>
#include<sstream>
#include<vector>
#include<fstream>
#include <utility>
class Shape
{
public:
	std::pair<std::string,std::vector<std::string>>m_shapeInfo;
public:
	virtual double getPerimeter() = 0;
	virtual double getArea() = 0;
	virtual void fromString(const std::string &s) = 0;
	virtual std::string toString() = 0;
	//virtual std::pair<std::string, std::vector<std::string>> getShapeInfo();
};
#endif // !SHAPE_H_
