#include "stdafx.h"
#include "CubeWeight_1week.h"
#include <sstream>

Cube::Cube(std::string data, int density)
{
	std::stringstream ss(data);
	for (int i = 0; i < 3; ++i)
	{
		std::string tmp;
		ss >> tmp;
		
	}

	CalcWeight();
}

int Cube::CalcWeight()
{
	return m_weight*m_length*m_width*m_height;
}