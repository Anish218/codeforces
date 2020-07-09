#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    if(t==2)
    {
        if(n==1)
        {
            cout<<2;
        }
        else{
          for(int i=1;i<=n;i++)
    {
        arr[i]=2;
        cout<<arr[i];
    }
        }}
    else if(t==3)
    {if(n==1)
        {
            cout<<3;
        }
        else{
          for(int i=1;i<=n;i++)
    {
        arr[i]=3;
        cout<<arr[i];
    }
        }
    }
   else  if(t==4)
    {if(n==1)
        {
            cout<<4;
        }
        else{
        for(int i=1;i<=n;i++)
    {
        arr[i]=4;
        cout<<arr[i];
    }
        }

    }
   else  if(t==5)
    {if(n==1)
        {
            cout<<5;
        }
        else{

       for(int i=1;i<=n;i++)
    {
        arr[i]=5;
        cout<<arr[i];
    }
        }

    }
   else if(t==6)
    {if(n==1)
        {
            cout<<6;
        }
        else{
          for(int i=1;i<=n;i++)
    {
        arr[i]=6;
        cout<<arr[i];
    }
        }
    }
   else if(t==7)
    {if(n==1)
        {
            cout<<7;
        }
        else{
          for(int i=1;i<=n;i++)
    {
        arr[i]=7;
        cout<<arr[i];
    }
        }
    }
    else if(t==8)
    {if(n==1)
        {
            cout<<8;
        }
        else{
          for(int i=1;i<=n;i++)
    {
        arr[i]=8;
        cout<<arr[i];
    }
        }
    }
   else if(t==9)
    {if(n==1)
        {
            cout<<9;
        }
        else{
          for(int i=1;i<=n;i++)
    {
        arr[i]=9;
        cout<<arr[i];
    }
        }
    }
   else if(t==10)
    {if(n==1)
        {
            cout<<-1;
        }
        else{
        for(int i=1;i<=n-1;i++)
    {
        arr[i]=1;
    }

        arr[n]=0;
        for(int i=1;i<=n;i++)
    {
        cout<<arr[i];
    }
        }
    }
    return 0;

    }


