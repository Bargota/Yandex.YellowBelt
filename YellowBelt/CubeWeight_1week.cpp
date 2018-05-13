#include "stdafx.h"
#include "CubeWeight_1week.h"
#include <sstream>

Cube::Cube(std::string data, std::string density)
{
	m_density = std::stoi(density);

	std::stringstream ss(data);
	for (int i = 0; i < 3; ++i)
	{
		std::string tmp;
		ss >> tmp;
		switch (i)
		{
		case 0: m_length = std::stoi(tmp);
			break;
		case 1: m_width = std::stoi(tmp);
			break;
		case 2: m_height = std::stoi(tmp);
			break;
		default:
			break;
		}
	}

	CalcWeight(m_density);
}

void Cube::CalcWeight(int density)
{
	m_weight=m_length*m_width*m_height*density;
	
}

int Cube::getWeight()
{
	return m_weight;
}
