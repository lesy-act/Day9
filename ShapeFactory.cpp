#include"ShapeFactory.h"
using namespace std;
#include<cstring>
Shape* ShapeFactory::createShape(int type, const std::string& s)
{
	switch (type)
	{
	case 0:
	{
		Shape* newShape = new Triangle();
		newShape->fromString(s);
		return newShape; 
		break;
	}
	case 1:
	{
		Shape* newShape = new Rectangle();
		newShape->fromString(s);
		return newShape;
		break;
	}
	case 2:
	{
		Shape* newShape = new Circle();
		newShape->fromString(s);
		return newShape;
		break;
	}
	case 3:
	{
		Shape* newShape = new Ellipse();
		newShape->fromString(s);
		return newShape;
		break;
	}
	}
}
std::list<Shape*> ShapeFactory::readShapesFromFile(const std::string& filename)
{
	
	std::list<Shape*>shapeList;
	std::string curentLine;
	std::vector<std::string>Lines;
	std::ifstream in(filename);
	if (in.is_open())
	{
		while (getline(in,curentLine))
		{
			Lines.push_back(curentLine);
		}
		for (auto index : Lines)
		{
			std::stringstream ss(index);
			std::string token;
			std::vector<std::string>newVec;
			while (ss >> token)
			{
				newVec.push_back(token);
			}
			shapeList.push_back(createShape(std::stoi(newVec[0]), index));
		}
	}
	return shapeList;
}
void ShapeFactory::saveShapesToFile(const std::string& filename, const std::list<Shape*>& shapes)
{
	std::ofstream out;
	out.open(filename, ios::out | ios::app);
	if (out)
	{
		for (auto index : shapes)
		{
			out<<index->toString()<<std::endl;
		}
	}
}