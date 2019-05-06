#pragma once
#include <iostream>
using namespace std;

template <class T>
class Pair
{
	T values[2];
public:
	Pair(T x,T y)
	{
		values[0]=x;
		values[1]=y;
	}
	T GetMax()
	{
		if (values[0]>values[1])
		{return values[0];}
		else
		{return values[1];}
	}
	T GetMin();
	friend ostream& operator<< (ostream& out,Pair& p1)
	{
		out<<p1.values[0]<<","<<p1.values[1];
		return out;
	}
};

template <typename R> //declare a template parameter before implementation
R Pair<R>::GetMin()
{
	if (values[0]<values[1])
		{return values[0];}
	else
		{return values[1];}
}

