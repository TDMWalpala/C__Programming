#include <iostream>

using namespace std;

int main()
{
    int X = 3;
    int arr[X];
    for(int i=0; i<X; i++)
    {
        cout<< "Enter "<<i+1<< " integer value :";
        cin>>arr[i];
    }
    int Max = arr[0];
    for(int i=0; i<X; i++)
    {
        if(Max<arr[i])
        {
            Max = arr[i];
        }
    }
    cout<<"\n\ngreatest value is "<<Max<<endl;
    return 0;
}
