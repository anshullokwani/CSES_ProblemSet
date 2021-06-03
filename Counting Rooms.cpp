#include<bits/stdc++.h>  
using namespace std; 
void room(int x, int y, vector<vector<char>>&map)
{
	int n=map.size();
	int m=map[0].size();
	if(x<0||x>=n||y<0||y>=m||map[x][y]=='#') return;
	map[x][y]='#';
	room(x+1,y,map);
	room(x-1,y,map);
	room(x,y-1,map);
	room(x,y+1,map);
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m;	cin>>n>>m;
    vector<vector<char>>map;
    for(int i=0;i<n;i++)
    {
    	vector<char>temp;
    	for(int j=0;j<m;j++)
    	{
    		char x;
    		cin>>x;
    		temp.push_back(x);
    	}
    	map.push_back(temp);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		if(map[i][j]=='.')
    		{
	    		room(i,j,map);
	    		cnt++;	
    		}
    	}
    }
    cout<<cnt<<endl;
}