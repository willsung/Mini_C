//template_class.cpp

#include <iostream>

using namespace std;

class student
{
public:
	int id;
	int score;

	void set_info(int idd, int scoree)
	{
		id = idd;
		score = scoree;
	}
};

template <class T>
class store
{
private:
	T item;
	int value;

public:
	store(void);
	T getItem(void);
	void putItem(T x);
};

template <class T>
store<T>::store(void):value(0){}

template <class T>
T store<T>::getItem(void)
{
	if(value == 0)
	{
		cout << "No item." << endl;

	}
	return item;	
}

template <class T>
void store<T>::putItem(T x)
{
	value++;
	item = x;
}

int main()
{
	store<int>s1, s2;
	s1.putItem(1);	
	s2.putItem(-2);
	cout << s1.getItem() << endl;
	cout << s2.getItem() << endl;

	student s;	
	s.set_info(12, 100);
	store<student>s3;
	s3.putItem(s);
	cout << s3.getItem().id << " " << s3.getItem().score << endl;

	return 0;
}
