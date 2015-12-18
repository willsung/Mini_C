//arraynew.cpp

#include <iostream>

using namespace std;

int main()
{
	double* p_arr = new double[3];
	p_arr[0] = 0.2;
	p_arr[1] = 0.5;
	p_arr[2] = 0.8;

	cout << "p_arr[1]: " << p_arr[1] << endl;

	p_arr = p_arr + 1;
	cout << "Now p_arr[0]: " << p_arr[0] << endl;
	cout << "p_arr[1]: " << p_arr[1] << endl;
	p_arr = p_arr - 1;

	cout << "NOW p_arr[1]: " << p_arr[1] << endl;
	delete[] p_arr;

	return 0;
}
