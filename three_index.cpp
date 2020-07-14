#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int co=0;
        vector <int >v;
        for(int i=0;i<n;i++)
        {int x;

            cin>>x;
           v.push_back(x);
        }
        int j;
        for( j=1;j<n-1;j++)
        {
            if(v[j-1]<v[j] && v[j]>v[j+1])
            {
                co=1;
                break;
                }
        }
        if(co==1)
        {
            cout<<"YES"<<"\n";
             cout<<j<<" "<<j+1<<" "<<j+2<<"\n";
        }
        else
            cout<<"NO"<<"\n";

}
    return 0;
    }








