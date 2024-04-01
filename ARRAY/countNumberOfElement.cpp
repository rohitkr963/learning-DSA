#include <iostream>
using namespace std;

int main() {
    int n,i;
    int arr[5]={5,8,3,9,6};
    int count=0;
    cout<<"enter a element";
    cin>>n;
   

    for(i=0; i<5; i++)
    {
        if(n<arr[i])
        {
            //cout<<i;
            count++;
        }
    }
    cout<<count;
    return 0;
}