#include<bits/stdc++.h>  
using namespace std; 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;   cin>>s;
    int cnt=1,mx=0;
    if(s.size()==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
            mx=max(mx,cnt);
        }
        else
        {
            cnt=1;
            mx=max(mx,cnt);
        }
    }
    cout<<mx<<endl;
}