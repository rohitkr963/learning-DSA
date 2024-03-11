#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    int sum=0;
    cout<<"enter a number";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    
}