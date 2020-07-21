#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[6][6];
    int posi1,posi2;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                posi1=i;posi2=j;
            }
        }
    }
    cout<<abs(posi1-3)+abs(posi2-3);
    return 0;


}
