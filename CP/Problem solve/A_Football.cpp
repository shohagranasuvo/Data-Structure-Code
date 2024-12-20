#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string line  ;
    cin>>line ;
    int count1= 0 ,count0=0 ;
    int check=0;

    for(int  i = 0 ; i <line.length(); i++)
    {
       

            if(line[i]=='0'  )
            {   
                 count0++;
                 count1=0 ;

                if(count1>=7 || count0>=7)
             {
            
                  break ;
            
                      }

                     
            }
            else if (line[i]=='1')
            {
               

                count1++;
                count0=0 ;

                if(count1>=7 || count0>=7)
             {
            
            break ;
            
              }
            

            }

            else
            {
                break ;
            }

        }

        if(count1>=7 || count0>=7)
        {
            cout<<"YES"<<endl;
            //check=1 ;
    
            
            

        }
    

   
   
   else
    {
        cout<<"NO"<<endl;
    }





}