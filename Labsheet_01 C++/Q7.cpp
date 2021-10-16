#include <iostream>

using namespace std;

int main()
{
    int MAX = 10,temp;
    int arr[MAX], arr2[MAX];
    for(int i=0; i<MAX; i++)
    {
        cout<< "Enter "<<i+1<< " integer value :";
        cin>>arr[i];
    }
    cout<<"\nBefor sorting : ";
    for(int i=0; i<MAX; i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<MAX; i++)
    {
        for(int j=0; j<MAX; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"\nAscending order : ";
    for(int i=0; i<MAX; i++)
    {
        arr2[i] = arr[9-i];
        cout<<arr[i]<<" ";

    }
    cout<<"\nDescending order : ";
    for(int i=0; i<MAX; i++)
    {
        cout<<arr2[i]<<" ";

    }
    return 0;
}
