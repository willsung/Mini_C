//cls1.h

class CLS1
{
	friend class CLS_TEST;
	CLS1():a(1),b(2),z1(3){}

public:
	int sum(int x, int y);
	int getA();
	int getB();
	
	const int z1;
	
private:
	int a;
	int b;
};

class CLS2
{
public:
	int times(int x, int y);
	void setC(int x);
	void setD(int x);
	
	int getC();
	int getD();
	int getZ2();
private:
	int c;
	int d;
	
	static const int z2;
};