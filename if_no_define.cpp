//define_test.cpp

#include <iostream>

using namespace std;

#define RUN
#define GO

int main()
{
	int x=1, y=2, z=3;
	#ifndef RUN
	cout << "x,y,z: " << x << " " << y << " " << z << endl;
	#endif

	#ifdef GO
	cout << "x-y-z: " << x << " " << y << " " << z << endl;
	#endif
	
	cout << "x+y+z = " << x+y+z << endl;
	return 0;
}
