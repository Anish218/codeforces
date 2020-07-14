#include<bits/stdc++.h>
using namespace std;
int  main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        if(a==b && a==c)
        {
            if(n%3==0)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
        else{
            int res=max(max(a,b),c);
        if(res-a<=n)
        {
             n-=(res-a);
            a+=(res-a);
        }
           if(res-b<=n)
        {
             n-=(res-b);
        b+=(res-b);

        }
           if(res-c<=n)
        {
             n-=(res-c);
        c+=(res-c);

        }
        if(a==c && a==b && n%3==0)
        {
            cout<<"YES"<<"\n";
        }
           else
            {
                cout<<"NO"<<"\n";
            }
        }


    }
    return 0;
}
