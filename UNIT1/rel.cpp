#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int a=10, b=8,c=12,d=14;
 
  if(a==b)
     cout<<"a is equal to b"<<endl;
  else
    cout<<"a is not equal to b"<<endl;
 
  if(c!=d)
     cout<<"c is not equal to d"<<endl;
  else
    cout<<"c is equal to d"<<endl;
 
  if((a+b) <= (c+d))
      cout<<" (a+b) less than/equal to (c+d)"<<endl; if((a-b)>=(d-c))
     cout<<"(a-b) greater than/equal to (d-c)"<<endl;
 
}
