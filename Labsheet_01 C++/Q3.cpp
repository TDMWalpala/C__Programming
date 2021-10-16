#include <iostream>

using namespace std;



int main()
{
    int MAX = 5;
    int arr[MAX];
    for(int i=0; i<MAX; i++)
    {
        cout<< "Enter "<<i+1<< " integer value :";
        cin>>arr[i];
    }
    for(int i=0; i<MAX; i++)
    {
        cout<<arr[i];
    }
    cout<<""<<endl;
    for(int i=MAX-1; i>-1; i--)
    {
        cout<<arr[i];
    }
    return 0;
}
