#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s ;
    int mainSize=s.size();
    int y= stoi(s);
        y++;
        s=to_string(y);

    
    set<int>year ;
    for(int i= 0 ; i<4;i++)
    {
        year.insert(s[i] - '0');
    }
    // for(auto ele : year)
    // {
    //     cout<<ele<<"  ";
    // }
    // cout<<endl;
     

    while (year.size()<4)
    {

        int x= stoi(s);
        x++;
        s=to_string(x);

        year.clear();
        for(int i= 0 ; i<4;i++)
    {
        year.insert(s[i] - '0');
    }
    // cout<<"After convert " ;
    //  for(auto ele : year)
    // {
    //     cout<<ele<<"  ";
    // }

    // cout<<endl;


    }
    cout<<s<<endl;
    
    
    return 0;
}