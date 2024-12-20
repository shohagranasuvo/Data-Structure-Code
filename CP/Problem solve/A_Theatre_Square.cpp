#include <bits/stdc++.h>
using namespace std ;

int main()
{

    long long a , b ,c ,area ,cc ,result ;
    cin>>a>>b>>c ;

     if(c>=a && c>=b)
        {
            cout<<1 ;
        }

    else  if(c>=a || c>=b)
    {
        if(a>c && a%c!=0)
        {
            cout<<(a/c)+1 ;
        }
        else if (b>c && b%c!=0)
        {
            cout<<(b/c)+1;
        }
        else if(a>c && a%c==0)
        {
            cout<<a/c ;

        }
         else if(b>c && b%c==0)
        {
            cout<<b/c ;

        }

        

    }
    else 
    {
        // area =a*b;
        // cc=c*c ;

      


       
        if(a%c != 0 && b%c ==0 )
        {
            result = ((a/c)+1)*(b/c);
            cout<<result ;
        }
      else  if(a%c != 0 && b%c !=0 )
        {
            result = ((a/c)+1)*((b/c)+1);
            cout<<result ;
        }

        else  if(b%c != 0 && a%c==0 )
        {
            result = ((a/c))*((b/c)+1);
            cout<<result ;
        }
        else  if(b%c == 0 && a%c==0 )
        {
            result = ((a/c))*((b/c));
            cout<<result ;
        }


        
       

   
    }
return 0 ;
}