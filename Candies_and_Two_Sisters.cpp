#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ways=0;
        if(n>2)
        {
            ways=n/2;
        if(n%2==0)
        {
            ways-=1;
        }
        cout<<ways<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }
    }
    return 0;
}
