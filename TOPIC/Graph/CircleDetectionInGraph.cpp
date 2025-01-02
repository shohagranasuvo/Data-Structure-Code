#include <bits/stdc++.h>
using namespace std;

bool bsfCircle(int node ,unordered_map<int , bool> &visited , unordered_map <int , list<int>> &adj )
{   unordered_map <int , int> parent ;
    parent [node]=-1 ;
    visited[node]=true ;
    
    
    
    
    

    queue <int> q ;

    q.push(node);

    while(!q.empty())
    {
        
        int front = q.front();
        q.pop();
        for(auto neighbour : adj[front])
        {
            if(visited[neighbour]== true  && neighbour != parent[front])
            {
                return true ;

            }
           else if(!visited[neighbour])
           {
            visited[neighbour]=true ;
            q.push(neighbour);
            parent[neighbour]=front ;

           }
        }
     
    }
    return false ;




}



int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    unordered_map <int , list<int>> adj ;
    for(int i = 0 ; i < edges.size() ; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int , bool> visited ;

     bool ans= false;
    for(int i = 0 ; i< n ; i++)
    {
        if(!visited[i])
        {

          ans =  bsfCircle(i ,visited ,adj) ;
           if(ans==true)
           {
            return 1;
           }
        }

    }
    if(ans==false)
    {
        return  0 ;

    }
    

 
}

int main() {


    
    
    return 0;
}