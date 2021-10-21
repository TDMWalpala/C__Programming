#include <iostream>

using namespace std;

int main()
{
    float marks[3],avg,total;
    for(int i=0; i<3; i++)
    {
        cout<<"Enter subject "<<i+1<<" marks :";
        cin>>marks[i];
    }
    for(int i=0; i<3; i++)
    {
        total += marks[i];
    }
    avg = total/3;
    if(avg>=70)
    {
        cout<<"Very good"<<endl;
    }
    else if(avg>=55)
    {
        cout<<"Good"<<endl;
    }
    else if(avg>=40)
    {
         cout<<"Pass"<<endl;
    }
    else if(avg>=0)
    {
         cout<<"Fail"<<endl;
    }
    else
    {
        cout<<"Invalid Marks"<<endl;
    }
    return 0;
}
