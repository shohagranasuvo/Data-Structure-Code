#include <bits/stdc++.h>
using namespace std;
 
int main () {
 int test ;
cin>>test ;
while(test!=0)
{ int x, y ,z, result;
    cin>>x>>y>>z ;
    if(x==0 && y == 0 )
    {
     result = 0 ;
    }
 
   else  if(z>=x &&  z>=y)
    {
 
                 if(x>y)
 
                     {
                           if(x%x==0)
                                     {
 
                                          result = (((x /x))*2)-1;
 
        
       
                                                                       }
 
                          else
                               {
                                    result = (((x /x))*2)+1;
              
                                                                                 }
 
 
                     }
                else if(x<=y)
                               { 
                                 if((y)% (y) !=0)
                                                   {
 
                                                     result  = (((y/y)+1)*2);
 
                                                                                 }
                               else{
                                      result  = ((y/y)*2);
                                                          }
 
                                                                   }
       
 
    }
 
    else if (x>y){
 
   
 
    
 
    
        if(x%z==0)
        {
 
            result = (((x /z))*2)-1;
 
        
        }
 
        else
        {
             result = (((x /z))*2)+1;
              
        }
 
 
    }


    else if(x<=y)
    { 
           if(y%z!=0)
    {
 
         result  = (((y/z)+1)*2);
 
    }
    else{
         result  = ((y/z)*2);
    }
 
    }

      
 
    cout<<result<<endl;
 
   
 
 
 
    test--;
 
}
 
 
 
 
}