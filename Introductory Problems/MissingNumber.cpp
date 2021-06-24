#include<bits/stdc++.h>  
using namespace std; 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;  cin>>n;
    int arr[n-1];
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        ans^=i;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        ans^=arr[i];
    }
    cout<<ans<<endl;

}