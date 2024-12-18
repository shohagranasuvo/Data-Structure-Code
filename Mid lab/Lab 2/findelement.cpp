#include <iostream>
using namespace std;

int main()
{

    int arr [10],a,count= 0 ;
    for(int i = 0 ; i<10 ; i++)
    {
         cout<<"Enter "<<i+1 <<" number elementof 1 st = ";

        cin>>arr[i];

    }
    

    cout<<"Enter a number ";
    cin>>a;

    for(int i = 0 ; i<10;i++)
    {
        if(a==arr[i])
        {

            count++;
        }


    }

    cout<<"The number occurs "<<count<<" times in the array";


}