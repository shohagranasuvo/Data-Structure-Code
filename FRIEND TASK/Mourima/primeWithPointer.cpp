#include <bits/stdc++.h>
using namespace std;

void primePrint (int *q  )
{
    bool check = true  ; 


    for (int i = 2 ; i<*q   ; i ++)
    {
         if(*q %i == 0 )
         {
            check = false;
             
         }

    }
    if(check == true && *q>=2)  
    {
        cout<<*q <<" is a prime number "<<endl ;
    }
    else  {
        cout<<*q << " is not a prime number "<<endl ;
    }

}


void prime(int *p){
 for(int i=0;i<5;i++){

    primePrint(p+i);


 }

}
int main() {

    int arr[5];
    for(int   i = 0 ; i<5 ;i++)
    {
        cin>>arr[ i ] ; 

    }
    int *p;
    p=arr;
    prime(p);
    
    
    
    
    return 0;
}