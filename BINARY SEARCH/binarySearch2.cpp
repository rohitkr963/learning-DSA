#include<iostream>
using namespace std;

int main()
{
    int arr[9] = { 1,2,4,5,9,15,18,21,24};
    int target = 15;
    int lo = arr[0];
    int hi = arr[8];
    int mid = (lo + hi)/2;

    if(arr[mid]==target)
    {
        cout<<"item found";
    }
    else if(arr[mid]<target)
    {
        lo = mid+1;
    }
    else if(arr[mid]>target)
    {
        hi=mid-1;
    }


}


