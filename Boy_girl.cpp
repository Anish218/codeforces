#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int co=str.length();
    if(str.length()>1)
       {
    for(int i=1;i<str.length();i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(str[j]==str[i])
            {
                co--;
                break;
            }
        }
    }
       }
    if(co%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
