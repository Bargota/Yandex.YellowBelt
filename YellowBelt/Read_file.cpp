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
		while (in)
		{
			std::string str_tmp;
			std::getline(in, str_tmp);
			m_vec.push_back(str_tmp);

			std::cout << str_tmp << std::endl;
		}
		return true;
	}
	return false;
}

