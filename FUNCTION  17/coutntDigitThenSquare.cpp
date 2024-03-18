#include<iostream>
using namespace std;
int count=0;

int rohit(int n)
{
    return n*n;
}
int main(){
    int number;
    cout<<"enter the value of n = ";
    cin>>number;

    while(number>0)
    {
         number/=10;
            count++;
        }
                cout<<"this number is  "<<count<<endl;
          int result = rohit(count);
         cout<<"print the spuare = "<<result<<endl;

    }
