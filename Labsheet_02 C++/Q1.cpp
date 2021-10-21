#include <iostream>

using namespace std;

int main()
{
    int val;
    cout<<"Enter integer value : ";
    cin>>val;
    if(val<0)
    {
        cout<<"Absolute value of "<<val<<" : "<<val*(-1)<<endl;
    }
    else if(val>0)
    {
        cout<<"Absolute value of "<<val<<" : "<<val<<endl;
    }
    else
    {
        cout<<"please input integer value"<<endl;
    }

    return 0;
}
