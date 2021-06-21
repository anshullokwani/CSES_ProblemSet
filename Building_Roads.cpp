#include<bits/stdc++.h>  
using namespace std; 
void dfs(int node, vector<int>adj[], vector<bool>&vis)
{
	vis[node]=1;
	for(auto it: adj[node])
	{
		if(!vis[it])
		{
			dfs(it,adj,vis);
		}
	}
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;	cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
    	int x,y;	cin>>x>>y;
    	adj[x].push_back(y);
    	adj[y].push_back(x);
    }
    vector<bool>vis(n+1,0);
    vector<int>ans;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
    	if(!vis[i])	
    	{
    		cnt++;
    		ans.push_back(i);
    		dfs(i,adj,vis);
    	}
    }
    cout<<cnt-1<<endl;
    for(int i=0;i<ans.size()-1;i++)
    {
    	cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
}