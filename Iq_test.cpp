
#include<bits/stdc++.h>
bool prime(int x)
{
    int co=0;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            co=1;
            break;
        }
    }
    if(co==0)
        return true;
    else
        return false;
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int no_of_even=0;
    int no_of_odd=0;
    int no_of_prime=0;
    int index_even,index_odd,index_prime;
    int i=1;
    while(i<=n)
    {
        int x;
        cin>>x;
        if(x%2==0)
        {
            no_of_even++;
            index_even=i;
        }
        else if(x%2!=0)
        {
            if(prime(x)==true)
            {
                no_of_prime++;
                index_prime=i;
            }
            else
            {
            no_of_odd++;
            index_odd=i;
            }
        }
        i++;
    }
       if(no_of_even==1)
            cout<<index_even;
         else if(no_of_odd==1)
            cout<<index_odd;
             else if(no_of_prime==1)
            cout<<index_prime;

    return 0;
}
