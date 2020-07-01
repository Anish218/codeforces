#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,num,win,first_person,rest;
        cin>>n>>m>>k;
        num=n/k;


            if(m<=num)
            {
                first_person=m;
                rest=0;
            }
           else  if(m>num)
            {
                first_person=num;
                if((m-num)%(k-1)==0)
                rest=(m-num)/(k-1);
                else
                {
                    rest=(m-num)/(k-1);
                    rest=rest+1;
                }
            }

        win=first_person-rest;
        cout<<win<<endl;


    }
    return 0;
}
