#pragma once
#include "stdafx.h"
#include <string>
#include <vector>

class readFile
{
public:
	
	readFile(std::string path);

	void getText(std::vector<std::string>& vec);
	void getParams(std::vector<std::string>& params);
	bool number_and_text();
	bool params_and_text();
	

	
private:
	std::vector<std::string> m_params;
	std::string m_path;
	std::vector <std::string> m_vec;

};
