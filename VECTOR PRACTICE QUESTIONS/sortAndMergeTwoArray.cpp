#include<iostream>
using namespace std;

int main()
{
    int n,temp,i,j;
    int arr[100];

    cout<<"enter  the size";
    cin>>n;

    cout<<"enter your element";
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for( i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }

    cout<<"sorted Array";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    
}