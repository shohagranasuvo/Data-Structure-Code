#include <bits/stdc++.h>
using namespace std;
class graph {
    public :
    unordered_map<int , list<int>> map ;

    void addEdge(int u , int  v , bool directed)
    {

        map[u].push_back(v);
        if(directed==0)
        {
            map[v].push_back(u);
        }
    }

    void print(){

        for(auto  i : map)
        {
            cout<<i.first<<" ->" ;
            for(auto j : i.second)
            {
                cout<< j <<" ," ;
            }
            cout<<endl ;

        }
    }











};

int main() {

    cout<<"How many edge " ;
    int n ;
    // cout<<"Enter the number of node";
    // int c ;
    // cin>>c ;

    cin>>n ;
    graph g ;
    for(int  i = 0 ; i<n ; i++)
    {int k ,p ;


        cout<<"Enter 2 vertex of the edge ";
        cin>> k >>p ;
        g.addEdge(k , p , 0);
    }

     g.print();

    // for(int  i = 0 ; i<c ; i++)
    // {
    //    
    // }

    



    
    
    return 0;
}