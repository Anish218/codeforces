
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int query,n;
    cin>>query;
    for(int k=0;k<query;k++)
    { cin>>n;
    int arr[n];
    int even=0,odd=0,good=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2==0)
            {
                good++;
            }
            else
                even++;
        }
         if(i%2==1)
        {
            if(arr[i]%2==1)
            {
                good++;
            }
            else
                odd++;
        }
}
   if(good==n)
{
    cout<<0<<endl;
}
else  if(odd==even)
        {
            cout<<even<<endl;
        }
       else if(odd!=even)
        {
            cout<<-1<<endl;
        }
    }

return 0;
}
