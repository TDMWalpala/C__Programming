#include <iostream>

using namespace std;

int main()
{
    float tem;
    int choice;
    cout << "Enter temperature :";
    cin>>tem;
    cout<<"\n\tpress 1 - Convert Centigrade into Fahrenheit\n\tPress 2 - convert Fahrenheit into Centigrade"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            cout<<"Centigrade "<<tem<<"-->"<<" Fahrenheit "<< ((tem*(9/5))+32)<<endl;

        }break;
    case 2:
        {
            cout<<"Fahrenheit "<<tem<<"-->"<<" Centigrade "<< ((tem-32)*(5))/9<<endl;

        }break;
    default :
        {
            cout<<"Invalid!";
        }

    }

    return 0;
}
