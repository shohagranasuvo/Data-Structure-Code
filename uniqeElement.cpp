#include <iostream>
using namespace std;

void uniqeElement(int arr[], int size )
{
    int ans = 0 ;

    for (int i=0 ; i<size;i++)
    {

        ans= ans^arr[i];




    }

    cout<< ans<<endl;




}
int main()
{

    int arr [11]={1,22,1,22,33,2,33,34,34,6,6};

    int size = sizeof(arr)/sizeof(arr[0]);
    uniqeElement(arr,size );










}
