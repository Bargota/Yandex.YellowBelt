#include "stdafx.h"
#include "Read_file.h"
#include <iostream>
#include <fstream>



readFile::readFile(std::string path)
{
	m_path = path;
};


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
