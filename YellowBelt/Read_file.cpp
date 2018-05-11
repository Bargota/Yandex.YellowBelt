#include "stdafx.h"
#include "Read_file.h"
#include <iostream>
#include <fstream>
#include <sstream>


readFile::readFile(std::string path)
{
	m_path = path;
};


bool readFile::params_and_text()
{
	if (m_path != "")
	{
		std::ifstream in(m_path);

		std::string first_str;
		std::getline(in, first_str);
		std::stringstream ss(first_str);
		while (ss)
		{
			std::string tmp;
			ss >> tmp;
			if (tmp != "")
			{
				m_params.push_back(tmp);
			}
		}
				
		while (in)
		{
			std::string str_tmp;
			std::getline(in, str_tmp);
			if (str_tmp != "")
			{
				m_vec.push_back(str_tmp);
				std::cout << str_tmp << std::endl;
			}
		}
		return true;
	}
	return false;
}

bool readFile::number_and_text()
{
	if (m_path != "")
	{
 		std::ifstream in(m_path);
		int N;
		in >> N;
		for(int i=0;i<N+1;++i)
		{			
			std::string str_tmp;
			std::getline(in, str_tmp);
			if (i != 0)
			{
				m_vec.push_back(str_tmp);
				std::cout << str_tmp << std::endl;
			}
		}
		return true;
	}
	return false;
}

void readFile::getText(std::vector<std::string>& vec)
{
	if (m_vec.size() != 0)
	{
		for (auto item : m_vec)
		{
			vec.push_back(item);
		}
	}
	else
	{
		std::cout << "First use readFile.number_and_text()" << std::endl;
	}	
}

void readFile::getParams(std::vector<std::string>& params)
{
	for (auto item : m_params)
	{
		params.push_back(item);
	}
}