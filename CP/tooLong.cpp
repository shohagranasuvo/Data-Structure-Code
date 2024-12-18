#include <bits/stdc++.h>
using namespace std ;

int main ()
{

int test ;
cin>>test ;
while(test!=0)
{

     string x ;

     cin>>x ;
     int y=x.length();

     if(y>10)
     {

        int c =y-2 ;


     cout<<x.at(0);
     cout<<c;
     cout<<x.at(y-1)<<endl;





     }

     else
     {
        cout<<x<<endl ;
     }

     test--;


}

   
    

}