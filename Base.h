#pragma once
#include <iostream>

using namespace std;

#define msg(str) cout<<(str)<<endl;

class Base
{
public:
	Base() { msg("base���캯��");}
	virtual ~Base() { msg("base��������"); }
	void fun1() { msg("Base��ͨ��Ա����") };
	virtual void fun2() { msg("Base�麯��") };
private:
	int a;
};

