// YellowBelt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Read_file.h"


int main()
{
	readFile r("in.txt");
	r.number_and_text();
	
	system("pause");
    return 0;
}

