#include <bits/stdc++.h>
#define ll long long int 
using namespace std ;

int main()
{
    vector<int> *vp= new vector <int>();
    vector<int> v(10,100);
    for(auto ele : v)
    {
        cout<<ele<<"  ";
    } 

    for(int i = 0 ;i<100;i++)
    {
        cout<<v.size() <<endl ;
        cout<<v.capacity()<<endl; 
        v.push_back(i+1) ;
    }

    // for(auto ele : v)
    // {
    //     cout<<ele<<"  ";
    // }
    

    
    return 0 ;
}