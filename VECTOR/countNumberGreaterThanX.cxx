#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(6);
    
    for(int i=0; i<6; i++)
    {
        cin>>v[i];
    }

    int x;
    cout<<"enter a number";
    cin>>x;
    int count = 0;
    for(int i=0; i<6; i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }
    cout<<count;
return 0;
}
