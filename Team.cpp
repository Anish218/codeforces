#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int query,flag=0;
   cin>>query;
   for(int i=0;i<query;i++)
   {
       int a,b,c;
       cin>>a;
       cin>>b;
       cin>>c;
       if(a==1)
       {
           if(c==1 || b==1)
           {
               flag++;
           }
       }
       else if(b==1)
       {
           if(c==1 || a==1)
           {
               flag++;
           }
       }
       else if(c==1)
       {
           if(a==1 || b==1)
           {
               flag++;
           }
       }
       else{}


   }
    cout<<flag;
   return 0;
}
