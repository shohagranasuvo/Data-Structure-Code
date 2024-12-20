#include <bits/stdc++.h>
using namespace std ;

int main()
{

    int a,b,c ;
    cin>>a>>b>>c ;
      int mini ,maxi  ;

    
    //for 1

      if (a==1 && b==1 && c==1 )
    {


        cout<<a+b+c ;
    }
   else  if(a==1 || b==1 || c==1)
    {
    if (a==1 && c!=1)
    {

        //  mini = min (b , c); 

        //  maxi =max(b,c) ;
          cout<<(a+b)*c ;

    }

    else if( a==1 && c==1)
    {

        //   mini = min (b , c); 

        //  maxi =max(b,c) ;
        //   cout<<(a+mini)*maxi ;

        cout<<a+b+c ;


    }
    else if (b==1)
    {

        mini = min (a , c); 
        maxi =max(a,c);

         cout<<(b+mini)*maxi ;

    }
    else if(c==1)
    {

       // mini = min (a,b);
       //  maxi =max(a,b);

         cout<<(c+b)*a ;


    }


    }
   

    else
    {

        cout<<a*b*c ;



    }








   

    

return 0 ;

}