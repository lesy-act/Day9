#include"ShapeFactory.h"
#include<iomanip>
int main()
{
	ShapeFactory s;
	std::list<Shape*>myList = s.readShapesFromFile("in.txt");
	for (auto index : myList)
	{
		std::cout <<"Perimeter:     "<<index->getPerimeter() << std::endl;
		std::cout <<"Area:          " << index->getArea() << std::endl;
		std::cout << "-----------------------------" << std::endl;
	}
	s.saveShapesToFile("out.txt",myList);
	return 0;
}