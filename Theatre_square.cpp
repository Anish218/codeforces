#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long int n,m,a,num,ceil1,ceil2;
    cin>>n>>m>>a;
    if(n%a==0)
    {
        ceil1=n/a;
    }
    else
    {
        ceil1=(n/a)+1;
    }
     if(m%a==0)
    {
        ceil2=m/a;
    }
    else
    {
        ceil2=(m/a)+1;
    }
    num=ceil1*ceil2;
    cout<<num;
    return 0;
}
