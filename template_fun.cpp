//template.cpp

#include <iostream>

using namespace std;

template <typename T>

T get_sum(T a, T b)
{
	T c;
	c = a + b;
	return c;
}

template <typename T>
T get_max(T a, T b) //There is a max() in namespace std
{
	return a>b ? a:b;
}

int main()
{
	cout << "get_sum(1,3) = " << get_sum(1,3) << endl;
	cout << "get_sum(1.0, 2.0) = " << get_sum(1.0, 2.0) << endl;

	cout << "get_max(1,3) = " << get_max(1,3) << endl;
	cout << "get_max(1.0, 2.0) = " << get_max(1.0, 2.0) << endl;
	return 0;	
}
