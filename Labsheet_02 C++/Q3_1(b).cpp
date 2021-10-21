#include <iostream>

using namespace std;

int main()
{
int a,b,c,Max;
cout<<"Enter 3 number"<<endl;
cin >> a >> b >> c;
 Max = a>b ? (a>c ? a:c) : (b>c ? b:c);

cout<<"Largest number is : "<<Max<<endl;

}
