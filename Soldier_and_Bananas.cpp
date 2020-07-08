#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int res=k*(w*(w+1))/(2);
	if(res>n)
    {
        cout<<res-n;
    }
    else
    cout<<0;
        return 0;
}
