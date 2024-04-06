#include<iostream>
using namespace std; 

int main()
{
    int arr[]={1,2,3,4,5};

    int n=5;
    int k=2;
    int j=0;

    // take another array for store the value of previos array 
    int ansarr[5];

    // k can be greater than n
    k=k%n;

    // insterting last k element in  ans array

    for(int i=n-k; i<n; i++)
    {
        ansarr[j++]=arr[i];
    }

    // inserting last n-k element in  ans array
    for(int i=0; i<=k; i++)
    {
        ansarr[j++]=arr[i];
    }

    // print our ansarray
    for(int i=0; i<n; i++)
    {
        cout<<ansarr[i]<<" ";
    }


}