#include <bits/stdc++.h>
using namespace std;
 
int main () {
 
    int n ,sum=0,result = 0 ;
    cin>>n;
    int arr[n][3];
    for(int i = 0 ; i<n ;i++)
    { 
        for(int  j = 0 ; j<3 ;j++)
        {

            cin>>arr[i][j];


        }}

    for(int i = 0 ; i<n ;i++)
    { sum=0 ;
        for(int  j = 0 ; j<3 ;j++)
        {

            sum+=arr[i][j];



        }

        if(sum>=2)
        {
            result++ ;
        }
    }
    cout<<result<<endl ;






return 0 ;
}