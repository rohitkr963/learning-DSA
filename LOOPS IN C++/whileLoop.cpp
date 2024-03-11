#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    int sum=0;
    cout<<"enter a number";
    cin>>n;

    while (i<=n)
    {
        sum+=i;
        i++;
    }

    cout<<sum<<endl;
    
}