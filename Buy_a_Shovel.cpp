#include<bits/stdc++.h>

using namespace std;
int main()
{
    int k,r,co=0;
    cin>>k>>r;
    if(k%10!=0)
    {
    for(int i=1;i<10;i++)
    {
        int res;
        res=k*i;
        if(res%10==0 || res%10==r)
           {
               cout<<i;
               co=1;
               break;
           }

    }
    }
    else{co=1;
    cout<<1;}
    if(co==0)
    {
        cout<<10;
    }

    return 0;
}
