//Solution:


#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int helper(string &inp,int n)
{
        unordered_map<char,int>mp;

        for(int i=0;i<n;i++)
            mp[inp[i]]++;

        int i= rand()%100;

        for(auto it =mp.begin();it!=mp.end();it++)
        {
            if(it->second>1)
                it->first=it->first+i;
        }
        for(auto y:mp)
            cout<<y<<" ";
}
int main() {
    

    string inp;
    cin>>inp;
    int n=inp.length();
    helper(string,n);


}
