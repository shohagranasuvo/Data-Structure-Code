#include <bits/stdc++.h>
using namespace std;

int *multiply(int arr[],int arr1[] ,int size)
{
    int *c = new int [size] ;
    int i ;
    for( i = 0 ; i<size ;i++)
    {
        c[i]=arr[i]*arr1[i];


    }
    return c ;


}

void print (int* a,int size )
{

    for(int i = 0 ; i<size ;i++)
    {

        cout<<a[i]<<"\t";
    }

    cout<<endl;




}



int main()
{

    // int x = 10 ,y=20 ;
    // int *ptr = &x ;
    // ptr =&y ;
    // //*ptr=30 ;
    // //*ptr = x;
    // ptr++;
    //  ptr++;
    // cout<<"Address of x = "<<&x<<endl;
    // cout<<"Address of y = "<<&y<<endl;
    // cout<<"PTR holding address = "<<ptr<<endl<<*ptr<<endl;

    int *z ,arr[5]={1,2,3,4,5},arr1[5]={6,7,8,9,10};

    z=multiply(arr ,arr1 ,5);
    print (z , 5);
    print (arr , 5);
    print (arr1 , 5);



}