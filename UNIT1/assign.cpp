#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int x,y;
  cout<<"Enter input variable y: "; cin>>y;
  x = y;
  cout<<"\nValue of x = "<<x<<endl;
   
  int a = 3,b = 5,c = 8;
  a += b;
  c -= b;
  cout<<"\na += b: "<<a;
  cout<<"\nc -= b: "<<c;
   
  a *= b;
  b /= c;
  cout<<"\na *= b: "<<a;
  cout<<"\nb /= c: "<<b;
   
  return 0;
  }
