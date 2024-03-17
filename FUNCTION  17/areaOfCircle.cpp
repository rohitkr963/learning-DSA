#include<iostream>
using namespace std;

int area(int r)
{
    return 3.14*r*r;
}

int main()
{
    int r;
    cout<<"enter redius";
    cin>>r;

   int result = area(r);
    cout<<result;

    return 0;
}