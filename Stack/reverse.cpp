#include <bits/stdc++.h>
using namespace std;

int main()
{


    string st ="SHOHAG";
    stack <char> reverse;

    for (int i = 0 ; i<st.length();i++)
    {

        char ch =st.at(i);
        reverse.push(ch);



    }
    string ans ="";

    while(!(reverse.empty()))
    {
        ans.push_back(reverse.top());

        reverse.pop();







    }

    cout<<ans<<endl;







}