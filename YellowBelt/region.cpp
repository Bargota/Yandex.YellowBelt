#include "stdafx.h"
#include "region.h"
#include <string>
#include <algorithm>

bool operator==(Region lv, Region rv)
{
	//std::tuple<std::string, std::string, std::map<Lang, std::string>, int64_t> lv_tuple( lv.std_name,lv.parent_std_name,lv.names,lv.population );
	//std::tuple<std::string, std::string, std::map<Lang, std::string>, int64_t> rv_tuple(rv.std_name, rv.parent_std_name, rv.names, rv.population);
	std::tuple<std::string, std::string,  int64_t, std::map<Lang, std::string>> lv_tuple(lv.std_name, lv.parent_std_name, lv.population,lv.names);
	std::tuple<std::string, std::string,  int64_t, std::map<Lang, std::string>> rv_tuple(rv.std_name, rv.parent_std_name, rv.population,rv.names);

	//if ((lv.names == rv.names) && (lv.parent_std_name == rv.parent_std_name) && (lv.population == rv.population) && (lv.std_name == rv.std_name))
	if (lv_tuple==rv_tuple)
		return true;
	else
		return false;
}

//bool operator==(std::map<Lang, std::string> lv, std::map<Lang, std::string> rv)
//{
//	for (int i =0;i<lv.size();++i)
//	{
//		if (lv[i] != rv[i])
//		{
//			return false;
//		}
//	}
//	return true;
//}


bool operator==(std::tuple<std::string, std::string, std::map<Lang, std::string>, int64_t> lv, std::tuple<std::string, std::string, std::map<Lang, std::string>, int64_t> rv)
{
	if (lv == rv)
		return true;
	else 
	{
		return false;
	}
}

std::pair<int, std::string> FindMaxRepetitionCount(const std::vector<Region>& regions)
{
	std::vector<int> concurencess;
	if (regions.size() != 0)
	{
		for (int i = 0; i < regions.size()-1; ++i)
		{
			for (int j = i+1; j < regions.size(); ++j)
			{
				if (regions[i] == regions[j])
				{
					if (concurencess.size() ==i+1)
					{
						concurencess[i]++;
					}
					else
					{
						concurencess.push_back(2);
					}
				}
			}
		}
		if (concurencess.size() == 0)
		{
			return std::pair<int, std::string>(0, "Good");
		}
		else
		{
			return std::pair<int, std::string>(*std::max_element(concurencess.begin(), concurencess.end()), "Good");
		}
	}
	else
	{
		return std::pair<int, std::string>(-1, "Data is empty");
	}
}
