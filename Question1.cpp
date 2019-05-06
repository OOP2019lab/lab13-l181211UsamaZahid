#include <iostream>
using namespace std;

template <typename T1,typename T2>
T1 GetMax (T1 x,T2 y)
{
	if (x>y)
		return x;
	else
		return y;
}

template <typename R1,typename R2>
R1 GetMin (R1 x, R2 y)
{
	if (x<y)
		return x;
	else
		return y;
}

int main () 
{
  char i='Z';
  int  j=6, k;
  long l=10, m=5, n;
  k=GetMax(i,m);
  n=GetMin(j,l);
  cout << k << endl;
  cout << n << endl;
  system("pause");
}
