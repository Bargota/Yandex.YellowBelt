#pragma once
#include "stdafx.h"
#include <string>
#include <vector>

class readFile
{
public:
	
	readFile(std::string path);


	bool number_and_text();
	
private:
	std::string m_path;
	std::vector <std::string> m_vec;

};
