#include<iostream>
using namespace std;
int count;

int rohit(int number)
{
    return number*number;
}
int main(){
    int number,count=0;
    cout<<"enter the value of n = ";
    cin>>number;

    while(number>0)
    {
         number/=10;
            count++;
        }
                cout<<"this number is  "<<count<<endl;
         int r=   rohit(number);
         cout<<"print the spuare = "<<r<<endl;

    }
