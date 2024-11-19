#include <iostream>
using namespace std ;

int main(){

     int a ;

     cout<<"Number of customer ";
     cin>>a;

   
    int arr[a];

     for (int i= 0 ; i<a ; i++)
    {

        cout<<"Enter "<<i+1 <<" customer waiting time  = ";

        cin>>arr[i];
    }

     int sum = 0;
     for (int i= 0 ; i<a ; i++)
    {

        sum+=arr[i];

    }

    double avg = sum/a ;

    cout<<"Average waiting time "<<avg<<endl;







}