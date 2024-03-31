#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int sum=0,i,n;
    cout<<"enter your number";
    cin>>n;
    cout<<"enter element for input";
    for(int i=0; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<=5; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum is ="<<sum;
    
    return 0;
}