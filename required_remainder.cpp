#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    long long int n,x,y;
    cin>>x>>y>>n;
    long long int k;
    if(n%x==y)
    {cout<<n<<"\n";}
    else
    {k=n/x;
    k=k*x;
    if(k+y>n)
    {
        k=k-x;
        k=k+y;
    }
    else{
            k=k+y;

    }
    cout<<k<<"\n";
    }
    }

 return 0;
}
