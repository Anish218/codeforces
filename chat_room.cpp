#include<bits/stdc++.h>
using namespace std;

int main()
{
	int s=5,co=0;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
    {
        if(co==0 && str[i]=='h')
            co++;
        else if(co==1 && str[i]=='e')
            co++;
        else if(co==2 && str[i]=='l')
            co++;
        else if(co==3 && str[i]=='l')
            co++;
        else if(co==4 && str[i]=='o')
            co++;
    }
    if(co==s)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
