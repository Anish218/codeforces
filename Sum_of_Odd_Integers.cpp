#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  long long int x,k;
  cin>>x>>k;
  if(k*k>x || x%2!=k%2)
  {
     cout<<"NO"<<endl;
  }
  else
  cout<<"YES"<<endl;
  }
  return 0;
  }
