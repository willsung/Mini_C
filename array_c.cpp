//array_c.cpp

#include <iostream>

using namespace std;

int main()
{
	int arr[10];
	for(int i=0; i<10; ++i)
	{
		arr[i] = i;
	}

	for(int j=9; j>=0; --j)
	{
		cout << "arr[10]: " << arr[j] << endl;
	}

	int k;
	int f[20] = {1,1};
	for(k=2; k<20; k++)
	{
		f[k] = f[k-2] + f[k-1];
	}
	for(k=0; k<20; k++)
	{
		if(k%5 == 0) cout << endl;
		cout << " " << f[k];
	}
	cout << endl;
	return 0;
}
