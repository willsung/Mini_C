//split_string.cpp

#include <iostream>
#include <string>
#include <list>

using namespace std;

list<string> split(string str, string separator)
{
    list<string> result;
    int cutAt;
    while ((cutAt = str.find_first_of(separator)) != str.npos)
    {
        if (cutAt > 0)
        {
            result.push_back(str.substr(0, cutAt));
        }
        str = str.substr(cutAt + 1);
    }
    if (str.length() > 0)
    {
        result.push_back(str);
    }
	list<string>::iterator it = result.begin();
    return result;
}

int main()
{
	string str = "aa bbb cccc ddddd";
	//读取字符串
	getline(cin, str);
	list<string> str_list = split(str, " ");
	list<string>::iterator it = str_list.begin();
	/*输出list中的所有元素
	for (; it!=str_list.end(); ++it)
	{
		cout << it->c_str() << endl;
	}
	*/
	cout << str_list.back().length();
	cin.get();
	return 0;
}
