#include <iostream>
#include<stack>
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
        }
    }
    if(st.empty())
        {
            cout<<expression<<" is Balanced "<<endl;
        }
         else 
            {
                cout<<expression<<" is not Balanced"<<endl;
            }
}
int main()
{
    string expression ="(){}[]";

    checking(expression);
   cout<<endl ;
    string expression2  = "({[)]}";
    checking(expression2) ;

}