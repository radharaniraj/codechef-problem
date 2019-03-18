#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,k=10000,m;
    cin>>n;
    string s[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        x=s[i].length();

        v.push_back(x);
    }
        for(int j=0;j<n;j++)
        {
            if(v[j]<k)
            {
                k=v[j];
                m=j;
            }
        }
    int cont=0;
    string t;
    t=s[m];
    for(int l=0;l<n;l++)
    {
        x=s[l].length();
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(t[j]==s[l][i])
            {
                cont++;
            }
        }
    }
    }
    if(cont>k)

     {
         int y=(cont-k);
        cout<<y;
     }
}
