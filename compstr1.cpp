//compstr1.cpp

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loog ends, word is " << word << endl;
	return 0;
}
