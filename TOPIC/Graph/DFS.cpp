#include <bits/stdc++.h>
using namespace std;
void dsf (int node , unordered_map <int , bool> &visited , vector<int > & component ,unordered_map <int ,list <int> > &adj  ){

    component.push_back(node);
    visited[node]=1 ;
    for( auto i : adj [ node])
    {
        if(!visited[i])
        {
           dsf(i , visited , component ,adj);
        }
    }

}

void findAdj ( unordered_map <int ,list <int> > &adj , vector<vector<int>> &edges )
{
    for(int i = 0 ; i<edges.size(); i++)
    {
        int  u = edges[i][0];
        int v= edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


}


vector<vector<int>> depthFirstSearch (int V ,int E  , vector<vector<int>> &edges)
{
    unordered_map <int ,list <int> > adj ;

   findAdj(adj ,edges);
   vector<vector<int>> ans ;
   unordered_map <int , bool> visited ;

   for(int  i = 0  ; i<V;i++)
   {
     if(!visited[i]){

        vector<int>component ;

        dsf(i , visited , component ,adj);
        ans.push_back(component);

     }




   }
   return ans ;

}

int main() {




    
    
    return 0;
}