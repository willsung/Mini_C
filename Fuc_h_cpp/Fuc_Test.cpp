//Fuc_Test.cpp

#include "Fuc.h"
#include <iostream>

using namespace std;

int main()
{
	Fuc *fuc = new Fuc();
	int a = 2;
	int b = 5;

	cout << fuc->add(a, b) << endl;
	cout << fuc->minus(a, b) << endl;
	cout << fuc->times(a, b) << endl;
	cout << fuc->part(a, b) << endl;
	
	return 0;
}
