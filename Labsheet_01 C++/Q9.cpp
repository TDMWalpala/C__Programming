#include <iostream>
#include <cmath>

using namespace std;
float pi = 3.14;
void area(float r){
    cout<<" The area of sphere = "<<4*pi*pow(r,2)<<endl;
}

void volume(float r){
    cout<<" The Volume of sphere = "<<(3*pow(r,3))/4<<endl;
}

int main()
{
    float r;
    cout << "Enter radius : " << endl;
    cin>>r;
    area(r);
    volume(r);

    return 0;
}
