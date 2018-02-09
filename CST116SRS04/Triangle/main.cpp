// Triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int main()
{
	int k;
	bool h;
	double s1;
	double s2;
	double s3;
	double a1;
	double a2;
	double a3;

	std::cout << "What do you know about the triangle? (note: A is angle. S is Side)" << std::endl << 
		"If you know AA type 0, AAS type 1, ASA type 2, SAS type 3, SSA type 4, SSS type 5" << std::endl;
	std::cin >> k;
	if (k == 0)
	{
		std::cout << "Please type your Angle values" << std::endl;
		std::cin >> a1 >> a2;
		std::cout << "The Third Angle = " << (180 - a1 - a2) << " degrees. Can not solve for sides";

	}
	if (k == 1)
	{
		std::cout << "Please type your Angles and your side." << std::endl;
		std::cin >> a1 >> a2 >> s1;
		double a3 = 180 - a1 - a2;
		double s2 = (s1*sin(a2))/sin(a1);
		double s3 = (s1*sin(a3)) / sin(a1);
		std::cout << "The Mising Parts are " << std::endl << "Angle 3 = " << a3 << " degrees" << std::endl <<
			"Side 2 = " << s2 << std::endl << "Side 3 = " << s3;
	}
	if (k == 2)
	{
		std::cout << "please type your known information in Angle ,side, angle," << std::endl;
		std::cin >> a1 >> s1 >> a2;
	}
    return 0;
}

