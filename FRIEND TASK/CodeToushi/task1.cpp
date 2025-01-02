#include <iostream>
using namespace std ;

int main(){

    int arr[13]={1,2,3,4,5,6,7,8,9,10};

    cout<<"Given array :";

      for(int i = 0 ; i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
   cout<< endl;


    for(int i = 10 ; i>=0;i--)
    {

        arr[i]=arr[i-1];
        

       

        // else if (i==4)
        // {
        //     arr[i]=200;
        // }

        // else if(sizeof(arr)/sizeof(arr[0])-1==i)
        // {

        //     arr[i]=100;


        // }






    }

    arr[0]=300;

    int k =5;
     for(int i = 11; i>5;i--)
    {

        arr[i]=arr[i-1];
    }
    arr[k]=200;
    arr[12]=100;
        




    cout<<"Output Array After addition  :"<< endl;
     for(int i = 0 ; i<13;i++)
    {

        cout<<arr[i]<<" ";
    }






}