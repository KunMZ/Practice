#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;

vector<int> adj[10005];
int indeg[10005]; // in-degree
int main() {
  // initialization
  int n,m,a,b,ans=0,sorted=0;
  cin>>n>>m;
  ans=n*100;
  memset(indeg,0,sizeof(indeg));
  for(int i=0;i<=n;i++) adj[i].clear();
    
  for(int i=0;i<m;i++)
    {
      cin>>a>>b;
      adj[b].push_back(a);
      indeg[a]++;
    }
  // same here
  queue<int> q;
  int ok=0;
  while(true)
    {
      // search for all the nodes with 0 in-degree
      for(int i=1;i<=n;i++)
        {
          if(indeg[i]==0)
            {
              indeg[i]=-1;  // set it visited
              q.push(i);
            }
        }
      // can't find any node any more
      if(q.empty())break;
      
      while(!q.empty()) {
        int num=q.front();
        q.pop();
        sorted++;
        //  the precedence of adjecent node decrese
        for(int i=0;i<adj[num].size();i++) {
          indeg[adj[num][i]]--;
        }
        ans+=ok;
      }
      ok++;
    }
  if(sorted==n)
    cout<<ans<<endl;
  else
    cout<<"Poor Xed"<<endl;
  return 0;
} 
