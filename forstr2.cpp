//forstr2.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter a word:" << endl;
	string word;
	cin >> word;
	
	char temp;
	int i,j;
	for (j=0,i=word.size()-1; j<i; --i,++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
	return 0;
}
