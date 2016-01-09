//main.cpp

#include <iostream>
#include "cls_test.h"

using namespace std;

int main()
{
	CLS_TEST cls_test;
	cout << "Sum: " << cls_test.getSum() << endl;
	cout << "Times: " << cls_test.getTimes() << endl;
	cout << "Z1: " << cls_test.getZ1() << endl;
	cout << "Z2: " << cls_test.getZ2() << endl;

	cout << "All Done!" << endl;

	cin.get();
	return 0;
}