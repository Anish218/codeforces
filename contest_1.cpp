#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            arr[i]=1;

        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}
