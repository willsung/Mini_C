//cls_test.cpp

#include "cls_test.h"
#include <iostream>

using namespace std;

int CLS_TEST::getSum()
{
	//CLS1 和 CLS_TEST是友元，可以直接访问成员变量
	CLS1 cls1;

	cout << "a: " << cls1.a << endl;
	cout << "b: " << cls1.b << endl;

	return cls1.sum(cls1.a, cls1.b);
	
}

int CLS_TEST::getTimes()
{
	//CLS2 和 CLS_TEST不是友元，不能直接访问成员变量，只能通过接口
	CLS2 cls2;
	cls2.setC(4);
	cls2.setD(5);

	cout << "c: " << cls2.getC() << endl;
	cout << "d: " << cls2.getD() << endl;

	return cls2.times(cls2.getC(), cls2.getD());
}

int CLS_TEST::getZ1()
{
	CLS1 cls1;
	return cls1.z1;
}

int CLS_TEST::getZ2()
{
	CLS2 cls2;
	return cls2.getZ2();
}