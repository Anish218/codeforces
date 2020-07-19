#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int m=n/2;
        cout<<m<<"\n";
        while(m--)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        int m=(n-1)/2;
        m=m-1;
        cout<<m+1<<"\n";
        while(m--)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
    return 0;
}
