//inlinetype.cpp

#include <iostream>
#include <string>

using namespace std;

inline int add(int a, int b = 5);
inline int times(int a = 2, int b = 9)
{
	return a*b;
}
int main()
{
	int x, y;
	cout << "Enter two numbers:" << endl;
	cin >> x >> y;
	int c = add(x,y);
	cout << "add(x, y) = " << c << endl;
	c = add(x);
	cout << "add(x) = " << c << endl;

	int d = times();
	cout << "times() = " << d << endl;
	d = times(x);
	cout << "times(x) = " << d << endl;
	d = times(x, y);
	cout << "times(x,y) = " << d << endl;
	return 0;
}

inline int add(int a, int b)
{
	return a+b;
}
