#include <bits/stdc++.h>
using namespace std ;
int main(){

    int arr[5],count=0;

    for(int i = 0 ;i<5 ;i++)
    {

        cin>>arr[i];



    }

    vector <int >even ;
     vector <int >odd ;

     for(int i = 0 ;i<5 ;i++)
    {

        if (arr[i]%2==0)
        {


            count++;
            even.push_back(arr[i]);
        }

        else
        {

            odd.push_back(arr[i]);


        }

        



    }

    cout<<"Total even number "<<count<<"\nOdd number "<<5-count<<endl;

    cout<<"even number is = ";

    for (int ele : even){


        cout<<ele <<" " ;
    }


     cout<<"Odd number is = ";

    for (int ele : odd){


        cout<<ele <<" " ;
    }





return 0 ;

}