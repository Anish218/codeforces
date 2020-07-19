
#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int> >v;
    int m=n;
    int co=0;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        if(s>v[i].first)
        {
            s+=v[i].second;
            co=1;
        }
        else{co=0;}
    }
    if(co==1)
    {
        cout<<"YES";
    }
    else{cout<<"NO";}
    return 0;
}
