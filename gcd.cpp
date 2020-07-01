#include<bits/stdc++.h>
using namespace std;
int fun( int a,int b)
{
    if(b==0)
        return a;
    else
        return fun(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int n;
    cin>>n;
    int res=fun(n/2,(n/2)*2);
    cout<<res<<endl;
    }
    return 0;
}
