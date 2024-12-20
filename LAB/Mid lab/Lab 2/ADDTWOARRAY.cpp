#include <iostream>
using namespace std;

int main()
{

    int a , b ,x;

    cout<<"Enter array size ";
    cin>>a ;
    cout <<"Enter second array size ";
    cin>>b;

    int arr[a],arr1[b];

    for (int i= 0 ; i<a ; i++)
    {

        cout<<"Enter "<<i+1 <<" number elementof 1 st = ";

        cin>>arr[i];
    }

      for (int i= 0 ; i<b ; i++)
    {

        cout<<"Enter "<<i+1 <<" number element of 2nd array = ";

        cin>>arr1[i];
    }
    x=a+b;
    int j = 0 ;

    int arr2[x];

    for (int i = 0 ; i<x ;i++)
    {

        if (i<b)
        {

            arr2[i]= arr1[b-i-1];


        }

        else if ( i>=b)
        {
            

            arr2[i]=arr[a-j-1];
            j++;


        }



    }

     cout<<"Your array is = ";

     for (int i = 0 ; i<x ;i++)
    {

        cout<<arr2[i]<<" ";

       
    }





    









}