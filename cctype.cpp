//cctype.cpp

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	cout << "Enter a word or string; type @ to terminate." << endl;

	char ch;
	int spaces = 0;
	int digits = 0;
	int chars = 0;
	int puncts = 0;
	int others = 0;

	cin.get(ch);
	while(ch != '@')
	{
		if(isalpha(ch))
			++chars;
		else if(isdigit(ch))
			++digits;
		else if(isspace(ch))
			++spaces;
		else if(ispunct(ch))
			++puncts;
		else
			++others;
		cin.get(ch);
	}
	cout << "spaces: " << spaces << endl
		<< "digits: " << digits << endl
		<< "chars: " << chars << endl
		<< "puncts: " << puncts << endl
		<< "others: " << others << endl;
	return 0;
}
