#include <iostream>
#include <string>
using namespace std;
  
int main()
{
  int x,y;
  
  x = (y=3,y+4);
  cout<<"Value of x = "<<x;
  
  y = (x<5)?0:1;
  if(y == 0)
    cout<<"\nVariable x is less than 5"<<endl;
  else
    cout<<"\nVariable x is greater than 5"<<endl;
  
    cout<<"sizeof(x): "<<sizeof(x)<<"\t"<<"sizeof(y): "<<sizeof(y);
  
  return 0;
 
}
