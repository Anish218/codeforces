#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    {
        return false;
    }

}
 return true;
}
int main()
{
    int query;
    cin>>query;
    while(query--)
        {
            int n;
            cin>>n;
           string s1="Ashishgup";
           string s2="FastestFinger";
            if(n==1)
                cout<<s2<<endl;
            else if(n==2)
            {
                cout<<s1<<endl;
            }
           else  if(n%2!=0)
            {
                cout<<s1<<endl;
            }
            else if(n%2==0)
            {

                    if((n & (n-1))== 0)
                    {
                   cout<<s2<<endl;
                    }
                   else if(n%4==0)
                    {cout<<s1<<endl;}
                   else if(isprime(n/2))
                    {cout<<s2<<endl;}
                    else
                      {

                        cout<<s1<<endl;
                      }

            }


    }
    return 0;
}
