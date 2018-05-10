// YellowBelt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Read_file.h"
#include "AvrTemperature.h"
#include <iostream>


int main()
{
	readFile r("in.txt");
	r.number_and_text();
	std::vector<std::string> data;
	r.getText(data);

	Temperature t;
	t.Run(data);
	
	system("pause");
    return 0;
}

