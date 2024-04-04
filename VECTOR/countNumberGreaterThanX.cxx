#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n;
    int count=0;
    cout<<"enter a number";
    cin>>n;

    for(int i=0; i<6; i++)
    {
        if(arr[i]>n)
        {
            count++;
        }
    }
    cout<<count;
return 0;
}
