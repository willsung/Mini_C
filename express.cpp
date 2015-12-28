//express.cpp

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "x=100 has the value:";
	cout << (x = 100) << endl;
	cout << "Now x=" << x << endl;

	cout << "x<3 has the value:";
	cout << (x < 3) << endl;

	cout << "x>3 has the value:";
	cout << (x > 3) << endl;

	cout.setf(ios_base::boolalpha); //new C++ feature

	cout << "x<3 has the value:";
	cout << (x < 3) << endl;

	cout << "x>3 has the value:";
	cout << (x > 3) << endl;

	return 0;
}
