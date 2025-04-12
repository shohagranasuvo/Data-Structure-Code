#include <bits/stdc++.h>
using namespace std;

int main() {

    
    string s  ;
    cin>>s ;
    set<char> l ;
    for(int  i = 0 ; i<s.size(); i++)
    {
        l.insert(s[i]);


    }
      //cout<<l.size() <<endl;

    if(l.size() %2==0)
    {
      
        cout<<"CHAT WITH HER!"<<endl;
    }
    else if ( l.size()% 2!= 0 )
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    
    return 0;
}