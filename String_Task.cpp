#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
   char res[200];
   int i=0,j=0;
   while(i<str.length())
   {
       char c=str[i];
       if(str.at(i)>='A' && str.at(i)<='Z')
               {
               int ch=int(str[i])+32;
                c=char(ch);
               }
        if(c!= 'a' && c!='o' && c!='y' && c!='e' && c!='u' && c!='i')
           {
               res[j]='.';
               res[j+1]=c ;
               j+=2;
           }
       i++;
   }
   res[j]='\0';
   cout<<res;

   return 0;

}
