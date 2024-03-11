#include<iostream>
using namespace std;

int main()
{
    int i=1;
    for(i=1; i<=50; i++)
    {
        if(i%6==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
}