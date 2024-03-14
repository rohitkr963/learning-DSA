#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"enter the number";
    cin>>n;
    bool flag = true; // maime assume kara ki jo v number tumne input kara hai its a prime num

    for(i=2; i<=n-1; i++)
    {
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n==1) cout<<"neither composite nor prime";
    if(flag==true) cout<<"its a prime number";
    if(flag==false) cout<<"its a composite number";
}