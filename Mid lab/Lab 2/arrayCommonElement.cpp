#include <iostream>
using namespace std;

int main()
{

    int a , b;

    cout<<"Enter array size ";
    cin>>a ;
    cout <<"Enter second array size ";
    cin>>b;
       int small, big; 

     if(a>=b)
    {
        small=b;
        big = a;
       
    }
    else 
    {
        small=a ;
        big = b; 
    }


    int arr[small],arr1[big];

    for (int i= 0 ; i<small ; i++)
    {

        cout<<"Enter "<<i+1 <<" number element of 1 st array = ";

        cin>>arr[i];
    }

      for (int i= 0 ; i<big ; i++)
    {

        cout<<"Enter "<<i+1 <<" number element of 2nd array = ";

        cin>>arr1[i];
    }

  

   
    int result[small],k=0;

    for (int i = 0 ; i<small;i++)
    {

         for (int j = 0 ; j<big;j++)
         {

            if(arr[i]==arr1[j])
            {
                result[k]=arr[i];
                k++;




            }


         }
        



    }
    if(k==0)
    {

        cout<<"No common element!\n";



    }


    else
    {

         cout<<"Your array is = ";

     for (int i = 0 ; i<k;i++)
    {

        cout<<result[i]<<" ";

       
    }





    }



}