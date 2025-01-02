#include <bits/stdc++.h>
using namespace std;
int  even(int arr[],int size ,int i )
{
    
        if(arr[i]%2==0)
        {
            return arr[i] ;
        }
        else
         {
            return -7777;

         }
    



}
void odd(int arr[],int size)
{
    cout<<"here the odd number :";
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }cout<<endl;
}
int main() {

int size ;
cout<<"Give me the size "<<endl;
cin>>size ;

    int arr[size];
    for(int i = 0 ;i<size ;i++)
    {
        cin>>arr[i];
    }

     for(int i = 0 ;i<size ;i++){

       int x=  even(arr,size,i);

       if(x==-7777)
       {
        continue;
       }
    
   cout<<x <<" ";
    
    }


    //odd(arr,size);

    
    
    return 0;
}