#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     long long int n,odd,k,res=0;
     cin>>n>>k;
     if(n%2!=0)
     {
         odd=((n-1)/2)+1;
     }
     else{odd=((n-2)/2)+1;}

    if(k<=odd)
    {
        cout<<2*k-1;
    }
    else if(k>odd)
    {
        k=k-odd;
        cout<<2*k;
    }


    return 0;
}
