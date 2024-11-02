#include <iostream>
using namespace std;

bool search(int arr [],int size , int key)
{
    for (int i = 0 ; i< size ;i++)
    {


    if (arr[i]==key)
    {

        return 1;
        break;


    }

    
    }

return 0;

}



int main (){

    int arr[5]={1,-3,4,2,3};

    int size =sizeof(arr)/sizeof(arr[0]);




    cout<<size<<endl;
    int key ;

    cin>>key;


    bool ans =search (arr,size ,key);

    if (ans==1)
    {

        cout<<"Found it ";
    }
    else 
    {

        cout<<"Did not found ";
    }







}