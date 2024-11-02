#include <iostream>
using namespace std;
void checkValue(int arr[])
{
    bool f=false;

    for (int i =0 ;i<5;i++)
    {

        if (arr[i]==5)
        {

            cout<<"Find the value of 5 in index "<<i<<endl;

            f=true;


            break;
        }

    }
    if(f==false)
    {


        cout<<"Did not found"<<endl;
    }

}


int main()
{
    int arr[5]={1,2,3,4,5};

    checkValue(arr);






}