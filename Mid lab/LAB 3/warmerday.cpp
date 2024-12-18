#include <iostream>
using namespace std ;

int main(){

     int a ,count =1,warm;
    bool check =false ;
   
    int arr[7];

     cout<<"Enter "<<1 <<" day tempreture = ";

        cin>>arr[0];
        warm=arr[0];




     for (int i= 1 ; i<7 ; i++)
    {

        cout<<"Enter "<<i+1 <<" day tempreture = ";

        cin>>arr[i];

        if(arr[i]>warm)
        {
            warm= arr[i];
            check=true;

            
            cout<<"Number of days "<<count<<endl;
            count= 1;
            
        }
        else{

        count++;
        }



        


    }

    if (!check)
    {

        cout<<"No warmer days ."<<endl;


    }




}