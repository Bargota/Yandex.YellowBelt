// YellowBelt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Read_file.h"
#include "AvrTemperature.h"
#include <iostream>
#include "CubeWeight_1week.h"

int main()
{
	readFile r("cube.txt");
	r.params_and_text();
	std::vector<std::string> data;
	r.getText(data);
	std::vector<std::string> p;
	r.getParams(p);

	//Temperature t;
	//t.Run(data);

	for (auto item : data)
	{
		int i = 1;
		Cube c(item, p[1]);
		std::cout<<"weight cube numder "<<i<<" = " << c.getWeight() << std::endl;
		i++;
	}
	
	system("pause");
    return 0;
}

