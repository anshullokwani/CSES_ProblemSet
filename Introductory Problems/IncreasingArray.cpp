#include<bits/stdc++.h>  
using namespace std; 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;  cin>>n;
    vector<long long>arr(n);
    for(auto &x: arr)
    {
    	cin>>x;
    }
    long long ans=0,mx=arr[0];
    for(int i=1;i<n;i++)
    {
    	ans+=max(0LL,mx-arr[i]);
    	mx=max(mx,arr[i]);
    }
    cout<<ans<<endl;

}