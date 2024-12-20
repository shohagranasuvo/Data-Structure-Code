#include <bits/stdc++.h>
using namespace std;
 
int main () {

    int n ,result = 0 ;
    cin>>n ;

    char  arr[n][3];

     for(int i = 0 ; i<n ;i++)
    { 
        for(int  j = 0 ; j<3 ;j++)
        {

            cin>>arr[i][j];


        }}


    for(int  i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j< 3 ;j++)
        {

            if(arr[i][j]=='+')
            {
                result++;
                break ;

            }

            else if(arr[i][j]=='-')
            {
                result-- ;
                break ;
            
            }



        }
    }

    cout<<result<<endl;

return 0 ;
}