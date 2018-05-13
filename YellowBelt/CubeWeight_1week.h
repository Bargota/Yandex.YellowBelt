#pragma once
#include "stdafx.h"
#include <string>
#include <vector>

class Cube
{
public:
	Cube(std::string data,std::string density);
	int getWeight();

private:
	void CalcWeight(int density);

	int m_density;
	int m_weight;
	int m_length;
	int m_width;
	int m_height;
};