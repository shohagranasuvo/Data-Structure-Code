#include <bits/stdc++.h>
using namespace std;
int sum(int arr[][100],int row ,int col )
{
    int s = 0 ; 

    for(int i=0;i<row;i++)
        {for(int j=0;j<col;j++)
        {
         if(arr[i][j]%2==0){
            if(i==0 )
            {
                s+=arr[i][j];

            }
            else if(i==row-1)
            {
                s+=arr[i][j];
            }
            else if(j==0)
            {
                s+=arr[i][j];
            }
            else if(j==col-1)
            {
                s+=arr[i][j];
            }


         }



        }
        }

        return s ;
    


}
int main() {
    


    int row,col;
    cin>>row>>col;

    int arr[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cin>>arr[i][j];
        }
    }
    int result = sum (arr , row ,col );
    cout<<"Border element sum = "<<result<<endl; 
    
    
    return 0;
}