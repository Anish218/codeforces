#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int query;
    cin>>query;
    vector<string> str;
    for(int i=0;i<query;i++)
    {
        string word;

        cin>>word;

        if(word.length()> 100)
        {
            break;
        }

        if(word.length()>10)
        {
            string  ch,con;
            int flag;
            flag=word.size()-2;
            ch=to_string(flag);
            con=word.at(0)+ch+word.at(word.size()-1);
            str.push_back(con);



        }
        else{ str.push_back(word);
}
    }
    vector <string>:: iterator it=str.begin();
    while(it<str.end())
    {
        cout<<*it<<endl;
        it++;
    }
    return 0;

}
