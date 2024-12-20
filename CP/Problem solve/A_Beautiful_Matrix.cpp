#include <bits/stdc++.h>
using namespace std ;
int main()
{

    int arr[5][5];
    for(int  i = 0 ;i < 5 ; i++)
    {
        for (int j = 0  ; j< 5 ;j++)
        {
            cin>>arr[ i] [ j];
        }
    }

     int row =0,col=0 ;
    for(int  x = 0 ;x < 5 ; x++)
    {
        for (int y = 0  ; y< 5 ;y++)
        {
            if(arr[x][y]==1)
            {
                row =x ;
                col = y;
                break ;

            }
        }
         if(arr[row][col]==1)
            {
               
                break ;

            }
    }

    int result = abs(2-row)+ abs(2-col);

    cout<<result<<endl ;

    

return 0 ;
    
}