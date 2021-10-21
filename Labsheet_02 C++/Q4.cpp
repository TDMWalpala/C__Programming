#include <iostream>

using namespace std;

int main()
{
    float tem;
    cout<<"Enter temperature : ";
    cin>>tem;
    if(tem>50)
    {
        cout<<"Invalid input"<<endl;
    }
    else
    {
        if(tem<30)
        {
            cout<<"Wear the down jacket"<<endl;
        }
        else
        {
            cout<<"No need to worry about the jacket"<<endl;
        }
    }
    return 0;
}
