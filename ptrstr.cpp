//ptrstr.cpp

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char animal[20] = "bear";
	const char* bird = "wren";
	char* pt;

	cout << animal << " and " << bird << endl;
	
	cout << "Enter one kind of animal: ";
	cin >> animal;

	pt = animal;
	cout << pt << endl;
	cout << "Before strcpy(): " << endl;
	cout << animal << " at " << &animal << endl;
	cout << pt << " at " << &pt << endl;
	
	pt = new char[strlen(animal)+1];
	strcpy(pt, animal);

	cout << "After strcpy(): " << endl;
	cout << animal << " at " << &animal << endl;
	cout << pt << " at " << &pt << endl;

	cout << animal << endl;
	cout << pt << endl;

	delete [] pt;
	return 0;
}
