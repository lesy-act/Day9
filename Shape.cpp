//#include"Shape.h"
//
//void Shape::fromString(const std::string& s)
//{
//	std::stringstream ss(s);
//	std::string token;
//	std::vector<std::string>newVec;
//	while (ss>>token)
//	{
//		newVec.push_back(token);
//	}
//	m_shapeInfo.first = newVec.at(0)+" ";
//	newVec.erase(newVec.begin());
//	m_shapeInfo.second = newVec;
//}
//
//void Shape::toString()
//{
//	std::ofstream file;
//	file.open("data.txt");
//	if (file.is_open())
//	{
//		file<<m_shapeInfo.first;
//		for (int index = 0; index < m_shapeInfo.second.size(); index++)
//		{
//			file << m_shapeInfo.second.at(index)+" ";
//		}
//	}
//}
//
//std::pair<std::string, std::vector<std::string>> Shape::getShapeInfo()
//{
//	return m_shapeInfo;
//}