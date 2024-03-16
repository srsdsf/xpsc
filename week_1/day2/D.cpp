#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string S=to_string(n);
    while(S.length() < 4)
    {
        S = "0" + S;
    }
    cout<<S;

}
