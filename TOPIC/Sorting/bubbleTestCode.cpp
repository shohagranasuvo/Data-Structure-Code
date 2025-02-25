#include <bits/stdc++.h>
using namespace std;
void  bubble(int *arr , int  x )
{
    for(int i = 0 ; i<x ;i++)
    {
        for(int j = i+1 ;j<x ;j++)
        {

            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);

            }

        }
    }

}
void printarr(int * arr ,int x)
{
    cout<<"Your sorted array is :";
    for(int i = 0 ; i<x ;i++)
    {
        cout<<arr[i]<<" " ;


    }
}

int main() {
    int  x ; 
    cout<<"How many number want to sort "<<endl; 
    cin>>x ;

    int arr [x] ; 
    for(int i = 0  ; i <x; i++)
    {
        cin>>arr[i];

    }
    bubble (arr ,x);

    printarr (arr, x);

    
    
    
    return 0;
}