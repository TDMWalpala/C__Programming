#include <iostream>

using namespace std;



void reversearr()
{
    int arr[7];

    for(int i=0; i<=7; i++)
    {
        cout<<"Enter "<<i<<" value in to array :";
        cin>>arr[i];
    }
    cout<<"\n\nInput - Array[7] = {";
    for(int i=0; i<=7; i++)
    {
         cout<<arr[i]<<",";
    }
    cout<<"}";
    for(int i=0; i<=7; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[7-i];
        arr[7-i] = temp;
    }
     cout<<"\n\nOutput - Array[7] = {";
    for(int i=0; i<=7; i++)
    {
         cout<<arr[i]<<",";
    }
    cout<<"}";
}
int main()
{
    reversearr();
    return 0;
}
