#include<iostream>
using namespace std;

float area(float r)
{
    return 3.14*r*r;
}

int main()
{
    float k;
    cout<<"enter redius";
    cin>>k;

   float result = area(k);
    cout<<result;

    return 0;
}