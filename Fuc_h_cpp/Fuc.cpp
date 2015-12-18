//Fuc.cpp

#include "Fuc.h"

int Fuc::add(int a, int b)
{
	return a+b;
}

int Fuc::minus(int a, int b)
{
	return a-b;
}

double Fuc::times(double a, double b)
{
	return a*b;
}

double Fuc::part(double a, double b)
{
	if(b = 0)
	{
		return 0;
	}

	return a/b;
}
