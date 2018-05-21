#pragma once
#include "stdafx.h"
#include <string>
#include <map>
#include <vector>



enum class Lang{DE, FR, IT};

struct Region
{
	std::string std_name;
	std::string parent_std_name;
	std::map < Lang, std::string> names;
	int64_t population;

	

};

bool operator==(Region lv,Region rv);
bool operator==(std::tuple<std::string, std::string, std::map<Lang, std::string>, int64_t> lv, std::tuple<std::string, std::string, std::map<Lang, std::string>, int64_t> rv);
//bool operator==(std::map<Lang, std::string> lv, std::map<Lang, std::string> rv);

std::pair<int,std::string> FindMaxRepetitionCount(const std::vector<Region>& regions);

class RegionData
{
public:
	const std::vector<Region> reg1 = { {
			"Moscow",
			"Russia",
			{ { Lang::DE, "Moskau" },{ Lang::FR, "Moscou" },{ Lang::IT, "Mosca" } },
			89
		},{
			"Russia",
			"Eurasia",
			{ { Lang::DE, "Russland" },{ Lang::FR, "Russie" },{ Lang::IT, "Russia" } },
			89
		},{
			"Moscow",
			"Russia",
			{ { Lang::DE, "Moskau" },{ Lang::FR, "Moscou" },{ Lang::IT, "Mosca" } },
			89
		},{
			"Moscow",
			"Russia",
			{ { Lang::DE, "Moskau" },{ Lang::FR, "Moscou" },{ Lang::IT, "Mosca" } },
			89
		},{
			"Russia",
			"Eurasia",
			{ { Lang::DE, "Russland" },{ Lang::FR, "Russie" },{ Lang::IT, "Russia" } },
			89
		} };
	const std::vector<Region> reg2 = {
		{
			"Moscow",
			"Russia",
			{ { Lang::DE, "Moskau" },{ Lang::FR, "Moscou" },{ Lang::IT, "Mosca" } },
			89
		},{
			"Russia",
			"Eurasia",
			{ { Lang::DE, "Russland" },{ Lang::FR, "Russie" },{ Lang::IT, "Russia" } },
			89
		},{
			"Moscow",
			"Russia",
			{ { Lang::DE, "Moskau" },{ Lang::FR, "Moscou deux" },{ Lang::IT, "Mosca" } },
			89
		},{
			"Moscow",
			"Toulouse",
			{ { Lang::DE, "Moskau" },{ Lang::FR, "Moscou" },{ Lang::IT, "Mosca" } },
			89
		},{
			"Moscow",
			"Russia",
			{ { Lang::DE, "Moskau" },{ Lang::FR, "Moscou" },{ Lang::IT, "Mosca" } },
			31
		},
	};
};