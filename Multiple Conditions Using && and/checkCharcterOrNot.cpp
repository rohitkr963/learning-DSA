#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter a alphabet";
    cin>>ch;

    if(ch>='A' && ch<='Z')
    {
        cout<<"this is alphabet";
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"this is alphabet";
    }
    else
    {
        cout<<"this is not alphabet";
    }

    return 0;
}