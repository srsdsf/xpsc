#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a > b)
    {
        cout<<"0"<<endl;
    }
    else if(a==b)
    {
        cout<<"1"<<endl;
    }
    else
    {
        int ans=b-a;
        cout<<ans+1<<endl;
    }
}