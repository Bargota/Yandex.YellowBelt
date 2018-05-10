#include "stdafx.h"
#include "AvrTemperature.h"
#include <iostream>

void Temperature::SetTemps(std::vector<std::string> vec_temps)
{
	//std::vector<int> vec_temps_int;
	for (auto item:vec_temps)
	{
		m_temps.push_back(std::stoi(item));
	}
	avrTempCalc();
}

void Temperature::avrTempCalc()
{
	if (m_temps.size() != 0)
	{
		double sum=0;
		for (auto item : m_temps)
		{
			sum += item;
		}
		m_avrTemp = sum / m_temps.size();
	}
	else
	{
		std::cout << "Add temperature value" << std::endl;
	}
}

double Temperature::GetAvrTemp()
{
	return m_avrTemp;
}

std::vector<int> Temperature::AboveTheAverageValue()
{
	std::vector<int> out_vec;
	for (auto item : m_temps)
	{
		if (item > m_avrTemp)
		{
			out_vec.push_back(item);
		}
	}
	return out_vec;
}

std::vector<int> Temperature::AboveTheAverageNumber()
{
	std::vector<int> out_vec;
	for (int i=0;i<m_temps.size();++i)
	{
		if (m_temps[i] > m_avrTemp)
		{
			out_vec.push_back(i);
		}
	}
	return out_vec;
}

void Temperature::Run(std::vector<std::string> vec_temps)
{
	SetTemps(vec_temps);
	std::cout << "Average temperature = " << m_avrTemp << std::endl;
	std::vector<int> tmp = AboveTheAverageNumber();
	for (auto item : tmp)
	{
	std::cout << item << " ";
	}
	std::cout << std::endl;
}