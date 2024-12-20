#include <bits/stdc++.h>
using namespace std ;
void copyString (char first [], char change [] ,int size)
{

     for(int i = 0 ; i<size; i++)
     {
        change[i]=first[i];
     }

    


}
int main()
{

    
    int size ,time ;
    cin>>size>>time ;
    char first[size] ,change[size];
    for(int i = 0 ; i<size ; i++)
    {
        cin>>first[i] ;

    }
    copyString(first ,change ,size);

    for(int j = 1 ; j<=time ; j++){
     for(int i = 0 ; i<size-1 ; i++)
     {
        if(first[i+1]=='G' && first [i]=='B')
        {
            swap(change[i+1],change [i]);

           
        }
        
     }
     copyString(change ,first ,size);

    }

    for(int i = 0 ; i<size ; i++)
    {
        cout<<first[i];
    }




}