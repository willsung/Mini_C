//scope2.cpp

#include <iostream>

using namespace std;

void fun();

int main()
{
	fun();
	fun();
	return 0;
}

void fun()
{
	static int a = 1;
	int i = 5;
	a++;
	i++;
	cout << "i: " << i << ",a: " << a << endl;
}
