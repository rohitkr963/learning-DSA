#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter a charcter";
    cin>>ch;

    if(ch>='A' && ch<='Z')
    {
        cout<<"this is charcter";
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"this is charcter";
    }
    else
    {
        cout<<"this is not charcter";
    }

    return 0;
}