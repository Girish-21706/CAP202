#include <iostream>
using namespace std;
int main()
{
int  n, x, y;
cout << "Enter the number of rows to show number patterns: ";
cin >> n;
for (int x = n; x >= 0; x--)
{
for (int y = 1; y <= x; y++)
cout << y;
cout << "\n";
}
for(int x = 1; x <= n; x++)
{
for(int y = 1; y <= x; y++)
cout << y;
printf("\n");
}
return 0;
}
