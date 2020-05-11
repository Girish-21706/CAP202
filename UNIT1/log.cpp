#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int a=10, b=8,c=12,d=14;
 
  if(!(a==0))
     cout<<"a is not zero"<<endl;
  else
    cout<<"a is zero"<<endl; if((a>b)&&(c<d))
        cout<<"Logical AND is true"<<endl;
  else
       cout<<"Logical AND is false"<<endl;
 
 if((a<c)||(b<d))
     cout<<"Logical OR is true"<<endl;
 else
     cout<<"Logical OR is false"<<endl;
}
