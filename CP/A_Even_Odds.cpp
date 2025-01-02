#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a ,b;
    cin>>a>>b ;
    long long aa ;
    if(a%2!=0)
    {
       aa =(a/2)+1;
    }
    else
    {
        aa=a/2;
    }
   // cout<<aa<<endl;

     if(b<= (aa))
    {

        if( a%2== 0)
        {
             long long result = (2*b)-1 ;
        cout<<result<<endl;


        }
        if( a%2!= 0)
        {
             long long result = (2*b)-1 ;
            // cout<<"HERE"<<endl;
             cout<<result<<endl;
            
        }
      
       

    }

   
    else if (b> (aa))
    {

        if(a%2!= 0 )
        {
        long long result2 = (2*(b- ((a/2)+1)));
        cout<<result2<<endl;
        }
        else if (a%2 == 0)
        {   long long x =(a/2);
           long long  result1 = 2*(b-x);
          // cout<<"last"<<endl;
        cout<<result1<<endl;

        }

    }


    
    
    return 0;
}