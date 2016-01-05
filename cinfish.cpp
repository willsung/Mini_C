//cinfish.cpp

#include<iostream>

using namespace std;

const int MAX = 5;

int main()
{
	double fish[MAX];
	cout << "Weights." << endl;
	cout << "5 most. Enter q to quit.";
	cout << "#1: ";
	
	int i = 0;
	while(i<MAX && cin>>fish[i] && fish[i]>=0)
	{
		if(++i < MAX)
			cout << "#" << i+1 << ": ";
	}
	if(i == 0)
	{
		cout << "No fish." << endl;
		return 0;
	}

	double total = 0.0;
	for(int j=0; j<MAX; ++j)
	{
		total += fish[j];
	}
	cout << "Average of " << i << " fish : " << total/i << endl;
	cout << "Done!" << endl;

	return 0;
}
