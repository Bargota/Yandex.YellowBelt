// YellowBelt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Read_file.h"
#include "AvrTemperature.h"
#include <iostream>
#include "CubeWeight_1week.h"
#include "region.h"
#include "TeamTasks.h"

int main()
{
	/*readFile r("cube.txt");
	r.params_and_text();
	std::vector<std::string> data;
	r.getText(data);
	std::vector<std::string> p;
	r.getParams(p);*/

	TeamTasks t;
	t.AddnewTasks("Vova");
	t.AddnewTasks("Ade");
	t.AddnewTasks("Vova");
	t.PerformPersonTasks("Ade", 89);
	system("pause");
    return 0;
}

