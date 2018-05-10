#pragma once
#include "stdafx.h"
#include <vector>
#include <string>


class Temperature
{
public:
	double GetAvrTemp();
	void SetTemps(std::vector<std::string> vec_temps);
	//double avrTempCalc();
	void AddTemp(int t);
	std::vector<int> AboveTheAverageValue();
	std::vector<int> AboveTheAverageNumber();

	void Run(std::vector<std::string> vec_temps);

private:
	void avrTempCalc();

	int m_temp;
	std::vector<double> m_temps;
	double m_avrTemp;
};