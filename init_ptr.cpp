//init_ptr.cpp

#include <iostream>

using namespace std;

int main()
{
	int higgens = 5;
	int* ptr = &higgens;

	cout << "Value of higgens: " << higgens
		<< ", address of higgens: " << &higgens << endl;
	cout << "Value of *ptr: " << *ptr
		<< ", address of ptr: " << ptr << endl;

	return 0;
}
