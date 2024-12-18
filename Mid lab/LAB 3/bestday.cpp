#include <iostream>
using namespace std ;

int main(){

    int arr[7];

    for(int i =  0 ; i<7 ;i++)
    {

        cout<<"Stock price of "<<i+1<<" day = ";
        cin>>arr[i];




    }

    int bestbuy,bestsell,small=arr[0],big=arr[0];



    for(int i = 0 ; i<7 ; i++)
    {


        if (arr[i]>=big )
        {
            big =arr[i];
            bestsell=i ;
            

        }

        if(arr[i]<=small)
        {
            small = arr[i];
            bestbuy= i ;
        }


    }


    cout<<"Best buy day is "<<bestbuy+1<<" which is "<<small<<" taka\nBest sell day is "<<bestsell+1<<" which is "<<big<<" taka";



    }
    




