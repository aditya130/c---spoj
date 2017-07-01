#include <bits/stdc++.h>

using namespace std;

string add_string(string a,string b)
{
    string ans;
    int i=0,j=0;
    int carry=0,sum=0;
    while(i<a.size() && j<b.size())
    {
        sum = (a[i]-'0')+(b[j]-'0')+carry;
        carry = sum/10;
        ans += ((char)((sum%10)+'0'));
        i++;
        j++;
    }
    while(i<a.size())
    {
        sum = (a[i]-'0')+carry;
        carry = sum/10;
        ans += ((char)((sum%10)+'0'));
        i++;
    }
    while(j<b.size())
    {
        sum = (b[j]-'0')+carry;
        carry = sum/10;
        ans += ((char)((sum%10)+'0'));
        j++;
    }
    if(carry != 0)
    {
        ans += ((char)(carry+'0'));
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    string a,b;
    int x,i,j;
    cin>>x;
    string ans,ansf;
    for(int i=0;i<x;i++)
    {
        cin>>a>>b;
        while(a[a.size()-1]=='0')
            a.pop_back();
        while(b[b.size()-1]=='0')
            b.pop_back();
        ans = add_string(a,b);
        reverse(ans.begin(),ans.end());
        while(ans[ans.size()-1]=='0')
            ans.pop_back();
        reverse(ans.begin(),ans.end());
        cout<< ans<<endl;
    }
    return 0;
}
