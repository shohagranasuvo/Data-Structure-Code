#include <bits/stdc++.h>
using namespace std;
 
int main () {

    int n ,result = 0,sum=0 ;
    cin>>n ;

    int  arr[n][3];

     for(int i = 0 ; i<n ;i++)
    { 
        for(int  j = 0 ; j<3 ;j++)
        {

            cin>>arr[i][j];


        }}
        bool check =true ;

        for(int i=0;i<3 ; i++)
        {
            for(int j = 0 ; j< n ;j++)
            {
                sum += arr[j][i];


            }
            if(sum!= 0)
            {   check = false ;
                break ;
                

            }
        }
        if(check==true)
        {

                cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



return 0 ; 
}