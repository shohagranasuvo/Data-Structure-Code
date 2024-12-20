#include <bits/stdc++.h>
using namespace std;

int main()
{

     int a ,b;

    cout<<"Enter array row size  ";
    cin>>a ;

     cout<<"Enter array col size  ";
     cin>>b ;
    int arr[a][b];

     for (int i= 0 ; i<a ; i++)
    {
             for (int j= 0 ; j<b ; j++){

        cout<<"Enter "<<i+1 <<" number elementof 1 st = ";

        cin>>arr[i][j];
    }}
    
    cout<<"Main  matrix = \n";
    for (int i= 0 ; i<a ; i++)
    {
             for (int j= 0 ; j<b; j++){


                cout<<arr[i][j]<<" ";


             }
             cout<<"\n";
             }










     cout<<"Transpose matrix = \n ";
     for (int i= 0 ; i<b ; i++)
    {
             for (int j= 0 ; j<a; j++){


                cout<<arr[j][i]<<" ";

             }
             cout<<"\n";
             }



}