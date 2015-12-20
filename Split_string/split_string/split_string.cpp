//split_string.cpp

#include <iostream>
#include <string>
#include <list>

using namespace std;

list<string> split(string str, string spliter)
{
	list<string> result;
	int cutAt;
	while(cutAt = str.find_first_of(spliter) != str.npos)
	{
		if(cutAt > 0)
		{
			result.push_back(str.substr(0, cutAt));
		}
		str = str.substr(cutAt + 1);
	}
	if(str.length() > 0)
	{
		result.push_back(str);
	}
	return result;
}

int main()
{
	string str = "It is nothing.";
	list<string> str_list = split(str, " ");
	list<string>::iterator it = str_list.begin();
	for (; it!=str_list.end(); ++it)
	{
		cout << it->c_str() << endl;
	}
	cout << str_list.back().length();
	cin.get();
	return 0;
}
