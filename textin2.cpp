//textin2.cpp

#include <iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;

	cout << "Enter chars, enter # to quit:\n";
	cin.get(ch);
	while(ch!='#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " chars read.\n";
	return 0;
}
