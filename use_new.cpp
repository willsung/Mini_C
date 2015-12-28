//use_new.cpp

#include <iostream>

using namespace std;

int main()
{
	int nights = 1001;
	int* ptr = new int;
	*ptr = 1001;

	cout << "nights value: " << nights << ", location: " << &nights << endl;
	cout << "int value: " << *ptr << ", location: " << ptr << endl;
	
	double* pr = new double;
	*pr = 10001.0;

	cout << "double value: " << *pr << ", location: " << pr << endl;
	cout << "location of pointer pt: " << &pr << endl;

	cout << "size of ptr: " << sizeof(ptr);
	cout << " size of *ptr: " << sizeof(*ptr) << endl;
       	cout << "size of pr: " << sizeof(pr);
	cout << " size of *pr: " << sizeof(*pr) << endl;
	delete pr;
	
	return 0;
}
