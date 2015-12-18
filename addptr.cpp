//addptr.cpp

#include <iostream>

using namespace std;

int main()
{
	double wages[3] = {1001.0, 2002.0, 3003.0};
	short stacks[3] = {3, 2, 1};

	double* ptr1 = wages;
	short* ptr2 = &stacks[0];
	
	cout << "ptr1: " << ptr1 << ", *ptr1: " << *ptr1 << endl;
	ptr1 = ptr1 + 1;
	cout << "add 1 to the ptr1 pointer: " << endl;
	cout << "ptr1: " << ptr1 << ", *ptr1: " << *ptr1 << endl << endl;

	cout << "ptr2: " << ptr2 << ", *ptr2: " << *ptr2 << endl;
	ptr2 = ptr2 + 1;
	cout << "add 1 to the ptr2 pointer: " << endl;
	cout << "ptr2: " << ptr2 << ", *ptr2: " << *ptr2 << endl << endl;

	cout << "stacks[0]: " << stacks[0] << ", stacks[1]: " << stacks[1] << endl;
	cout << "*stacks: " << *stacks << ", *(stacks+1): " << *(stacks+1) << endl;
	cout << "size of wages: " << sizeof(wages) << endl;
	cout << "size of stacks: " << sizeof(stacks) << endl;
	cout << "size of ptr1: " << sizeof(ptr1) << endl;
	cout << "size of ptr2: " << sizeof(ptr2) << endl;
	return 0;
}
