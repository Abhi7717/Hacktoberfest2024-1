#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=0,n,l,x,y;
    cin>>l;
    vector<pair<int,int>>p;
    for(int i=0;i<l;i++)
    {
        cin>>x>>y;
        p.push_back({x,y});
        
    }
    
    int maxx=INT_MIN;
    // cout<<maxx;
        maxx=max(maxx,p[0].second);
        n=p[0].second;
    for(int i=1;i<l-1;i++)
    {
        k=n-p[i].first;
        n=k+p[i].second;
        maxx=max(maxx,n);
    }
    cout<<maxx;
}
