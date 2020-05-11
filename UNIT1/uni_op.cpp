#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int x=4,y;
  y = ++x;
  cout<<"PreIncrement:Value of x = "<<x;
  cout<<endl;
  cout<<"PreIncrement:Value of y = "<<y;
  cout<<endl;
 
  y = x--;
  cout<<"PostDecrement:Value of x = "<<x;
  cout<<endl;
  cout<<"PostDecrement:Value of y = "<<y;
  cout<<endl;
}
