#include <iostream>
using namespace std ;

int main(){
     int a ,count=0;

   
    int arr[7];

     for (int i= 0 ; i<7 ; i++)
    {

        cout<<"Enter "<<i+1 <<" day stock = ";

        cin>>arr[i];
    }

    int large=arr[0] ;
    int small=arr[0] ;

    for(int i= 1 ; i<7 ; i++)
    {

        if (arr[i]>=large )
        {
            large =arr[i];
            

        }

        if(arr[i]<=small)
        {
            small = arr[i];
        }


    }


    cout<<"Higest stock level  "<<large <<" lowest stock level "<<small<<endl;






}