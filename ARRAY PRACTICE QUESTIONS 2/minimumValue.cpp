#include <iostream>
using namespace std;

int main() {
    int n,i;
    int arr[100];
    int min=arr[0];
    cout<<"enter a number :)";
    cin>>n;
    cout<<"enter the size :)";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
   

    for(i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    cout<<"minimum value is = "<<min;
}