#include <bits/stdc++.h>
using namespace std ;

int main()

{


    string heading  , message  ;
    bool check= false ,total =true ;

        getline(cin, heading);

        getline (cin , message);

        for(int i = 0 ; i<message .length() ; i++)
        { if( message[i]==' ')
        {
            continue;
        }

            check =false ;

            for(int j = 0 ; j<heading.length() ;j++)
            {
                if(int(message[i])!=32)
                {

                    if(int(message[i])==int(heading[j]))
                    {

                        heading[j]=' ';
                        check = true ;
                        break ; 


                    }

                }
            }

            if(check ==false )
            {
                total = false ;
            
            }
        }

        if(total == true)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

        

return  0 ;

}