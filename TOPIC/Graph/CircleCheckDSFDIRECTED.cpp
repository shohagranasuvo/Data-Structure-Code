#include <bits/stdc++.h>
using namespace std;
bool dsfCheck (int i   ,unordered_map<int , bool> &visited , unordered_map <int , bool> &dsfVisited , unordered_map <int , list<int>> &adj )
{
    visited[i]=true; 
    dsfVisited[i]=true;
    for(auto neighbor: adj [i] )
    {
        if(!visited[neighbor])
        {
              bool checkVisit =dsfCheck(i , visited , dsfVisited , adj);
               if (checkVisit){
                return true ;
            }

        }
        else if (dsfVisited[neighbor])
        {
            return true ;


        }
       
    }

    dsfVisited[i]=false;
    return  false ;
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
    unordered_map <int , bool> dsfVisited ;

    for(int i =1 ; i <adj.size() ; i ++)
    {
        if(!visited[i])
        {
            bool checkVisit =dsfCheck(i , visited , dsfVisited , adj);
            if (checkVisit){
                return 1 ;
            }
        }
    }
     return 0 ;

}
int main() {

    
    
    return 0;
}