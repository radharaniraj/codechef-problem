#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,a,b,k,m,cf=0,ap=0;;
    cin>>n>>a>>b>>k;
    /*for(int i=1;i<=n;i++)
    {
        if(i%a==0&&i%b==0)
        {
        for(int j=1;j<=n;j++)
        {
            if(j==i)
            {
                for(int j=i;j<n-1;j++)
            {
                j=j+1;
            }
            }
        }
            break;

    }
    }
    for(int k=1;k<n;k++)
    {
        cout<<k;
    }*/
    for(int i=0;i<n;i++)
    {
        if(i%a==0&&i%b!=0)
        {
            ap++;
        }
        if(i%b==0&&i%a!=0)
        {
            cf++;
        }
    }
        if(ap+cf>=k)
        {

            cout<<"win";
        }
    }
}

