// Solution:

#include <bits/stdc++.h>
using namespace std;

void helper(long long int x,long long int y)
{   
    int flag;
    for(int i=x;i<=y;i++)
    {   flag=1;
        for(int j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
           cout<<i<<" ";

    }
}


int main() 
{
    string st,ed;
    cin>>st>>ed;

    int x=stoi(st,0,2);
   // cout<<x<<endl;
    int y=stoi(ed,0,2);
   // cout<<y;
    helper(x,y);
    return 0;
}
