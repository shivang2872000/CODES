#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin.ignore();
        getline(cin,s1);
        int x=s1.size();
        cin.ignore();
        getline(cin,s2);
        int y=s2.size();
        for(int i=0;i<x;i++)
        { int flag=1;
            for(int j=0;j<y;j++)
            {
                if(s1[i+j]==s2[j])
                {
                    continue;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
