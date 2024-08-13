#include<iostream>
using namespace std;

int main()
{
    int arr[8] = {1,2,4,5,9,15,18,21};
    int target = 18;
    int lo = arr[0];
    int hi = arr[7];
    int mid = lo+hi/2;

    if(arr[mid]==target)
    {
        cout<<"taget found ";
    }

    else if(arr[mid]<target)
    {
        lo = mid+1;
    }

}