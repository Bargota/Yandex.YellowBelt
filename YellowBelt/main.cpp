// YellowBelt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <map>
#include <tuple>
#include <iostream>
#include <sstream>

#include "Read_file.h"
#include "AvrTemperature.h"
#include <iostream>
#include "CubeWeight_1week.h"
#include "region.h"
#include "TeamTasks.h"
#include "func_sqr_template.h"
#include <vector>
#include <map>
#include <string>
#include <tuple>
#include <iostream>




int main()
{
	/*readFile r("cube.txt");
	r.params_and_text();
	std::vector<std::string> data;
	r.getText(data);*/
	
	auto number = 6;
	std::cout<<"Number is " << number << std::endl;
	int square_number = Sqr(number);
	std::cout<< "Square of the number is "  << square_number<< std::endl;

	std::vector<double> v = { 1.5, 2.4, 3.7 };
	std::cout << "vector:";
	for (auto x : Sqr(v)) {
		std::cout << ' ' << x;
	}
	std::cout << std::endl;

	std::map<std::string, int> map_of_int = {
		{ "one", 1 },
		{ "two",2 }
	};
	std::cout << "map of :" << std::endl;
	for (const auto& x : Sqr(map_of_int)) {
		std::cout << x.first << ' ' << x.second  << std::endl;
	}

	std::pair<double, int> p_of_double_and_int = { 2.4,8 };
	std::pair<double, int> tmp_pair = Sqr(p_of_double_and_int);
	std::cout << "pair of double and int: " << tmp_pair.first << " " << tmp_pair.second << std::endl;


	std::map<int, std::pair<int, int>> map_of_pairs = {
		{ 4,{ 2, 2 } },
		{ 7,{ 4, 3 } }
	};
	std::cout << "map of pairs:" << std::endl;
	for (const auto& x : Sqr(map_of_pairs)) {
		std::cout << x.first << ' ' << x.second.first << ' ' << x.second.second << std::endl;
	}

	std::vector<std::map<std::string, std::pair<double, int>>> collection = {
		{{"one",{1.1,1}},{"two",{2.2,2}}},{ { "three",{ 3.3,3 } },{ "four",{ 4.4,4 } } }
	};
	auto tmp = Sqr(collection);


	system("pause");
    return 0;
}

