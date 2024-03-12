#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"enter a number for it's table : ";
    cin>>n;

    for(i=1; i<=10; i++)
    {
        cout<<i*n<<endl;
    }
    return 0;
}