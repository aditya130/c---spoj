#include <bits/stdc++.h>

using namespace std;

bool isprime(int x)
{
    if(x<2)
        return false;
    if(x==2)
        return true;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    int i,j,k,n,a,b,ans;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        v.clear();
        cin>>a>>b;
        v.push_back(false);
        v.push_back(false);
        for(j=2;j<=b;j++)
            v.push_back(true);
        for(j=2;j<=b;j++)
        {
            if(v[j]==true)
            {
                if(!isprime(j))
                {
                    v[j]=false;
                    for(k=j*j;k<=b;k+=k)
                    {
                        v[k]=false;
                    }
                }
            }
        }
        for(i=a;i<=b;i++)
        {
            if(v[i]==true)
                cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
