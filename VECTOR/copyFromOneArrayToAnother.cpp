#include<iostream>
using namespace std; 

int main()
{
    int arr[5];
    int n;
    cout<<"enter a size of array";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int j=0;

    // take another array for store the value of previos array 
    int ansarr[5];

    // copy array in the reverse order
    for(int i=n-1; i>=0; i--)
    {
        ansarr[j++]=arr[i];
    }

 
    // print our ansarray
    for(int i=0; i<n; i++)
    {
        cout<<ansarr[i]<<" ";
    }

    return 0;

}