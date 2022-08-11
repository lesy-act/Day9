#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_
#include"Point.h"
#include"Shape.h"
#include"Triangle.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Ellipse.h"
#include <iterator>
#include<list>

class ShapeFactory
{
public:
	Shape* createShape(int type, const std::string& s);
	std::list<Shape*> readShapesFromFile(const std::string& filename);
	void saveShapesToFile(const std::string& filename, const std::list<Shape*>& shapes);
};
#endif // !SHAPEFACTORY_H_
