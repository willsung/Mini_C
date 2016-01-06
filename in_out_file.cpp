//in_out_file.cpp

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string cin_str = "cin: ";
	string getline_str = "cin.getline(); ";
		
	char filename[20];
	cout << "Enter file name: ";
	cin >> filename;
	ofstream iofile;
	iofile.open(filename);
	
	char ch;
	int i = 0;
	char word[50];
	
	while(i < 10)
	{
		cout << "Enter a string: ";
		cin >> word;
		iofile << word << endl;
		++i;
	}
	iofile.close();

	return 0;
}