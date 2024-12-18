#include <bits/stdc++.h>
using namespace std;
int j = 0 ;
 
int main () {

    string s;
    cin>>s;
    //cout<<s.at(3);

    char h []={'h','e','l','l','o'} ;
    bool check = false ;

    for(int i = 0 ; i<5 ;i++)
    {
        check =false ;
        for( j ; j<s.length() ; j++)
        {

            if(h[i]==s.at(j))
            {

                check = true ;
                j++;
                break ;


            }
           
        }

         if(check==false)
            {
                break ;
            }
    }

    if(check==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}