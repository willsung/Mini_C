//overload.cpp

#include <iostream>
#include <string>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}

int main()
{
	int x, y;
	cout << "Enter two numbers:" << endl;
	cin >> x >> y;

	cout << add(x, y) << endl;
}
