
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int co=0;
   int loop_co=0;
   for(int i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
       for(int j=1;j<=m;j++)
       {
           cout<<'#';
       }
       }
       else{  for(int j=1;j<=m;j++)
           if(co==0 && j==m&& loop_co==0)
           {
           cout<<'#';
           co=1;
           loop_co=1;
           }
             else if(co==1 && j==1 && loop_co==1)
           {
           cout<<'#';
           co=0;
           }

           else{cout<<'.';}
       }
       if(loop_co==1 && i%4==0)
       loop_co=0;

        cout<<"\n";
   }
}
