#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int a=8,b=4,c;
   
  c = a&b;
  cout<<"Result of & : "<<c<<endl;
  c = a|b;
  cout<<"Result of | : "<<c<<endl;
  c = a^b;
  cout<<"Result of ^ : "<<c<<endl;
   
  c = a<<2;
  cout<<"Result of << by 2 bits : "<<c<<endl; c = b>>2;
  cout<<"Result of >> by 2 bits : "<<c<<endl;
   
  c = ~3;
  cout<<"Result of ~ : "<<c<<endl;
}
