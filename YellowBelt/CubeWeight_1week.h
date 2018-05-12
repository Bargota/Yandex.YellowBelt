#pragma once
#include "stdafx.h"
#include <string>
#include <vector>

class Cube
{
public:
	Cube(std::string data,int density);

private:
	int CalcWeight();

	int m_weight;
	int m_length;
	int m_width;
	int m_height;
};