#include <bits/stdc++.h>
using namespace std ;


int main(){



    int arr[3][3],arr1[3][3],result[3][3];

    cout<<"Enter 1st matrix "<<endl;

    for(int i = 0 ; i<3 ;i++)
    {

        for(int  j = 0 ; j<3 ;j++)
        {

            cout<<"Enter element of row "<<i+1<<" and coloum "<<j+1 <<"= ";

            cin>>arr[i][j];
        }

    }

      cout<<"\n\nEnter 2nd  matrix "<<endl;

    for(int i = 0 ; i<3 ;i++)
    {

        for(int  j = 0 ; j<3 ;j++)
        {

            cout<<"Enter element of row "<<i+1<<" and coloum "<<j+1 <<"= ";

            cin>>arr1[i][j];

        }

    }


    for(int i =0 ; i<3;i++)
    {

        for(int j = 0 ;j<3 ;j++)
        { 

            for(int k = 0 ;k<3 ;k++)

            {

               result[i][j]= arr[i][k]*arr1[k][j];

                
            }

      
        
        }

         


    }

     cout<<"Result array is "<<endl;


          for(int i = 0 ; i<3 ;i++)
    {

        for(int  j = 0 ; j<3 ;j++)
        {

           

            cout<<result[i][j]<<"   ";

           
        }

        cout<<endl;

    }



   







}