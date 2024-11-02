#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(15);
    st.pop();
   
    cout<<st.top()<<endl;
     st.pop();
    if(st.empty())
    {
        cout<<"Stack is empty"<<endl;


    }
    else 
    {

        cout<<"Stack is not empty";
    }







}