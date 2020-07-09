
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int b,a,c,d;
  cin>>a>>b;
  cin>>c>>d;

        int res=-1;
        for(int i=0;i<100;i++){
                for(int j=0;j<100;j++)
                {
                    if(b+(i*a)==d+(j*c))
                    {
                        res=d+(j*c);
                        break;
                    }
                }
                if(res!=-1)
                    break;
        }

   if(res==-1)
        {
            cout<<res;
        }
        else
            cout<<res;

  return 0;
}
