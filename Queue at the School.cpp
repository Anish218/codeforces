#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t;
    cin>>n>>t;
    char arr[n];
    int swap_count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
for(int j=0;j<t;j++)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='B' && arr[i+1]=='G')
        {
            char temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swap_count=1;

        }
        if(swap_count==1)
        {
            i=i+1;
            swap_count=0;
        }

    }
}
      for(int i=0;i<n;i++)
    {
     cout<<arr[i];
    }
    return 0;
}
