#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,res_1=0,res_2=0;
        cin>>a>>b>>c;
        if(a<c)
        {
           cout<<1<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
        if(c<(b*a))
        {
            cout<<b<<" ";
        }
       else{
        cout<<-1<<" ";
       }

    }
    return 0;

}
