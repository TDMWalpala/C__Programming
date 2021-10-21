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
    avg >=70 ? cout<<"Very good": avg>=55 ? cout<<"Good": avg>=40 ? cout<<"Pass" :avg>=0 ? cout<<"Fail" : cout<<"Invalid Marks"<<endl;
    return 0;
}
