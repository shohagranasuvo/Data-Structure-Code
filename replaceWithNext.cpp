#include <iostream>
using namespace std;

 void replace (int arr [],int size )
{
    
    for(int i = 0 ;i<size-1 ;i=i+2)

    {
        swap(arr[i],arr[i+1]);

        
    }



    
    
    }





void print(int arr[], int size ) {


    for(int i =0 ;i<size;i++)
    {


        cout<<arr[i]<<" ";
    }
}



int main (){

    int arr[6]={1,-3,4,2,3,5};

    int size =sizeof(arr)/sizeof(arr[0]);


    replace(arr ,size);




   

    print (arr,size);






}