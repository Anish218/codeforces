#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	signed int res_x=0,res_y=0,res_z=0;
	while(t--)
    {
    signed int x,y,z;
    cin>>x>>y>>z;
    res_x+=x;
    res_y+=y;
    res_z+=z;
    }
    if(res_x==0 && res_y==0 && res_z==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
	return 0;
}
