#include <iostream>
#include "Question2.h"
using namespace std;

int main () 
{
  Pair <double> myobject (1.012, 1.01234);
  cout<<myobject.GetMax()<<endl;
  cout<<myobject.GetMin()<<endl;
  cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)
  system("pause");
}
