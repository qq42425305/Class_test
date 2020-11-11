#pragma once
#include <iostream>

using namespace std;

#define msg(str) cout<<(str)<<endl;

class Base
{
public:
	Base() { msg("base构造函数");}
	virtual ~Base() { msg("base析构函数"); }
	void fun1() { msg("Base普通成员函数") };
	virtual void fun2() { msg("Base虚函数") };
private:
	int a;
};

