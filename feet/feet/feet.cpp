// feet.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	CFeet(int tf, int ti);
	~CFeet();
	void display();
	int gefeet();
	int geinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
	cout << "����Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::CFeet(int tf, int ti)
{
	feet = tf;
	inches = ti;
	cout << "���๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::~CFeet()
{
	cout << "������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
void CFeet::display()
{
	cout << "Display" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int CFeet::gefeet()
{
	return feet;
}
int CFeet::geinches()
{
	return inches;
}
class CMyfeet :public CFeet
{
public:
	CMyfeet();
	CMyfeet(int ft, int fi);
	~CMyfeet();
};
CMyfeet::CMyfeet()
{
	cout << "������Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::CMyfeet(int t, int i):CFeet(t,i)
{
	//feet=t;
	//inches=i;
	cout << "�����๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::~CMyfeet()
{
	cout << "��������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
	CMyfeet of1(3, 6);
	of1.display();
    return 0;
}

