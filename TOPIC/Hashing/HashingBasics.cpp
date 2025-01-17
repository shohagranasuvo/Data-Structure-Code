#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map< string ,int> m ;

    pair <string ,int > p =make_pair("Shohag" , 1) ;

    m.insert(p);
    pair<string , int> pi("Rana" , 2) ;
    m.insert(pi);
    m["Shuvo"]=3 ;

    cout<<m["Shuvo"]<<endl ;
    //cout<<m.at("Unknown")<<endl ;// give a error
    cout<<m["Unknown" ]<<endl ;  //create a key with value  0 
    cout<<m.at("Unknown")<<endl; //now it will find  0 
    cout<<m.size()<<endl ; 
    //erase
    m.erase("Unknown") ; 
    cout<<m.count("Is present or not")<<endl ;

    cout<<m.size()<<endl;
    for(auto i : m )
    {
        cout<<i.first<<"  =  "<<i.second<<endl ;
    
    }

    //iterator

    unordered_map<string, int> ::iterator it = m.begin();

    while(it != m.end())
    {
        cout<<it->first << "  = " << it->second<<endl ; 
        it++ ; 

    }

    // if I need to print reverse

    vector<pair<string , int>> ele (m.begin() , m .end());

    reverse(ele.begin(), ele.end());
    for(auto i : ele)
    {
        cout<<i.first<<" = "<<i.second<<endl ; 
    }

    //if I use map  then it store with it order of BST

    //unordered map time complexity it O(n) but it map tiome complexity is 0(log(n))


     




     
    
    
    return 0;
}