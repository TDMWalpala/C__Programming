#include <iostream>

using namespace std;

int main()
{
    int num[3],Max;
    for(int i=0; i<3; i++)
    {
        cout<<"Enter "<<i+1<<" number";
        cin>>num[i];
    }
    Max = num[0];
    if(Max<num[1])
    {
        Max = num[1];
    }
    if(Max<num[2])
    {
        Max = num[2];
    }
    cout<<"Largest number is "<<Max<<endl;
}
