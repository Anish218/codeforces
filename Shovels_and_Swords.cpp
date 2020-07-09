#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        long long int a,b;
        cin>>a>>b;
        long long int res=(a+b)/3;
        if(a<=b && a<=res)
            cout<<a<<endl;
        else if(b<a && b<=res)
            cout<<b<<endl;
       else if(res<a && res<b)
            cout<<res<<endl;

    }
    return 0;
}
