#include<bits/stdc++.h>
using namespace std ;

void  prepareEdge(unordered_map <int ,set<int>> &adjacent, vector<vector<int>> &adj)
{
    for(int i = 0 ; i<adj.size(); i++)
    {
        int u = adj[i][0];
        int v = adj[i][1];

        adjacent[v].insert(u);
        adjacent[u].insert(v);
    }
    
}
void bsf ( unordered_map <int ,set<int>> &adjacent ,  vector<int> &ans , unordered_map<int, bool >  &visited ,int node )
{
    queue<int> q;
    q.push(node);
    // ans.push_back(node);
    visited[node]=1 ;
    while(!q.empty())
    {
        int f = q.front() ;
        q.pop();
        ans.push_back(f);


       for(auto i : adjacent[f])
       {
           if(!visited[i])
           {
              q.push(i);
               visited[i]=1 ;
               
           }
       }
    }


}




vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    unordered_map <int ,set<int>> adjacent ;
    vector<int> ans ;
    unordered_map<int, bool >  visited ;

    prepareEdge(adjacent , adj ) ;

    for(int i = 0 ; i<n ; i++)
    {

        if(!visited[i])
        {
            bsf( adjacent , ans ,visited , i ) ;
        }
        
    }
    return ans ;

}