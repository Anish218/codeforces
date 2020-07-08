#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,maxi=0;
    cin>>a>>b>>c;
    int res=0;
    res=(a*b)+c;
    if(res>=maxi)
    maxi=res;
    res=a+(b*c);
    if(res>=maxi)
    maxi=res;
    res=a*b*c;
    if(res>maxi)
    maxi=res;
    res=a+b+c;
    if(res>maxi)
    maxi=res;
    res=a*(b+c);
    if(res>maxi)
    maxi=res;
    res=(a+b)*c;
    if(res>maxi)
    maxi=res;
    cout<<maxi;

    return 0;
}
