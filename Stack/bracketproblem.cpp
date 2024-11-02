#include <bits/stdc++.h>
using namespace std;

void checking (string expression )
{

    stack <char> st;

    for(int i = 0 ; i< expression.length();i++)
    {

        char ch = expression[i];

        if (ch =='[' || ch == '{'|| ch == '(')
        {

            st.push(ch);



        }

        else 
        {

              if (st.empty())
            {
                cout << "Syntax error: unmatched closing bracket" << endl;
                return;
            }

           char opch = st.top();

            if((ch== ')'&& opch =='(') || (ch== '}'&& opch =='{') ||(ch== ']'&& opch =='[') )
            {

            st.pop();
            }

            else 
            {

                cout<<"syntax error"<<endl;
            }





        }

     


    }

    if(st.empty())
        {


            cout<<"Right expression"<<endl;




        }

         else 
            {

                cout<<"wrong expression for extra bracket"<<endl;
            }











}



int main()
{
    string expression ="[{()}]{()}){{{}}}";

    checking(expression);













}