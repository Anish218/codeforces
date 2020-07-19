#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    while(n--)
    {
        int a;
    cin>>a;
    vector<int>v,v1;
    for(int i=0;i<2*a;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>ans;
      for(int i=0;i<2*a;i++)
    {
        int co=0;
      for(int j=0;j<i;j++)
      {
          if(v[i]==v[j])
          {
              co=1;
              break;
          }
      }
      if(co==0)
      {
          ans.push_back(v[i]);
      }
    }
     for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    }

    return 0;
}
