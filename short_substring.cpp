/*
    Algorithm
    ->first input your string;
    ->loop to go through all the odd indexes and its corresponding ones.
   print the concateneted string;

*/
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    int query;
     cin>>query;
     for(int k=0;k<query;k++)
     {
         string str,word;
         cin>>str;
         word.push_back(str.at(0));
     for(int i=1;i<str.length()-1;i++)
     {

         word+=str.at(i);
         i++;

     }
     word+=str.at(str.length()-1);
     cout<<word<<endl;
}
return 0;
}
