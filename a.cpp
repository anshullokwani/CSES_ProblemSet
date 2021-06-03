#include<bits/stdc++.h>  
using namespace std; 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;	cin>>t;
    while(t--)
    {
    	int n,k;	cin>>n>>k;
    	int a[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	sort(a,a+n);
    	for(int i=0;i<n/2;i++)
    	{
    		swap(a[i],a[n-i-1]);
    	}
    	int p1=0,p2=0;
    	for(int i=0;i<(2*k);i++)
    	{
    		if(i%2==0)
    		{
    			p1+=a[i];

    		}
    		else
    		{
    			p2+=a[i];
    		}
    	}
    	p2+=a[2*k];
    	cout<<max(p1,p2)<<endl;
    }
}