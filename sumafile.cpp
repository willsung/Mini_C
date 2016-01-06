//sumafile.cpp

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
const int SIZE = 60;

int main()
{
	char filename[SIZE];
	ifstream infile;

	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	infile.open(filename);

	if(!infile.is_open())
	{
		cout << "Could not open " << filename << endl; 
		cout << "Prog terminating." << endl;
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;
	
	infile >> value;
	while(infile.good())
	{
		++count;
		sum += value;
		infile >> value;
	}
	if(infile.eof())
	{
		cout << "End of file reached." << endl;
	}
	else if(infile.fail())
	{
		cout << "Input terminated by data mismatched." << endl;
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum/count << endl;
	}
	infile.close();
	return 0;
}
