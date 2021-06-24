#include<bits/stdc++.h>  
using namespace std; 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;  cin>>n;
    long long x=1,y=2;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else if(n<=3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n%2==0)
    {
        int z=n/2;
        while(z--)
        {
            cout<<y<<" ";
            y+=2;
        } 
        
        z=n/2;
        while(z--)
        {
            cout<<x<<" ";
            x+=2;
        }
              
    }
    else
    {
        int z=n/2;
        while(z--)
        {
            cout<<y<<" ";
            y+=2;
        }
        z=(n/2)+1;
        while(z--)
        {
            cout<<x<<" ";
            x+=2;
        }    
    }
}