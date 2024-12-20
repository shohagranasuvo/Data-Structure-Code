#include <bits/stdc++.h>
using namespace std ;

int main ()
{

int test ;
cin>>test ;
while(test!=0)
{
    int n ,count = 0 ,countt=1;


    cin>>n;

    int arr[n];
    for(int i = 0  ; i< n ; i++)
    {
        cin>>arr[i];
    }

    sort (arr,arr+n);

    //  for(int i = 0  ; i< n ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int j ;

    for(int  i = 0 ; i< n ;i++)
    {
        countt= 1 ;
        for(j = i+1 ;j <  n; j++){
       
           

            if (arr[i]==arr[j])
            {
                countt++;
               // cout<<"Inside";
               

            }
            else
            {
                break ;
            }
            
            
          
        }
        count =count + (countt/2) ;

      i=j-1;
      
        
        
        
    
   


}
 cout<<count <<endl ;
  test--;
}
}