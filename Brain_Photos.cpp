#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,colour=0;
    cin>>n>>m;
    for(int i=0;i<n*m;i++)
    {
    char  x;
    cin>>x;
    if(x=='C' || x=='M' || x=='Y')
    {colour=1;}
    }
    if(colour==0)
    {cout<<"#Black&White";}
    else
    cout<<"#Color";
    return 0;
}

