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

int FindMaxRepetitionCount(const std::vector<Region>& regions);

class RegionData
{
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
};