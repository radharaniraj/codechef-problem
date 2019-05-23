#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vector<int>v;
    int n,x,cnt=1;
    cin>>n>>x;
    v.push_back(x);
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            x=x-1;
v.push_back(x);
        }
        if(s[i]=='R')
        {
            x=x+1;
v.push_back(x);
    }
    }
sort(v.begin(),v.end());
int g=n+1;
for(int h=0;h<g-1;h++)
{
    if(v[h]==v[h+1])
    {
        continue;
    }
else

{
    cnt++;
}
}
cout<<cnt;
    }
}



