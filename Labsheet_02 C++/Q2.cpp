#include <iostream>

using namespace std;

int main()
{
    int val;
    cout<<"Enter integer value : ";
    cin>>val;
    if(val%2==0)
    {
        cout<<val<<" is even number."<<endl;
    }
    else
    {
        cout<<val<<" is odd number."<<endl;
    }

    return 0;
}
